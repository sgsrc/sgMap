#include <cmath>
#include <cstdio>
#include <ctime>
#include <string>
#include <ogr_api.h>
#include "sg_plugin.h"

// ********** typecasting function ************ 
OGRApplicationH s_hApp = 0;
OGRFeatureCanvasH s_hFtCvs = 0;
OGRFeatureLayerH s_hFtLayer = 0;
OGRCanvasH s_hCvs = 0;

static void OGRGetParameter(OGRParametersH hParams)
{
	if(hParams == 0) return;
	OGRParameterH hParam = 0;
	hParam = OGR_PTS_GetParameter(hParams, "Application");
	if(hParam != 0) s_hApp = OGR_PT_GetHandle(hParam);
	hParam = OGR_PTS_GetParameter(hParams, "FeatureCanvas");
	if(hParam != 0) s_hFtCvs = OGR_PT_GetHandle(hParam);
	hParam = OGR_PTS_GetParameter(hParams, "FeatureLayer");
	if(hParam != 0) s_hFtLayer = OGR_PT_GetHandle(hParam);
	hParam = OGR_PTS_GetParameter(hParams, "Canvas");
	if(hParam != 0) s_hCvs = OGR_PT_GetHandle(hParam);
}

// ********** extern function ************ 
#if defined(PLUGINEXTERN_EXPORT)
#define PLUGINEXTERN extern "C" __declspec(dllexport)
#else 
#define PLUGINEXTERN extern "C" __declspec(dllimport)
#endif

PLUGINEXTERN const char* GetName()		{ return "qt_plugin"; }
PLUGINEXTERN const char* GetDescription(){ return "qt algorithm library"; }
PLUGINEXTERN const char* GetVendor()		{ return "dounggiduk@gmail.com"; }
PLUGINEXTERN const char* GetDocURL()		{ return "http://sgmap.sgsrc.net/"; }
PLUGINEXTERN const char* GetInitName()		{ return "qt_init"; }

std::string s_strOperName[] = {"qt_do"};
std::string s_strOperDescription[] = {"\n"};
std::string s_strOperVersion[] = {"1.0"};

PLUGINEXTERN int GetNumOperations()		{ return sizeof(s_strOperName)/sizeof(std::string); }
PLUGINEXTERN const char* GetOperName(int i)		{ return s_strOperName[i].c_str(); }
PLUGINEXTERN const char* GetOperDescription(int i) { return s_strOperDescription[i].c_str(); }
PLUGINEXTERN const char* GetOperSourceVersion(int i)	{ return s_strOperVersion[i].c_str(); }

// ********** real function ************ 
PLUGINEXTERN void qt_init(void* param);
PLUGINEXTERN bool qt_do(void* param);
// **********************************

// QT based Event
#include <QtCore\qtranslator.h>
#include <QtGui\qapplication.h>
#include <QtGui\qmainwindow.h>
#include <QtGui\qmenubar.h>
#include <QtGui\qmenu.h>
#include <QtGui\qmessagebox.h>
#include "sg_qt.h"

SGPlugin s_oPluginEvent;
QMainWindow* s_MainWidget;
QString GetLoadLanguagePack()
{
	OGRCommonFactoryH hComFac = OGR_CF_GetCommonFactory();
	OGRUtilityH hUtil = OGR_CF_CreateUtility(hComFac);
	QString strPath = OGR_UT_GetModuleFilePath(hUtil);
	QString strLang = OGR_UT_GetConfigOption("MSG_LAN");
	OGR_UT_Destroy(hUtil);

	return (strPath + "/Config/Languages/sgi-qt_" + (strLang != "" ? strLang : "en_US"));
}

QTranslator s_trsLang;
void qt_init(void* param)
{
	// init mapper gui
	OGRParametersH hParams = (OGRParametersH) param;
	OGRParameterH hErrParam = 0;
	if(hParams != 0) hErrParam = OGR_PTS_GetParameter(hParams, "error");
	OGRGetParameter(hParams);

	s_trsLang.load(GetLoadLanguagePack());
	qApp->installTranslator(&s_trsLang);

	// add menu
	s_MainWidget = (QMainWindow*) OGR_APP_GetMainWindow(s_hApp);
	QString strMenuRoot = "mnuExtPlugIn";
	QString strMenuTitle = QApplication::tr("&PlugIn");
	QMenu* poMenu = (QMenu*)OGR_APP_GetMenu(s_hApp, strMenuRoot.toUtf8().constData(), strMenuTitle.toUtf8().constData());
	QAction* poAction = poMenu->addAction(QApplication::tr("demo"));
	poAction->setObjectName("mAtnPlugIn");
	// connect event
	QObject::connect(poAction, SIGNAL( triggered(bool) ), &s_oPluginEvent, SLOT(on_mAction_triggered(bool)) );
}

void SGPlugin::on_mAction_triggered(bool)
{
	SGPlugin_MenubaseDialog dlg;
	dlg.exec();
}