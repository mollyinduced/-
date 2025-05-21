#pragma once
#include "pattern_scan.hpp"
#include "qangle.h"

class CCSGOInput {

public:

    QAngle_t GetViewAngles(){
        using FN = std::int64_t(__stdcall*)(CCSGOInput*, int32_t);
        static auto oGetViewAngles = reinterpret_cast<FN>(Scanner::PatternScan("client.dll" , "4C 8B C1 85 D2 74 08 48 8D 05 ? ? ? ? C3"));
        return *reinterpret_cast<QAngle_t*>(oGetViewAngles(this, 0));
    }


};