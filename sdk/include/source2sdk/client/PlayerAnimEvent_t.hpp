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
        // Enumerator count: 24
        // Alignment: 4
        // Size: 0x4
        enum class PlayerAnimEvent_t : std::uint32_t
        {
            PLAYERANIMEVENT_FIRE_GUN_PRIMARY = 0x0,
            PLAYERANIMEVENT_FIRE_GUN_SECONDARY = 0x1,
            PLAYERANIMEVENT_GRENADE_PULL_PIN = 0x2,
            PLAYERANIMEVENT_THROW_GRENADE = 0x3,
            PLAYERANIMEVENT_JUMP = 0x4,
            PLAYERANIMEVENT_RELOAD = 0x5,
            PLAYERANIMEVENT_CLEAR_FIRING = 0x6,
            PLAYERANIMEVENT_DEPLOY = 0x7,
            PLAYERANIMEVENT_SILENCER_STATE = 0x8,
            PLAYERANIMEVENT_SILENCER_TOGGLE = 0x9,
            PLAYERANIMEVENT_THROW_GRENADE_UNDERHAND = 0xa,
            PLAYERANIMEVENT_CATCH_WEAPON = 0xb,
            PLAYERANIMEVENT_LOOKATWEAPON_REQUEST = 0xc,
            PLAYERANIMEVENT_RELOAD_CANCEL_LOOKATWEAPON = 0xd,
            PLAYERANIMEVENT_HAULBACK = 0xe,
            PLAYERANIMEVENT_IDLE = 0xf,
            PLAYERANIMEVENT_STRIKE_HIT = 0x10,
            PLAYERANIMEVENT_STRIKE_MISS = 0x11,
            PLAYERANIMEVENT_BACKSTAB = 0x12,
            PLAYERANIMEVENT_DRYFIRE = 0x13,
            PLAYERANIMEVENT_FIDGET = 0x14,
            PLAYERANIMEVENT_RELEASE = 0x15,
            PLAYERANIMEVENT_TAUNT = 0x16,
            PLAYERANIMEVENT_COUNT = 0x17,
        };
    };
};
