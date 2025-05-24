#pragma once
#include <assert.h>

#include "IHook.h"
#include "pattern_scan.hpp"
#include <cstdint>
#include <memory>

#include "MinHook.h"
#include "datatypes/qangle.h"
#include <iostream>
class SilentAimHook : public IHook{

    static void * target;
    using Fn_SilentAim = int64_t (*)(int*, int64_t, char, int64_t , int64_t , int64_t);
    static Fn_SilentAim oSilentAim;
    static std::shared_ptr<QAngle_t> targetAngle;

    static int64_t MyFunc (int* a1, int64_t a2, char a3, int64_t a4, int64_t a5, int64_t a6) {
        if (targetAngle) {
            memcpy(&a1[4] , &targetAngle->x , 4);
            memcpy(&a1[5] ,&targetAngle->y , 4);
        }
        auto ret = oSilentAim(a1 , a2 ,a3, a4 ,a5 ,a6);
        //targetAngle = nullptr;
        return ret;
    }

public:
    static void setTargetAngle(const std::shared_ptr<QAngle_t> &angle) {
        targetAngle = angle;
    }
    SilentAimHook() {
        try {
            target = Scanner::PatternScan("client.dll" , "4C 89 4C 24 20 55 53 57 41 56 48 8D 6C 24 D1");
        }catch (const std::exception &e) {
            std::cout << "SilentAimHook failed check the pat" << std::endl;
        }

        assert(target);

    }
    void enable() const override {
        MH_CreateHook(target , MyFunc , (void **)&oSilentAim);
        MH_EnableHook(target);
    }

    void free() const override {
        MH_DisableHook(target);
    }
};