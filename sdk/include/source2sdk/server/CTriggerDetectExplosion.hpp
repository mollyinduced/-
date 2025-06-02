#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"

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
        // Size: 0x9b0
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CTriggerDetectExplosion : public source2sdk::server::CBaseTrigger
        {
        public:
            uint8_t _pad0960[0x28]; // 0x960
            source2sdk::entity2::CEntityIOOutput m_OnDetectedExplosion; // 0x988            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerDetectExplosion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerDetectExplosion) == 0x9b0);
    };
};
