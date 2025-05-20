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
        // Size: 0x990
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CTriggerActiveWeaponDetect : public source2sdk::server::CBaseTrigger
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnTouchedActiveWeapon; // 0x960            
            CUtlSymbolLarge m_iszWeaponClassName; // 0x988            
            
            // Datamap fields:
            // void CTriggerActiveWeaponDetectActiveWeaponThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerActiveWeaponDetect because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerActiveWeaponDetect) == 0x990);
    };
};
