#include "sg_mainwidget.h"
#include "sg_canvaswidget.h"

#include <QtCore/QTimer>
#include <QtCore/QString>
#include <QtCore/QThread>
#include <QtCore/QSettings>
#include <QtGui/QMessageBox>
#include <QtGui/QFileDialog>
#include <QtGui/QInputDialog>
#include <QtGui/QWindowsXPStyle>
#include <QtGui/QWindowsVistaStyle>
#include <QtGui/QPlastiqueStyle>
#include <QtGui/QCleanlooksStyle>
#include <map>

void SGCanvasWidget::resizeEvent(QResizeEvent *evt)
{
	if(mApp != 0)
		emit mApp->mapSizeChanged();
}

SG3DViewer::SG3DViewer()
{
	setupUi( this );

	m_hCommFac = OGR_CF_GetCommonFactory();
	m_hDisFac = OGR_CF_GetDisplayFactory(m_hCommFac);
	if(m_hDisFac == 0) 
		return;

	m_hApp = OGR_DF_CreateWidget(m_hDisFac, "Application");
	OGR_APP_SetDisplayMenuBar(m_hApp, true);
	m_hFtCvs = OGR_APP_GetFeatureCanvas(m_hApp);

	OGR_WG_Initialize(m_hApp, (unsigned int)mWgtApp->winId());
	mWgtApp->mApp = this;

	// init ( Map2D, MapEarth)
	OGRDockWidgetH hCvsWidget = OGR_DF_CreateWidget(m_hDisFac, "DockWidget");
	m_hCanvas = OGR_DW_SetCanvas(hCvsWidget, "3D", "mapearth");
	OGR_WG_AddWidget(m_hApp, hCvsWidget);
	int bEnable, year, month, day, hour;
	OGR_3D_GetSkyDateTime(m_hCanvas, &bEnable, &year, &month, &day, &hour);
	if(hour < 7 || hour > 18) hour = 13;
	OGR_3D_SetSkyDateTime(m_hCanvas, 1, year, month, day, hour);
	
	// init DockWidget in FeatureAttributeTreeWidget
	OGRDockWidgetH hAttDockWidget = OGR_DF_CreateWidget(m_hDisFac, "DockWidget");
	OGR_DW_SetWidget(hAttDockWidget, tr("Attribute widget").toUtf8().constData(), OGR_DF_CreateWidget(m_hDisFac, "FeatureAttributeTreeWidget"));
	OGR_APP_AddDockWidget(m_hApp, jmDA_Left, hAttDockWidget);

	// init DockWidget in LayerTreeWidget
	OGRDockWidgetH hLayerDockWidget = OGR_DF_CreateWidget(m_hDisFac, "DockWidget");
	OGR_DW_SetWidget(hLayerDockWidget, tr("Layer widget").toUtf8().constData(), OGR_DF_CreateWidget(m_hDisFac, "LayerTreeWidget"));
	OGR_APP_AddDockWidget(m_hApp, jmDA_Left, hLayerDockWidget);
	OGR_APP_TabifyDockWidget(m_hApp, hAttDockWidget, hLayerDockWidget);
	OGRUtilityH hUtil = OGR_CF_CreateUtility(m_hCommFac);
	m_strCurPath = QString::fromUtf8(OGR_UT_GetModuleFilePath(hUtil));
	OGR_UT_Destroy(hUtil);

	// hide application's menu, toolbar
	OGR_APP_SetDisplayMenuBar(m_hApp, false);
	OGR_APP_SetDisplayToolBar(m_hApp, false);
	//OGR_APP_SetDisplayStatusBar(m_hApp, false);
	OGR_UT_SetConfigOption("CHK_SAVE_WKS", "FALSE");
	mMnbMain->hide();
	if(m_hCanvas != 0)
	{
		OGR_CVS_AddEventListener(m_hCanvas, (OGREventH) (MapEvent*)this);
		ScreenModeChanged(OGR_3D_GetScreenMode(m_hCanvas));
	}

	if(m_hFtCvs != 0)
		OGR_FV_RemoveEventListener(m_hFtCvs, (OGREventH) (FeatureCanvasEvent*)this);

	if(m_hFtCvs != 0)
		OGR_FV_AddEventListener(m_hFtCvs, (OGREventH) (FeatureCanvasEvent*)this);


	m_pTimer = new QTimer(this);
	connect(m_pTimer, SIGNAL(timeout()),this, SLOT(onTimer()));
	m_pTimer->start(500);

	//QString strConnect;
	//OGRLayerSourceFactoryH hLyFac = OGR_CF_GetLayerSourceFactory(m_hCommFac);
	//OGRLayerSourceH hLySrc = 0;
	//OGRLayerH hLy = 0;
	//// add openapi demlayer
	//strConnect.sprintf("Driver={J3D};layertype=elevationlayer;name=def_elv_map;driver=tms;options=cache_policy:no_cache,min_range:5,max_range:10,loading_weight:5;url=\"%sdata/default_dem_tms/tms.xml\";",
	//		OGR_UT_GetConfigOption("GEO_ROOT"));
	//hLySrc = OGR_LF_CreateLayerSource(hLyFac, strConnect.toUtf8().constData());
	//hLy = OGR_LS_GetLayer(hLySrc, 0);
	//if(hLy != 0)
	//{
	//	OGR_L_SetTitle(hLy, tr("Default Elevation Map").toUtf8().constData());
	//	OGR_FV_AddFeatureLayer(m_hFtCvs, OGR_L_GetFeatureLayer(hLy, hLySrc));
	//}

	//// add openapi imagelayer
	//strConnect.sprintf("Driver={J3D};layertype=imagelayer;name=def_img_map;driver=tms;options=lod_blending:1,cache_policy:no_cache;url=\"%sdata/default_tms/tms.xml\";",
	//			OGR_UT_GetConfigOption("GEO_ROOT"));
	//hLySrc = OGR_LF_CreateLayerSource(hLyFac, strConnect.toUtf8().constData());
	//hLy = OGR_LS_GetLayer(hLySrc, 0);
	//if(hLy != 0)
	//{
	//	OGR_L_SetTitle(hLy, tr("Default Image Map").toUtf8().constData());
	//	OGR_FV_AddFeatureLayer(m_hFtCvs, OGR_L_GetFeatureLayer(hLy, hLySrc));
	//}

	// add temporary modellayer
	/*strConnect.sprintf("Driver={J3D};layertype=modellayer;name=def_mdl_map;driver=feature_geom;features=driver:ogr(memory),url:\"\"");
	hLySrc = OGR_LF_CreateLayerSource(hLyFac, strConnect.toUtf8().constData());
	hLy = OGR_LS_GetLayer(hLySrc, 0);
	if(hLy != 0)
	{
		OGR_L_SetTitle(hLy, tr("Default Model Map").toUtf8().constData());
		OGR_FV_AddFeatureLayer(m_hFtCvs, OGR_L_GetFeatureLayer(hLy, hLySrc));
	}*/

	QCoreApplication::setOrganizationDomain("sgsrc.net");
	QCoreApplication::setOrganizationName("sgMap");
	QCoreApplication::setApplicationName("RPSField3D");

	QSettings settings;
	restoreGeometry(settings.value("geometry").toByteArray());
	restoreState(settings.value("state").toByteArray());
}

SG3DViewer::~SG3DViewer()
{
	if(m_hCanvas != 0)
		OGR_CVS_RemoveEventListener(m_hCanvas, (OGREventH) (MapEvent*)this);

	if(m_hFtCvs != 0)
		OGR_FV_RemoveEventListener(m_hFtCvs, (OGREventH) (FeatureCanvasEvent*)this);

	if(m_hApp != 0)
		OGR_WG_Destroy(m_hApp);
}

void SG3DViewer::resizeEvent(QResizeEvent *evt)
{
	QMainWindow::resizeEvent(evt);
	emit mapSizeChanged();
}

void SG3DViewer::mapSizeChanged()
{
	if(m_hApp)
		OGR_WG_ReSize(m_hApp, 0, 0, mWgtApp->width(), mWgtApp->height());
}

void SG3DViewer::closeEvent(QCloseEvent *evt)
{
	QSettings settings;
    settings.setValue("geometry", saveGeometry());
    settings.setValue("state", saveState());

	delete this;
}

void SG3DViewer::ScreenModeChanged(ScreenModeEnumH eScreenMode)
{
	mAtnViewPan->setChecked(eScreenMode == jmSM_PanningMode);
	mAtnViewDistance->setChecked(eScreenMode == jmSM_DistanceMode);
	mAtnViewArea->setChecked(eScreenMode == jmSM_AreaMode);
	mAtnViewVolumn->setChecked(eScreenMode == jmSM_VolumeMode);
	mAtnViewSightLinear->setChecked(eScreenMode == jmSM_SightMode);
	mAtnViewSightRadial->setChecked(eScreenMode == jmSM_SightMode);
	mAtnViewSightPolyhedral->setChecked(eScreenMode == jmSM_SightMode);
	mAtnTerrainProfile->setChecked(eScreenMode == jmSM_TerrainProfileMode);
}

void SG3DViewer::setScreenMode(ScreenModeEnumH mode)
{
	if(m_hFtCvs == 0) return;

	OGR_3D_SetScreenMode(m_hCanvas, mode);
}

void SG3DViewer::onTimer()
{
	m_pTimer->stop();
	delete m_pTimer;
	m_pTimer = 0;

	//OGR_APP_SendActionEvent(m_hApp, "mAtnViewMapEarth");
	return;
}

void SG3DViewer::on_mAtnImageOpen_triggered()
{
	if(m_hFtCvs == 0) return;

	QSettings settings("RPSField3D", "UIToolKit");
	QString lastUsedDir = settings.value( "/LastInDir", "." ).toString();
	QString fileName = QFileDialog::getOpenFileName(this, tr("Image FIle Open"), lastUsedDir);
	if(fileName == "")	return;

	int pos1 = fileName.lastIndexOf(".");
	int pos2 = fileName.lastIndexOf("/");
	QString strFormat = fileName.mid(pos1 + 1);
	QString strBaseName = fileName.mid(pos2 + 1, pos1 - pos2);

	settings.setValue( "/LastInDir", fileName.mid(0, pos2) );

	QString strConnect;
	QString strName = strBaseName + tr(" Image Map");
	if(QString::compare(strFormat, "xml") == 0)
		strConnect.sprintf("Driver={J3D};layertype=imagelayer;name=%s;driver=tms;options=lod_blending:1,cache_policy:no_cache;url=\"%s\";",
				strName.toUtf8().constData(), fileName.toUtf8().constData());
	else if(QString::compare(strFormat, "tif") == 0)
		strConnect.sprintf("Driver={J3D};layertype=imagelayer;name=%s;driver=gdal;options=tile_size:256;url=\"%s\";",
				strName.toUtf8().constData(), fileName.toUtf8().constData());
	else
		return;

	QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));
	OGR_FV_AddLayerSource(m_hFtCvs, strConnect.toUtf8().constData());
	QApplication::restoreOverrideCursor();
	OGR_3D_Invalidate(m_hCanvas);
}

void SG3DViewer::on_mAtnDEMOpen_triggered()
{
	if(m_hFtCvs == 0) return;

	QSettings settings("RPSField3D", "UIToolKit");
	QString lastUsedDir = settings.value( "/LastInDir", "." ).toString();
	QString fileName = QFileDialog::getOpenFileName(this, tr("DEM FIle Open"), lastUsedDir);
	if(fileName == "")	return;

	int pos1 = fileName.lastIndexOf(".");
	int pos2 = fileName.lastIndexOf("/");
	QString strFormat = fileName.mid(pos1 + 1);
	QString strBaseName = fileName.mid(pos2 + 1, pos1 - pos2);

	settings.setValue( "/LastInDir", fileName.mid(0, pos2) );

	QString strConnect;
	QString strName = strBaseName + tr("DEM");
	
	if(QString::compare(strFormat, "tif") == 0)
		strConnect.sprintf("Driver={J3D};layertype=elevationlayer;name=%s;driver=gdal;url=\"%s\";options=tile_size:24",
		strName.toUtf8().constData(), fileName.toUtf8().constData());
	else
		return;

	QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));
	OGR_FV_AddLayerSource(m_hFtCvs, strConnect.toUtf8().constData());
	QApplication::restoreOverrideCursor();
	OGR_3D_Invalidate(m_hCanvas);
}

void SG3DViewer::on_mAtn3DOpen_triggered()
{
	if(m_hApp == 0) return;
	OGR_APP_SendActionEvent(m_hApp, "mAtnOpen3DPath");
}

void SG3DViewer::on_mAtnViewVolume_triggered()
{
	if(m_hApp == 0) return;
	OGR_APP_SendActionEvent(m_hApp, "mAtnViewVolumn");
}

void SG3DViewer::on_mAtnTerrainProfile_triggered()
{
	if(m_hApp == 0) return;
	OGR_APP_SendActionEvent(m_hApp, "mAtnTerrainProfile");
}

void SG3DViewer::on_mAtnViewSightRadial_triggered()
{
	if(m_hApp == 0) return;
	OGR_APP_SendActionEvent(m_hApp, "mAtnViewSightRadial");
}

void SG3DViewer::on_mAtnViewPointGrid_triggered()
{
	if(m_hApp == 0) return;
	OGR_APP_SendActionEvent(m_hApp, "mAtnViewPointGrid");
}

void SG3DViewer::on_mAtnViewAnimation_triggered()
{
	if(m_hApp == 0) return;
	OGR_APP_SendActionEvent(m_hApp, "mAtnViewAnimation");
}

void SG3DViewer::on_mAtnSetting_triggered()
{	
	if(m_hApp == 0) return;
	OGR_APP_SendActionEvent(m_hApp, "mAtnViewMapEarthOption");
}