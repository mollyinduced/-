#pragma once
#include <Windows.h>
#include <iostream>
// ����һ������̨�������
inline void CreateConsoleWindow() {
    // ����һ���µĿ���̨
    if (AllocConsole()) {
        // ���°� stdout ���µĿ���̨
        FILE* file;
        freopen_s(&file, "CONOUT$", "w", stdout);
        freopen_s(&file, "CONOUT$", "w", stderr);
        freopen_s(&file, "CONIN$", "r", stdin);

        std::cout << "Console initialized. Standard output redirected." << std::endl;
    }
}