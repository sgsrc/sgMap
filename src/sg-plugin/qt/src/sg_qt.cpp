#include <cmath>
#include <cstdio>
#include <ctime>
#include <map>
#include <string>
#include <ogr_api.h>
#include "sg_plugin.h"

extern OGRApplicationH s_hApp;
extern OGRFeatureCanvasH s_hFtCvs;
extern OGRFeatureLayerH s_hFtLayer;
extern OGRCanvasH s_hCvs;

bool qt_do(void* param)
{
	OGRVariantListH hArg = (OGRVariantListH) param;
	OGRProgressFunc pfnProgress = 0;
	void* pfnProgressData = 0;
	std::string* pstrError = 0;
	std::map<std::string, std::string>::iterator iter = hArg->find("error");
	if(iter != hArg->end()) pstrError = &iter->second;

	return 0;
}

#include <QtGui\qapplication.h>
#include <QtGui\qmainwindow.h>
#include <QtGui\qmenubar.h>
#include <QtGui\qmenu.h>
#include "sg_qt.h"

DlgDemo::DlgDemo(QWidget* parent) : QDialog(parent)
{
	setupUi(this);
}

DlgDemo::~DlgDemo()
{
}