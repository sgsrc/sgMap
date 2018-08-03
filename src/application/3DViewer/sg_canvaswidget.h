#ifndef _SG_CANVASWIDGET_H_INCLUDED
#define _SG_CANVASWIDGET_H_INCLUDED

#include "sg_event.h"
#include "ogr_api.h"
#include "ui_sg_mainwidget.h"

class SG3DViewer;

class SGCanvasWidget : public QWidget
{
public:
	SGCanvasWidget (QWidget* parent = 0) : QWidget(parent), mApp(0) {}
	virtual ~SGCanvasWidget ()	{}

protected:
	virtual void		resizeEvent(QResizeEvent *);

public:
	SG3DViewer*	mApp;
};

#endif // _SG_CANVASWIDGET_H_INCLUDED