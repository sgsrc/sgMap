#include "sg_mapper.h"
#include "ogr_api.h"

#include <QtCore/QTranslator>
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	OGRCommonFactoryH hComFac = OGR_CF_GetCommonFactory();
	OGRUtilityH hUtil = OGR_CF_CreateUtility(hComFac);
	QString strPath = OGR_UT_GetModuleFilePath(hUtil);
	QString strLang = OGR_UT_GetConfigOption("MSG_LAN");
	OGR_UT_Destroy(hUtil);

	QApplication* poApp = qApp;
	QTranslator tran;
	QString msgFile = strPath + "/Config/Languages/sgmapper_" + (strLang != "" ? strLang : "en_US");
	tran.load(msgFile);
	
	poApp->installTranslator(&tran);
	SGMapper w;
	QStringList lstValues;
	for (int i = 1; i < argc; ++i)
		lstValues << QString::fromLocal8Bit(argv[i]);
	w.SetInitParameters(lstValues);
	w.show();
	return poApp->exec();
}
