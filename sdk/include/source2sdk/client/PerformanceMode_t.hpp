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
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x4
        enum class PerformanceMode_t : std::uint32_t
        {
            PM_NORMAL = 0x0,
            PM_NO_GIBS = 0x1,
            PM_FULL_GIBS = 0x2,
            PM_REDUCED_GIBS = 0x3,
        };
    };
};
