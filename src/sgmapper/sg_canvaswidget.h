#ifndef _SG_CANVASWIDGET_H_INCLUDED
#define _SG_CANVASWIDGET_H_INCLUDED

#include "sg_event.h"
#include "ogr_api.h"
#include "ui_sg_mapper.h"

class SGMapper;

class SGCanvasWidget : public QWidget
{
public:
	SGCanvasWidget (QWidget* parent = 0) : QWidget(parent), mApp(0) {}
	virtual ~SGCanvasWidget ()	{}

protected:
	virtual void		resizeEvent(QResizeEvent *);

public:
	SGMapper*	mApp;
};

#endif // _SG_CANVASWIDGET_H_INCLUDED