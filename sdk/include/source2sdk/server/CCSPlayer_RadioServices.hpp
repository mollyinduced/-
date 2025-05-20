#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0x60
        // Has VTable
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CCSPlayer_RadioServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            source2sdk::entity2::GameTime_t m_flGotHostageTalkTimer; // 0x40            
            source2sdk::entity2::GameTime_t m_flDefusingTalkTimer; // 0x44            
            source2sdk::entity2::GameTime_t m_flC4PlantTalkTimer; // 0x48            
            source2sdk::entity2::GameTime_t m_flRadioTokenSlots[3]; // 0x4c            
            bool m_bIgnoreRadio; // 0x58            
            uint8_t _pad0059[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_RadioServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayer_RadioServices) == 0x60);
    };
};
