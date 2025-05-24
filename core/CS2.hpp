#pragma once
#include "hooks/IHook.h"
#include <list>
#include <memory>


class CS2Helper;
class CS2 {
public:
    static std::list<std::shared_ptr<IHook>> hooks;
    static std::shared_ptr<CS2Helper> cs2_helper;
    static void init();
    static void free();
};