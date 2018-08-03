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

void *getHexToCallbackAddress(const char* pszHex, int encode)
{
	void* poVal = 0;
#if defined(_WIN64) || defined(_M_X64)
	_Longlong tmpVal = std::stoll(pszHex, 0, encode);
	poVal = (void*) tmpVal;
#else
	long tmpVal = std::stol(pszHex, 0, encode);
	poVal = (void*) tmpVal;
#endif
	return poVal;
}

void OGRGetParameter(OGRVariantListH hArg)
{
	std::map<std::string, std::string>::iterator iter = hArg->find("Application");
	if(iter != hArg->end()) s_hApp = getHexToCallbackAddress(iter->second.c_str());
	iter = hArg->find("FeatureCanvas");
	if(iter != hArg->end()) s_hFtCvs = getHexToCallbackAddress(iter->second.c_str());
	iter = hArg->find("FeatureLayer");
	if(iter != hArg->end()) s_hFtLayer = getHexToCallbackAddress(iter->second.c_str());
	iter = hArg->find("Canvas");
	if(iter != hArg->end()) s_hCvs = getHexToCallbackAddress(iter->second.c_str());
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
QString GetLoadLanguagePack()
{
	OGRCommonFactoryH hComFac = OGR_CF_GetCommonFactory();
	OGRUtilityH hUtil = OGR_CF_CreateUtility(hComFac);
	QString strPath = OGR_UT_GetModuleFilePath(hUtil);
	QString strLang = OGR_UT_GetConfigOption("MSG_LAN");
	OGR_UT_Destroy(hUtil);

	return (strPath + "/Config/Languages/sgi-qt_" + (strLang != "" ? strLang : "en_US"));
}

void SGPlugin::on_mAction_triggered(bool)
{
	QMainWindow* s_MainWidget = (QMainWindow*) s_hApp;
	DlgDemo dlg(s_MainWidget);
	dlg.exec();
}

QTranslator s_trsLang;
QMenu* SetMenuPosition(QMenuBar* mnuBar, QString &strPos, QString &strTitle)
{
	QStringList lstName = strPos.split(";");
	QStringList lstTitle = strTitle.split(";");
	QMenu* mnu = 0;
	for(int i=0;i<lstName.size();i++)
	{
		QList<QMenu*> lstMenu;
		if(i == 0)
			lstMenu = mnuBar->findChildren<QMenu*>();
		else if(mnu != 0)
			lstMenu = mnu->findChildren<QMenu*>();
		bool bFind = false;
		for(QList<QMenu*>::iterator iter = lstMenu.begin(); iter != lstMenu.end(); iter++)
		{
			if((*iter)->objectName().compare(lstName[i], Qt::CaseInsensitive) == 0)
			{
				mnu = (*iter);
				bFind = true;
				break;
			}
		}
		if(bFind == false)
		{
			if(i == 0)
				mnu = mnuBar->addMenu(lstTitle[i]);
			else
				mnu = mnu->addMenu(lstTitle[i]);
			mnu->setObjectName(lstName[i]);
		}
	}
	return mnu;
}

void qt_init(void* param)
{
	OGRVariantListH hArg = (OGRVariantListH) param;

	// init mapper gui
	if(hArg->size() > 0)
		OGRGetParameter(hArg);
	s_trsLang.load(GetLoadLanguagePack());
	qApp->installTranslator(&s_trsLang);

	// add menu
	QMainWindow* pMainWidget = (QMainWindow*) s_hApp;
	QString strMenuRoot = "mnuExtPlugIn";
	QString strMenuTitle = QApplication::tr("&PlugIn");
	QMenu* poMenu = SetMenuPosition(pMainWidget->menuBar(), strMenuRoot, strMenuTitle);
	QAction* poAction = poMenu->addAction(QApplication::tr("demo"));
	poAction->setObjectName("mAtnPlugIn");
	// connect event
	QObject::connect(poAction, SIGNAL( triggered(bool) ), &s_oPluginEvent, SLOT(on_mAction_triggered(bool)) );
}