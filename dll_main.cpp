#include <windows.h>
#include "MinHook.h"
#include "core/CS2.hpp"
#include "DebugOut.hpp"

DWORD QuitThread(void * arg) {
#ifdef _DEBUG
    CreateConsoleWindow();
#endif
    MH_Initialize();
    CS2::init();


    while (true) {
        if (GetAsyncKeyState(VK_END) & 1) {
            FreeLibraryAndExitThread((HINSTANCE)(arg) , 0);
        }
        ::Sleep(500);
    }
}


BOOL __stdcall DllMain(HINSTANCE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved) {

    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        // create panic thread, it isn't critical error if it fails
        if (const HANDLE hThread = ::CreateThread(nullptr, 0U, QuitThread, hModule, 0UL, nullptr); hThread != nullptr)
            ::CloseHandle(hThread);

    } else if (ul_reason_for_call == DLL_PROCESS_DETACH) {
        CS2::free();
        MH_Uninitialize();
    }

    return TRUE;
}
