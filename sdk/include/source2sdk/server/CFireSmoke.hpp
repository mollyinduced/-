#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseFire.hpp"

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
        // Size: 0x4f8
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "int32 m_nFlameModelIndex"
        // static metadata: MNetworkVarNames "int32 m_nFlameFromAboveModelIndex"
        #pragma pack(push, 1)
        class CFireSmoke : public source2sdk::server::CBaseFire
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nFlameModelIndex; // 0x4f0            
            // metadata: MNetworkEnable
            std::int32_t m_nFlameFromAboveModelIndex; // 0x4f4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFireSmoke because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFireSmoke) == 0x4f8);
    };
};
