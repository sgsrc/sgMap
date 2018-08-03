#include "sg_mainwidget.h"

#include "ogr_api.h"
#include <QtCore/QTranslator>
#include <QtGui/QApplication>
#include <QtGui/QCleanlooksStyle>

int main(int argc, char *argv[])
{
	OGRCommonFactoryH hComFac = OGR_CF_GetCommonFactory();
	OGRUtilityH hUtil = OGR_CF_CreateUtility(hComFac);
	QString strLang = OGR_UT_GetConfigOption("MSG_LAN");
	OGR_UT_Destroy(hUtil);

	QApplication* poApp = qApp;
	QTranslator tran;
	QString msgFile = poApp->applicationDirPath() + "/../Config/Languages/rpsfield3d_" + (strLang != "" ? strLang : "en_US");;
	tran.load(msgFile);
	
	poApp->installTranslator(&tran);
	SG3DViewer* w = new SG3DViewer();
	w->show();
	return poApp->exec();
}
