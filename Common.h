#pragma once

#ifdef ENCRYPT_EXPORTS
#define  UDEF_Class class __declspec(dllexport)
#else
#define  UDEF_Class class __declspec(dllimport)

#endif
