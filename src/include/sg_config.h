#ifndef _SG_CONFIGDEFINE_H_INCLUDED
#define _SG_CONFIGDEFINE_H_INCLUDED

#pragma warning(disable:4018)	// signed, unsigned
#pragma warning(disable:4244)	// type casting double, long
#pragma warning(disable:4267)	// size_t, int typecasting
#pragma warning(disable:4305)	// int, bool typecasting
#pragma warning(disable:4312)	// 
#pragma warning(disable:4482)	// Enum typecasting
#pragma warning(disable:4800)	// type casting VARIANT_BOOL, long
#pragma warning(disable:4805)	// type casting BOOL, bool
#pragma warning(disable:4819)	// 
#pragma warning(disable:4996)	// strcpy, stricmp

#define BUILD_USE_SKIA 1
#define BUILD_USE_QT 1
#undef BUILD_USE_NPAPI

#if defined(ANDROID)
#   define SK_BUILD_FOR_ANDROID
#   define SK_BUILD_FOR_ANDROID_NDK
#	undef BUILD_USE_QT
#elif defined(IOS)
#   define SK_BUILD_FOR_IOS
#else
#	define BUILD_USE_NPAPI 1
#endif

#endif //_SG_CONFIGDEFINE_H_INCLUDED
