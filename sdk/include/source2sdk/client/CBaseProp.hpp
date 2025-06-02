#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"

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
        // Size: 0xfc8
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CBaseProp : public source2sdk::client::CBaseAnimGraph
        {
        public:
            bool m_bModelOverrodeBlockLOS; // 0xf88            
            uint8_t _pad0f89[0x3]; // 0xf89
            std::int32_t m_iShapeType; // 0xf8c            
            bool m_bConformToCollisionBounds; // 0xf90            
            uint8_t _pad0f91[0x3]; // 0xf91
            matrix3x4_t m_mPreferredCatchTransform; // 0xf94            
            uint8_t _pad0fc4[0x4];
            
            // Datamap fields:
            // void health; // 0x7fffffff
            // CUtlSymbolLarge propdata_override; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseProp) == 0xfc8);
    };
};
