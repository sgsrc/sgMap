#ifndef _SG_DEMO_HEADER
#define _SG_DEMO_HEADER

#include <QtGui>
#include "ui_sg_menubasewidget.h"

class SGPlugin_MenubaseDialog : public QDialog, Ui::mDlgMenubase
{
	Q_OBJECT

public:
	SGPlugin_MenubaseDialog(QWidget* parent = 0);
	~SGPlugin_MenubaseDialog();

protected Q_SLOTS:
	
};

#endif // _SG_DEMO_HEADER