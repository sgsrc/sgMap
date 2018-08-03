#ifndef _SG_PLUGIN_H_INCLUDED
#define _SG_PLUGIN_H_INCLUDED

#include <map>
#include <QtCore\qobject.h>

typedef std::map<std::string, std::string> OGRVariantList;
typedef OGRVariantList* OGRVariantListH;
typedef int (*OGRProgressFunc)(double dfComplete, const char *pszMessage, void *pProgressArg);
typedef void *OGRProgressFuncH;
extern void *getHexToCallbackAddress(const char* pszHex, int encode = 16);

class SGPlugin : public QObject
{
    Q_OBJECT

protected Q_SLOTS:
    void on_mAction_triggered(bool);
};

#endif // _SG_PLUGIN_H_INCLUDED