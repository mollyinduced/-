#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"

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
        // Size: 0xa80
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CItem : public source2sdk::server::CBaseAnimGraph
        {
        public:
            uint8_t _pad09a8[0x8]; // 0x9a8
            source2sdk::entity2::CEntityIOOutput m_OnPlayerTouch; // 0x9b0            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0x9d8            
            bool m_bActivateWhenAtRest; // 0xa00            
            uint8_t _pad0a01[0x7]; // 0xa01
            source2sdk::entity2::CEntityIOOutput m_OnCacheInteraction; // 0xa08            
            source2sdk::entity2::CEntityIOOutput m_OnGlovePulled; // 0xa30            
            Vector m_vOriginalSpawnOrigin; // 0xa58            
            QAngle m_vOriginalSpawnAngles; // 0xa64            
            bool m_bPhysStartAsleep; // 0xa70            
            uint8_t _pad0a71[0xf];
            
            // Datamap fields:
            // void CItemItemTouch; // 0x0
            // void CItemMaterialize; // 0x0
            // void CItemComeToRest; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItem) == 0xa80);
    };
};
