// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <stdlib.h>
#include <stdio.h>

FILE* fp;

void log(const char* format, ...) {
    if (!fp)
        fp = fopen("C:\\Users\\USER\\Downloads\\log.txt", "w");
    va_list args;
    va_start(args, format);
    vfprintf(fp, format, args);
    va_end(args);
    fflush(fp);
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        log("Attaching...\n");
        MessageBoxA(NULL, "DLL injected", "Injected", MB_OK);
        log("Finished attaching, %d\n", GetLastError());
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

