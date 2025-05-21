#pragma once
#include "IHook.h"

#include "pattern_scan.hpp"
#include "MinHook.h"

#include "structs/CUserCmd.hpp"
#include "structs/CCSGOInput.hpp"

#include <cassert>
#include <functional>

// hook createMove
class CreateMoveHook : public IHook {
    using Fn_CreateMove = double (__fastcall*) (CCSGOInput * , unsigned int , CUserCmd * );
    static Fn_CreateMove oCreateMove;
    static void * targetFn;

    using Fn_HookFunc = std::function<void(CCSGOInput * input , unsigned int a , CUserCmd * cmd)>;
    static std::vector<Fn_HookFunc> before;
    static std::vector<Fn_HookFunc> after;

    static double __fastcall HookCreateMove(CCSGOInput * input , unsigned int a , CUserCmd * cmd) {

        for (const auto & f : before) {
            f(input , a , cmd);
        }

        const auto ret = oCreateMove(input , a , cmd);

        for (const auto & f : after) {
            f(input , a , cmd);
        }
        return ret;
    }

public:

    static void addBefore(const Fn_HookFunc &call) {
        before.push_back(call);
    }
    static void addAfter(const Fn_HookFunc & call) {
        after.push_back(call);
    }

    CreateMoveHook() {
        targetFn =  Scanner::PatternScan("client.dll" , "48 8B C4 4C 89 40 18 48 89 48 08 55 53 57");
        assert(targetFn);
    }
    void enable() override {
        MH_CreateHook(targetFn , CreateMoveHook::HookCreateMove , ( void ** )&oCreateMove);
        MH_EnableHook(targetFn);
    }

    void free() override {
        MH_DisableHook(targetFn);
    }
};