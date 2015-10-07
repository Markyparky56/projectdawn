#pragma once
/**********************************************/
// File: RedDawn.hpp
// Author: Mark A. Ropper
// Created: 00:01 2015/09/28
/**********************************************/

#ifdef _WIN32
#include <Windows.h>
#  define RD_EXPORT __declspec( dllexport )
#else
#  define RD_EXPORT
#endif

BOOL WINAPI DllMain(__in HINSTANCE hinstDLL, __in DWORD fdwReason, __in LPVOID lpcReserved);

namespace RedDawn
{
    RD_EXPORT int dllCheck();
}