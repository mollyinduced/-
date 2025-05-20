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
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkIncludeByName "m_spawnflags"
        // static metadata: MNetworkVarNames "bool m_bDisabled"
        // static metadata: MNetworkVarNames "bool m_bClientSidePredicted"
        #pragma pack(push, 1)
        class C_BaseTrigger : public source2sdk::client::C_BaseToggle
        {
        public:
            // metadata: MNetworkEnable
            bool m_bDisabled; // 0xd28            
            // metadata: MNetworkEnable
            bool m_bClientSidePredicted; // 0xd29            
            uint8_t _pad0d2a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseTrigger) == 0xd30);
    };
};
