#pragma once
#include "datatypes/vector.h"
#include "source2sdk/client/C_CSPlayerPawn.hpp"

class GameTrace_t {
public:
    void * unk{};
    source2sdk::client::C_CSPlayerPawn * hitEntity{};
    char pad[104]{};    //unk
    Vector_t start{};
    Vector_t end{};
    char pad2[28]{};
    float fraction{}; //offset 172;
    char pad3[0x100]{};  //unk
};