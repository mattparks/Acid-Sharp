#pragma once

//
// Flounder exports (prerequisites) file.
//

#if defined(WIN32) || defined(_WIN32)
#  if defined(_MSC_VER)
#    define FL_EXPORT __declspec(dllexport)
#  else
#    define FL_EXPORT __attribute__ ((dllexport))
#  endif
#  define FL_HIDDEN
#else
#  define FL_EXPORT __attribute__ ((visibility ("default")))
#  define FL_HIDDEN __attribute__ ((visibility ("hidden")))
#endif
