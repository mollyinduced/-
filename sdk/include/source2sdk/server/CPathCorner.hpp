#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"

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
        // Size: 0x510
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CPathCorner : public source2sdk::server::CPointEntity
        {
        public:
            float m_flWait; // 0x4e0            
            float m_flRadius; // 0x4e4            
            source2sdk::entity2::CEntityIOOutput m_OnPass; // 0x4e8            
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetNextPathCorner; // 0x0
            // void InputInPass; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathCorner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathCorner) == 0x510);
    };
};
