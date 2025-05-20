#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseToggle.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd30
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsUsable"
        #pragma pack(push, 1)
        class C_BaseDoor : public source2sdk::client::C_BaseToggle
        {
        public:
            // metadata: MNetworkEnable
            bool m_bIsUsable; // 0xd28            
            uint8_t _pad0d29[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseDoor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseDoor) == 0xd30);
    };
};
