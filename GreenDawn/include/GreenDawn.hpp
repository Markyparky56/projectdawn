#pragma once
/**********************************************/
// File: GreenDawn.hpp
// Author: Mark A. Ropper
// Created: 00:00 2015/09/28
/**********************************************/

#ifdef _WIN32
#include <Windows.h>
#  define GD_EXPORT __declspec( dllexport )
#else
#  define GD_EXPORT
#endif

BOOL WINAPI DllMain(__in HINSTANCE hinstDLL, __in DWORD fdwReason, __in LPVOID lpcReserved);

namespace GreenDawn
{
    GD_EXPORT int dllCheck();
}