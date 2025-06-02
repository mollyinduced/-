#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CSoundEventEntity.hpp"

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
        // Size: 0x5b0
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "Vector m_vMins"
        // static metadata: MNetworkVarNames "Vector m_vMaxs"
        #pragma pack(push, 1)
        class CSoundEventOBBEntity : public source2sdk::server::CSoundEventEntity
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vMins; // 0x598            
            // metadata: MNetworkEnable
            Vector m_vMaxs; // 0x5a4            
            
            // Datamap fields:
            // void CSoundEventOBBEntitySoundEventOBBThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundEventOBBEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundEventOBBEntity) == 0x5b0);
    };
};
