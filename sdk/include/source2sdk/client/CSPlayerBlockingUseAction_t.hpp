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
        // Enumerator count: 10
        // Alignment: 4
        // Size: 0x4
        enum class CSPlayerBlockingUseAction_t : std::uint32_t
        {
            k_CSPlayerBlockingUseAction_None = 0x0,
            k_CSPlayerBlockingUseAction_DefusingDefault = 0x1,
            k_CSPlayerBlockingUseAction_DefusingWithKit = 0x2,
            k_CSPlayerBlockingUseAction_HostageGrabbing = 0x3,
            k_CSPlayerBlockingUseAction_HostageDropping = 0x4,
            k_CSPlayerBlockingUseAction_EquippingHeavyArmor = 0x5,
            k_CSPlayerBlockingUseAction_TakingOffHeavyArmor = 0x6,
            k_CSPlayerBlockingUseAction_MapLongUseEntity_Pickup = 0x7,
            k_CSPlayerBlockingUseAction_MapLongUseEntity_Place = 0x8,
            k_CSPlayerBlockingUseAction_MaxCount = 0x9,
        };
    };
};
