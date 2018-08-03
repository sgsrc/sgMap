#include "sg_mapper.h"
#include "sg_canvaswidget.h"

#include <QtCore/QTimer>
#include <QtCore/QSettings>

void SGCanvasWidget::resizeEvent(QResizeEvent *evt)
{
	if(mApp != 0)
		emit mApp->mapSizeChanged();
}

SGMapper::SGMapper() : m_bTimeDelay(false)
{
	setupUi( this );

	m_hCommFac = OGR_CF_GetCommonFactory();
	m_hDisFac = OGR_CF_GetDisplayFactory(m_hCommFac);
	if(m_hDisFac == 0) 
		return;

	m_hApp = OGR_DF_CreateWidget(m_hDisFac, "Application");
	OGR_APP_SetDisplayMenuBar(m_hApp, true);
	m_hFtCvs = OGR_APP_GetFeatureCanvas(m_hApp);

	// init map srceen
	OGR_WG_Initialize(m_hApp, (unsigned int)mWgtApp->winId());
	mWgtApp->mApp = this;

	// init 2d, 3d
	OGRDockWidgetH hCvsWidget = OGR_DF_CreateWidget(m_hDisFac, "DockWidget");
	m_hCanvas = OGR_DW_SetCanvas(hCvsWidget, "2D", "map2d");
	OGR_2D_SetPointOnSurface(m_hCanvas, true);
	OGR_WG_AddWidget(m_hApp, hCvsWidget);
	
	// init feature attribute window
	OGRDockWidgetH hAttDockWidget = OGR_DF_CreateWidget(m_hDisFac, "DockWidget");
	OGR_DW_SetWidget(hAttDockWidget, 0, OGR_DF_CreateWidget(m_hDisFac, "FeatureAttributeTreeWidget"));
	OGR_APP_AddDockWidget(m_hApp, jmDA_Left, hAttDockWidget);

	// init layer control window
	OGRDockWidgetH hLayerDockWidget = OGR_DF_CreateWidget(m_hDisFac, "DockWidget");
	OGR_DW_SetWidget(hLayerDockWidget, 0, OGR_DF_CreateWidget(m_hDisFac, "LayerTreeWidget"));
	OGR_APP_AddDockWidget(m_hApp, jmDA_Left, hLayerDockWidget);
	OGR_APP_TabifyDockWidget(m_hApp, hAttDockWidget, hLayerDockWidget);

	// init index map window
	OGRDockWidgetH hIdxDockWidget = OGR_DF_CreateWidget(m_hDisFac, "DockWidget");
	OGR_DW_SetWidget(hIdxDockWidget, 0, OGR_DF_CreateWidget(m_hDisFac, "IndexMapWidget"));
	OGR_APP_AddDockWidget(m_hApp, jmDA_Left, hIdxDockWidget);

	if(m_hFtCvs != 0)
		OGR_FV_AddEventListener(m_hFtCvs, (OGREventH) (FeatureCanvasEvent*)this);

	m_nTimerID = startTimer(500);

	QSettings settings;
	restoreGeometry(settings.value("geometry").toByteArray());
	restoreState(settings.value("state").toByteArray());
}

SGMapper::~SGMapper()
{
	if(m_hFtCvs != 0)
		OGR_FV_RemoveEventListener(m_hFtCvs, (OGREventH) (FeatureCanvasEvent*)this);

	if(m_hApp != 0)
		OGR_WG_Destroy(m_hApp);
}

void SGMapper::closeEvent(QCloseEvent *evt)
{
	QSettings settings;
    settings.setValue("geometry", saveGeometry());
    settings.setValue("state", saveState());

	hide();
	this->deleteLater();
}

void SGMapper::resizeEvent(QResizeEvent *evt)
{
	QMainWindow::resizeEvent(evt);
	emit mapSizeChanged();
}

void SGMapper::mapSizeChanged()
{
	if(m_hApp != 0 && m_bTimeDelay == true)
		OGR_WG_ReSize(m_hApp, 0, 0, mWgtApp->width(), mWgtApp->height());
}

void SGMapper::timerEvent(QTimerEvent *evt)
{
	killTimer(m_nTimerID);
	m_bTimeDelay = true;
	emit mapSizeChanged();

	if(m_lstArgs.size() == 0 || m_lstArgs[0].right(4).compare(".exe", Qt::CaseInsensitive) == 0)
	{
		setWindowTitle(QString::fromUtf8(OGR_APP_GetTitle(m_hApp)));
		return;
	}
	bool bRefresh = false;
	for(QStringList::iterator iter = m_lstArgs.begin(); iter != m_lstArgs.end(); iter++)
	{
		QString strValue = *iter;
		if(strValue.right(4).compare(".xws", Qt::CaseInsensitive) == 0 ||
			strValue.right(4).compare(".jws", Qt::CaseInsensitive) == 0)
		{
			OGR_FV_ReadWorkspace(m_hFtCvs, strValue.toUtf8().constData());
			bRefresh = true;
		}
		else if(strValue.right(3).compare(".js", Qt::CaseInsensitive) == 0)
			OGR_APP_RunScript(m_hApp, strValue.toUtf8().constData(), 0);
		else if(strValue.compare("debug", Qt::CaseInsensitive) == 0 || 
			strValue.compare("-debug", Qt::CaseInsensitive) == 0)
		{
			OGRCommonFactoryH hComFac = OGR_CF_GetCommonFactory();
			OGRUtilityH hUtil = OGR_CF_CreateUtility(hComFac);
			OGR_UT_SetDebug(hUtil, 1);
			OGR_UT_Destroy(hUtil);
		}
		else if(strValue.left(1).compare("-") == 0)
		{
			OGRCommonFactoryH hComFac = OGR_CF_GetCommonFactory();
			OGRUtilityH hUtil = OGR_CF_CreateUtility(hComFac);
			QString strName = strValue.mid(1);
			QStringList lstOptions = strName.split(" ");
			if(lstOptions.size() > 1)
				OGR_UT_SetConfigOption(lstOptions[0].toUtf8().constData(), 
				lstOptions[1].toUtf8().constData());
			OGR_UT_Destroy(hUtil);
		}
		else
		{
			QString strConn = OGR_FV_GetConnectStringFromFileName(m_hFtCvs, strValue.toUtf8().constData(), 0);
			if(strConn != "")
			{
				if(OGR_FV_AddLayerSource(m_hFtCvs, strConn.toUtf8().constData()) != 0 && m_hCanvas != 0)
					OGR_2D_ZoomAll(m_hCanvas);
			}
		}
	}
	if(bRefresh == true)
		OGR_FV_Invalidate(m_hFtCvs);
	setWindowTitle(QString::fromUtf8(OGR_APP_GetTitle(m_hApp)));
	m_lstArgs.clear();
}

void SGMapper::WorkspaceChanged()
{
	if(m_hApp != 0)
		setWindowTitle(QString::fromUtf8(OGR_APP_GetTitle(m_hApp)));
}