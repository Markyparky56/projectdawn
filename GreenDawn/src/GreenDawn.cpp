#include "GreenDawn.hpp"

GD_EXPORT int GreenDawn::dllCheck()
{
    return 1;
}

#ifdef _WIN32
// DLL Entry Point
BOOL WINAPI DllMain(__in HINSTANCE hinstDLL, __in DWORD fdwReason, __in LPVOID lpcReserved)
{
    return TRUE;
}
#endif