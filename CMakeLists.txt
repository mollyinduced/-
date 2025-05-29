cmake_minimum_required(VERSION 3.5)
project(cs2Cheat1929)
set(CMAKE_CXX_STANDARD  17)
set(CMAKE_PREFIX_PATH ${CMAKE_CURRENT_LIST_DIR}/minhook_debug_x64/lib/minhook) #minhook
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/out)
find_package(minhook)
include_directories(
        ./
        ./sdk/include
        ./structs
        ${CMAKE_CURRENT_LIST_DIR}/output
        ${CMAKE_CURRENT_LIST_DIR}/datatypes)

add_library(${PROJECT_NAME} SHARED dll_main.cpp
        PlayerHelper.hpp
        features/Aimbot.hpp
        datatypes/vector.cpp
        structs/CGameTraceManager.hpp
        structs/TraceFilter.hpp
        structs/CCSGOInput.hpp
        structs/CUserCmd.hpp
        hooks/CreateMove.hpp
        hooks/IHook.h
        structs/GameTrace.hpp
        hooks/CreateMove.cpp
        hooks/SilentAimHook.hpp
        hooks/SilentAimHook.cpp
        structs/CInButtonState.hpp
        core/CS2.hpp
        core/CS2.cpp
        structs/BoneIndex.h
        features/BHop.hpp
)
target_link_libraries(${PROJECT_NAME} minhook::minhook)

#测试用的注入程序
add_subdirectory(appMain)