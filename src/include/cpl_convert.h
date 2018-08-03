#ifndef CPL_CONVERT_H_INCLUDED
#define CPL_CONVERT_H_INCLUDED

#include "cpl_string.h"
#include "cpl_multiproc.h"
#include <list>
#include <openssl/rsa.h>
#ifndef HAVE_XGCONFIG
#include "sg_config.h"
#endif
#ifdef BUILD_USE_SKIA
#include <images/SkImageEncoder.h>
#include <images/SkImageDecoder.h>
#endif

#define SG_GET_RGB(r, g, b)			((GUInt32)(((GUInt8)(r)|((GUInt16)((GUInt8)(g))<<8))|(((GUInt32)(GUInt8)(b))<<16)))
#define SG_GET_RGBA(r, g, b, a)		((GUInt32)(((GUInt8)(r)|((GUInt16)((GUInt8)(g))<<8))|(((GUInt32)(GUInt8)(b))<<16)|(((GUInt32)(GUInt8)(a))<<24)))
#define TOBYTE(w)					((GUInt8)(((GUInt32)(w)) & 0xff))
#define SG_GET_R(rgb)				(TOBYTE(rgb))
#define SG_GET_G(rgb)				(TOBYTE(((GUInt16)(rgb)) >> 8))
#define SG_GET_B(rgb)				(TOBYTE((rgb)>>16))
#define SG_GET_A(rgb)				(TOBYTE((rgb)>>24))

CPL_C_START

#ifdef BUILD_USE_SKIA
void    CPL_DLL     CPLHexToBitmap(const char *pszHex, SkBitmap &bitmap);
#endif
void    CPL_DLL     CPLHexToString(const char *pszHex, CPLString &str);
char*   CPL_DLL     CPLDoubleToSepStr(double val, char *buf, int round);
int		CPL_DLL		CPLRandomValueinRange(int v);
long	CPL_DLL		CPLRandomRGBColor();
long	CPL_DLL		CPLRandomRGBAColor();
void	CPL_DLL		CPLRandomRGBHexColor(CPLString &val);
void	CPL_DLL		CPLRGBHexColor(long color, CPLString &val);

RSA*	CPL_DLL     CPLRSAGenerateKey(long bytelen = 64);
GInt8*  CPL_DLL     CPLEncryption(char *pszKeyVal, const GInt8* pData, int nInLen);
GInt8*  CPL_DLL     CPLDecryption(char *pszKeyVal, const GInt8* pData, int nInLen);
const char* CPL_DLL CPLDefaultEncKey();

const char*	CPL_DLL	CPLStringToUnicode(const char* pszVal, const char* pszEncoding = 0);
const char*	CPL_DLL	CPLStringToUTF8(const char* pszVal, const char* pszEncoding = 0);
void	CPL_DLL		CPLIntToStr(GUInt32 nValue, CPLString& retVal, int radix);
const char* CPL_DLL CPLGetAbsoluteFileName(const char* pszFileName, const char* pszParentURL = 0);
int		CPL_DLL		CPLIsExistFile(const char* pszfilename);

CPL_C_END

#if defined(__cplusplus) && !defined(CPL_SUPRESS_CPLUSPLUS)

class CPLThreadTaskService;
typedef int (CPL_STDCALL *GDALThreadTaskFunc)(CPLThreadTaskService* poService, void *pData);
class CPL_DLL CPLThreadTask
{
	friend class CPLThreadTaskService;

public:
	CPLThreadTask();
	void			SetTaskFunction(GDALThreadTaskFunc pfnTask, GDALThreadTaskFunc pfnClear, void* poData)	{ m_pfnFunc = pfnTask; m_pfnClearFunc = pfnClear; m_poData = poData; }

public:
	static void		runThread(void *);

protected:
	CPLThreadTaskService* m_pParent;
	GDALThreadTaskFunc	m_pfnFunc;
	GDALThreadTaskFunc	m_pfnClearFunc;
	void*				m_poData;
};

class CPL_DLL CPLThreadTaskService
{
	friend class CPLThreadTask;

public:
    CPLThreadTaskService();
    ~CPLThreadTaskService();

	void		Add(CPLThreadTask* request );
	int			GetNumTasks();
	int			GetNumThreads();
	void		SetNumConCurrentThreads(int num){ m_nNumTask = num; }
	int			GetNumConCurrentThreads()		{ return m_nNumTask; }
	void		SetFirstBackOrder(bool val)	{ m_bBackOrder = true; }
	void		Clear();
	void		Run();
	void		Stop()						{ m_bStop = true; }
	CPLMutex*	GetSingleThreadMutex()	{ return m_pSingleProcMutex; }

public:
	void		removeThread(CPLThreadTask* request);

private:
	CPLThreadTask*	getFrontTask();
	CPLThreadTask*	getBackTask();
	void			addThread(CPLThreadTask* request);

private:
	CPLMutex *m_pTaskMutex;
	CPLMutex *m_pThreadMutex;
	CPLMutex *m_pSingleProcMutex;
	std::list<CPLThreadTask*>	m_lstTask;
	std::list<CPLThreadTask*>	m_lstThread;
	int		m_nNumTask;
	bool	m_bBackOrder;
	bool	m_bStop;
	bool	m_bRunning;
};

#endif /* def __cplusplus */

#endif // CPL_CONVERT_H_INCLUDED
