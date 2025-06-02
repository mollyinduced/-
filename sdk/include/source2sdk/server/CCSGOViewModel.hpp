#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPredictedViewModel.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xa20
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "bool m_bShouldIgnoreOffsetAndAccuracy"
        #pragma pack(push, 1)
        class CCSGOViewModel : public source2sdk::server::CPredictedViewModel
        {
        public:
            // metadata: MNetworkEnable
            bool m_bShouldIgnoreOffsetAndAccuracy; // 0x9f0            
            uint8_t _pad09f1[0x2f];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSGOViewModel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSGOViewModel) == 0xa20);
    };
};
