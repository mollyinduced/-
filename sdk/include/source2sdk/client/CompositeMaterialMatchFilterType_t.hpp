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
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x4
        enum class CompositeMaterialMatchFilterType_t : std::uint32_t
        {
            // MPropertyFriendlyName "Target Material Attribute Exists"
            MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
            // MPropertyFriendlyName "Target Material Shader Name"
            MATCH_FILTER_MATERIAL_SHADER = 0x1,
            // MPropertyFriendlyName "Target Material Name SubStr"
            MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
            // MPropertyFriendlyName "Target Material Attribute Equals"
            MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
            // MPropertyFriendlyName "Target Material Property Exists"
            MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
            // MPropertyFriendlyName "Target Material Property Equals"
            MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5,
        };
    };
};
