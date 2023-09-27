#pragma once

#ifdef ENCRYPT_EXPORTS
#define  PORTALAPI_UDEF_Class class __declspec(dllexport)
#else
#define  PORTALAPI_UDEF_Class class __declspec(dllimport)

#endif
