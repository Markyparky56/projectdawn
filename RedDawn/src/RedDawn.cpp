#include "RedDawn.hpp"

RD_EXPORT int RedDawn::dllCheck()
{
    return 1;
}

// DLL Entry Point
BOOL WINAPI DllMain(__in HINSTANCE hinstDLL, __in DWORD fdwReason, __in LPVOID lpcReserved)
{
    return TRUE;
}
