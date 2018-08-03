/* We define this here in general so that a VC++ build will publically
   declare STDCALL interfaces even if an application is built against it
   using MinGW */

/* Define if you don't have vprintf but do have _doprnt.  */
#undef HAVE_DOPRNT

/* Define if you have the vprintf function.  */
#undef HAVE_VPRINTF
#undef HAVE_VSNPRINTF
#undef HAVE_SNPRINTF
#if defined(_MSC_VER) && (_MSC_VER < 1500)
#   define vsnprintf _vsnprintf
#   define snprintf _snprintf
#endif

#define HAVE_GETCWD 1
/* gmt_notunix.h from GMT project also redefines getcwd. See #3138 */
#ifndef HAVE_GETCWD
#define getcwd _getcwd
#endif

/* Define if you have the ANSI C header files.  */
#ifndef STDC_HEADERS
#  define STDC_HEADERS 1
#endif

/* Define to 1 if you have the <assert.h> header file. */
#define HAVE_ASSERT_H 1

/* Define to 1 if you have the <fcntl.h> header file.  */
#define HAVE_FCNTL_H 1

/* Define if you have the <unistd.h> header file.  */
#undef HAVE_UNISTD_H

/* Define if you have the <stdint.h> header file.  */
#undef HAVE_STDINT_H

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

#undef HAVE_LIBDL 

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

#define HAVE_FLOAT_H 1

#define HAVE_ERRNO_H 1

#define HAVE_SEARCH_H 1

/* Define to 1 if you have the <direct.h> header file. */
#ifdef WIN32
#define HAVE_DIRECT_H 1
#define NOMINMAX
#else
#undef HAVE_DIRECT_H
#endif

/* Define to 1 if you have the `localtime_r' function. */
#undef HAVE_LOCALTIME_R

#if !defined (WIN32)
#define HAVE_DLFCN_H 1
#endif
#undef HAVE_DBMALLOC_H
#undef HAVE_LIBDBMALLOC
#undef WORDS_BIGENDIAN

/* The size of a `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of a `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* The size of a `unsigned long', as computed by sizeof. */
#define SIZEOF_UNSIGNED_LONG 4

/* The size of `void*', as computed by sizeof. */
#ifdef _WIN64
# define SIZEOF_VOIDP 8
#else
# define SIZEOF_VOIDP 4
#endif


/* Define to 1 if you have the ANSI C header files. */
#undef STDC_HEADERS

/* Define to 1 if you have fseek64, ftell64 */
#undef UNIX_STDIO_64

/* Define to 1 if you want to use the -fvisibility GCC flag */
#if !defined(WINCOM) && !defined(WIN32)
//#define USE_GCC_VISIBILITY_FLAG 1
// 2012.8.1 by gskim - mac/linux CPL_DLL is not support
#undef USE_GCC_VISIBILITY_FLAG
#endif

/* Define to 1 if GCC atomic builtins are available */
#undef HAVE_GCC_ATOMIC_BUILTINS

/* Define to name of 64bit fopen function */
#undef VSI_FOPEN64

/* Define to name of 64bit fseek func */
#undef VSI_FSEEK64

/* Define to name of 64bit ftell func */
#undef VSI_FTELL64

/* Define to 1, if you have 64 bit STDIO API */
#undef VSI_LARGE_API_SUPPORTED

/* Define to 1, if you have LARGEFILE64_SOURCE */
#undef VSI_NEED_LARGEFILE64_SOURCE

/* Define to name of 64bit stat function */
#undef VSI_STAT64

/* Define to name of 64bit stat structure */
#undef VSI_STAT64_T

/* Define to 1 if your processor stores words with the most significant byte
 first (like Motorola and SPARC, unlike Intel and VAX). */
#undef WORDS_BIGENDIAN

/* Set the native cpu bit order */
#define HOST_FILLORDER FILLORDER_LSB2MSB

/* Define as 0 or 1 according to the floating point format suported by the
   machine */
#define HAVE_IEEEFP 1

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
#  ifndef inline
#    define inline __inline
#  endif
#endif

#define lfind _lfind

#if defined(_MSC_VER)
#if (_MSC_VER < 1310)
#  define VSI_STAT64 _stat
#  define VSI_STAT64_T _stat
#else
#  define VSI_STAT64 _stat64
#  define VSI_STAT64_T __stat64
#endif
#endif

/* VC6 doesn't known intptr_t */
#if defined(_MSC_VER) && (_MSC_VER <= 1200)
    typedef int intptr_t;
#endif

#ifdef WIN32
#define GDAL_FILENAME_IS_UTF8_FLAG "NO"
#else
#define GDAL_FILENAME_IS_UTF8_FLAG "YES"
#define __linux 1
#endif

#if defined(WIN32)
    /*#define UINT8_MAX   _UI8_MAX
    #define UINT16_MAX  _UI16_MAX
    #define UINT32_MAX  _UI32_MAX
    #define UINT64_MAX  _UI64_MAX*/
#elif(LINUX)
	#define UINT8_MAX   UCHAR_MAX
    #define UINT16_MAX  USHRT_MAX
    #define UINT32_MAX  UINT_MAX
    #define UINT64_MAX  ULLONG_MAX
	#define CPL_MULTIPROC_PTHREAD 1
	#define HAVE_PTHREAD_MUTEX_RECURSIVE
#else
    #define FLT_MAX     __FLT_MAX__
    #define DBL_MAX     __DBL_MAX__
#endif

#pragma warning(disable:4018)	// signed, unsigned
#pragma warning(disable:4244)	// double, long
#pragma warning(disable:4267)	// size_t, int typecasting
#pragma warning(disable:4305)	// int, bool
#pragma warning(disable:4482)	// Enum
#pragma warning(disable:4786)	// size_t
#pragma warning(disable:4800)	// VARIANT_BOOL, long
#pragma warning(disable:4805)	// BOOL, bool
#pragma warning(disable:4996)	// strcpy, stricmp

// not supported c++ header
#define CPL_DISABLE_DLL
#undef GEO_DISABLE_DLL


