#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 3
        // Alignment: 1
        // Size: 0x1
        enum class BeginDeathLifeStateTransition_t : std::uint8_t
        {
            NO_CHANGE_IN_LIFESTATE = 0x0,
            TRANSITION_TO_LIFESTATE_DYING = 0x1,
            TRANSITION_TO_LIFESTATE_DEAD = 0x2,
        };
    };
};
