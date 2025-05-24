#pragma once
#include "pattern_scan.hpp"
#include "qangle.h"
#include <iostream>
class CCSGOInput {

public:

    QAngle_t GetViewAngles(){
        using FN = std::int64_t(__stdcall*)(CCSGOInput*, int32_t);
        //fix manual map inj you cant use static local var
        static void * funcAddr = nullptr;
        if (!funcAddr) {
            try {
                funcAddr = Scanner::PatternScan("client.dll" , "4C 8B C1 85 D2 74 08 48 8D 05 ? ? ? ? C3");
            }catch (const std::exception & e) {
               std::cout << "cant find GetViewAngles_addr" << std::endl;
            }
        }
        auto oGetViewAngles = reinterpret_cast<FN>(funcAddr);
        return *reinterpret_cast<QAngle_t*>(oGetViewAngles(this, 0));
    }


};