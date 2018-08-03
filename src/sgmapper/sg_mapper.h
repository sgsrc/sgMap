#ifndef _SG_MAPPER_H_INCLUDED
#define _SG_MAPPER_H_INCLUDED

#include "sg_event.h"
#include "gdal.h"
#include "ui_sg_mapper.h"

class SGMapper : public QMainWindow, public Ui::GQManagerWidget, public FeatureCanvasEvent
{
	Q_OBJECT

public:
	SGMapper();
	virtual ~SGMapper();

	void		SetInitParameters(QStringList &lstValue) { m_lstArgs = lstValue; }

	// featurecanvas event
	virtual void WorkspaceChanged();

public Q_SLOT:
	void				mapSizeChanged();

protected:
	virtual void		resizeEvent(QResizeEvent *);
	virtual void		closeEvent(QCloseEvent*);
	virtual void		timerEvent(QTimerEvent *event);

private:
	OGRCommonFactoryH	m_hCommFac;
	OGRDisplayFactoryH	m_hDisFac;
	OGRApplicationH		m_hApp;
	OGRFeatureCanvasH	m_hFtCvs;
	OGRMap2DH			m_hCanvas;

	QString				m_strCurPath;
	int					m_nTimerID;
	QStringList			m_lstArgs;
	bool			m_bTimeDelay;
};

#endif // _SG_MAPPER_H_INCLUDED