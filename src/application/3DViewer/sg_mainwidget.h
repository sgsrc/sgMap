#ifndef _SG_DRONEDATAMANAGER_H_INCLUDED
#define _SG_DRONEDATAMANAGER_H_INCLUDED

#include "sg_event.h"
#include "gdal.h"
#include "ui_sg_mainwidget.h"

class SG3DViewer : public QMainWindow, public Ui::GQManagerWidget, public FeatureCanvasEvent, public MapEvent
{
	Q_OBJECT

public:
	SG3DViewer();
	virtual ~SG3DViewer();

	static int CPL_STDCALL UpdateWarpProgress( double dfComplete, const char *pszMessage, void *pProgressArg );

	// MapEvent
	virtual void		ScreenModeChanged(ScreenModeEnumH eScreenModeH);

	// FeatureCanvasEvent
	virtual void		LayerAdded(OGRFeatureLayerShadow *poFtLayer) {};
	virtual void		LayerDeleted() {};

public Q_SLOT:
	void				mapSizeChanged();

protected Q_SLOTS:
	void				setScreenMode(ScreenModeEnumH mode);

	void				on_mAtnImageOpen_triggered();
	void				on_mAtnDEMOpen_triggered();
	void				on_mAtnViewPointGrid_triggered();
	void				on_mAtnViewAnimation_triggered();
	void				on_mAtnSetting_triggered();
	void				on_mAtn3DOpen_triggered();
	
	// changed screenmode
	void				on_mAtnViewPan_triggered()		{ setScreenMode(jmSM_PanningMode); }
	void				on_mAtnViewDistance_triggered()	{ setScreenMode(jmSM_DistanceMode); }
	void				on_mAtnViewArea_triggered()		{ setScreenMode(jmSM_AreaMode); }
	void				on_mAtnViewVolume_triggered();
	void				on_mAtnTerrainProfile_triggered();
	void				on_mAtnViewSightRadial_triggered();

	void				on_mAtnZoomPrev_triggered()			{ /*OGR_3D_ZoomPrevious(m_hCanvas);*/ }
	void				on_mAtnZoomNext_triggered()			{ /*OGR_3D_ZoomNext(m_hCanvas);*/ }
	void				on_mAtnRefresh_triggered()			{ /*OGR_3D_Invalidate(m_hCanvas);*/ }

	void				onTimer();

protected:
	virtual void		resizeEvent(QResizeEvent *);
	virtual void		closeEvent(QCloseEvent*);

private:
	OGRCommonFactoryH	m_hCommFac;
	OGRDisplayFactoryH	m_hDisFac;
	OGRApplicationH		m_hApp;
	OGRFeatureCanvasH	m_hFtCvs;
	OGRMap2DH			m_hCanvas;

	QString				m_strCurPath;
	QString				m_strDataWare;
	QTimer*				m_pTimer;
};

#endif // _SG_DRONEDATAMANAGER_H_INCLUDED