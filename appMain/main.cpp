#include <string>
#include <windows.h>
#include <filesystem>
#include "inj.hpp"
#include "mem.hpp"
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

int main() {
    const auto pid = mem::Process::get_pid("cs2.exe");
    const auto process = ::OpenProcess(PROCESS_ALL_ACCESS , false ,pid);
    InjectDll( process, (Utils::getExePath() + "/silent_aim.dll").c_str());
}