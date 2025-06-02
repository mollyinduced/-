#include <string>
#include <windows.h>
#include <filesystem>
#include "injector.h"
#include "mem.hpp"
#include <fstream>
class Utils {
public:
    static std::wstring getExePathW() {
        wchar_t fullName[256]{};
        GetModuleFileNameW(NULL, fullName, 256);

        auto str = std::wstring(fullName);
        return std::filesystem::path(str).parent_path().generic_wstring();
    }
    static std::string getExePath() {
        char fullName[256]{};
        GetModuleFileNameA(NULL, fullName, 256);
        auto str = std::string(fullName);
        return std::filesystem::path(str).parent_path().generic_string();
    }
};


static std::vector<char> readFileToVector(const std::string& filename) {
    // 以二进制模式打开文件，并将文件指针定位到末尾
    std::ifstream file(filename, std::ios::binary | std::ios::ate);
    if (!file.is_open()) {
        throw std::runtime_error("无法打开文件: " + filename);
    }

    // 获取文件大小
    const auto fileSize = file.tellg();
    file.seekg(0, std::ios::beg);  // 回到文件开头

    // 创建足够大的 vector
    std::vector<char> buffer(fileSize);

    // 一次性读取整个文件内容
    if (!file.read(buffer.data(), fileSize)) {
        throw std::runtime_error("读取文件失败: " + filename);
    }

    return buffer;
}

int main() {
    const auto pid = mem::Process::get_pid("cs2.exe");
    const auto process = ::OpenProcess(PROCESS_ALL_ACCESS , false ,pid);
    std::vector<char> buffer;
    try {
        buffer = readFileToVector("cs2Cheat1929.dll");
    }catch (const std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    if (ManualMapDll(process ,(BYTE *)buffer.data() , buffer.size())) {
        std::cout << "注入成功" << std::endl;
    } else {
        std::cerr << "注入失败" << std::endl;
    }

}