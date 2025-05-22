#include <windows.h>
#include <memory>
#include "features/Aimbot.hpp"
#include "hooks/CreateMove.hpp"
#include "hooks/SilentAimHook.hpp"

static auto createMoveHook = std::make_shared<CreateMoveHook>();
static auto silentAimHook = std::make_shared<SilentAimHook>();

DWORD QuitThread(void * arg) {
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

        MH_Initialize();

        CreateMoveHook::addBefore(AimBot::findTarget);
        createMoveHook->enable();
        silentAimHook->enable();

    } else if (ul_reason_for_call == DLL_PROCESS_DETACH) {
        createMoveHook->free();
        silentAimHook->free();
        MH_Uninitialize();
    }

    return TRUE;
}
