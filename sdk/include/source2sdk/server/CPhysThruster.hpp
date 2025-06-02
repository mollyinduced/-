#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPhysForce.hpp"

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
        // Size: 0x550
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CPhysThruster : public source2sdk::server::CPhysForce
        {
        public:
            Vector m_localOrigin; // 0x540            
            uint8_t _pad054c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysThruster because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysThruster) == 0x550);
    };
};
