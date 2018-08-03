#ifndef _SG_DEMO_HEADER
#define _SG_DEMO_HEADER

#include <QtGui>
#include "ui_sg_demowidget.h"

class DlgDemo : public QDialog, Ui::Dialog
{
	Q_OBJECT

public:
	DlgDemo(QWidget* parent);
	~DlgDemo();

protected Q_SLOTS:
	
};

#endif // _SG_DEMO_HEADER