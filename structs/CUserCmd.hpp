#pragma once
#include "CInButtonState.hpp"
class CUserCmd {
public:
    char pad[0x58]{};
    CInButtonState nButtons{};
};