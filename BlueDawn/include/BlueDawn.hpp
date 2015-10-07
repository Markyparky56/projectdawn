#pragma once
/**********************************************/
// File: BlueDawn.hpp
// Author: Mark A. Ropper
// Created: 23:40 2015/09/27
/**********************************************/

#ifdef _WIN32
#include <Windows.h>
#  define BD_EXPORT __declspec( dllexport )
#else
#  define BD_EXPORT
#endif

BOOL WINAPI DllMain(__in HINSTANCE hinstDLL, __in DWORD fdwReason, __in LPVOID lpcReserved);

namespace BlueDawn
{
    BD_EXPORT int dllCheck();
}