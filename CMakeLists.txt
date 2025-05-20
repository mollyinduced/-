cmake_minimum_required(VERSION 3.5)
project(silent_aim)
set(CMAKE_CXX_STANDARD  17)
set(CMAKE_PREFIX_PATH ${CMAKE_CURRENT_LIST_DIR}/minhook_debug_x64/lib/minhook) #����minhook·��

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
        CGameTraceManager.hpp
        structs/TraceFilter.hpp
)
target_link_libraries(${PROJECT_NAME} minhook::minhook)