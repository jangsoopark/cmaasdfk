#ifndef __TEST_EXPORT_H__
#define __TEST_EXPORT_H__

#ifdef _WIN32
# ifdef TEST_DLL_EXPORT
#   define TEST_EXPORTED  __declspec( dllexport )
# else
#   define TEST_EXPORTED  __declspec( dllimport )
# endif
#else
# define TRACK_EXPORTED 
#endif

#endif