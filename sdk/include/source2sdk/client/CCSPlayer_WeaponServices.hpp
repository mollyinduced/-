#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayer_WeaponServices.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1398
        // Has VTable
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flNextAttack"
        // static metadata: MNetworkVarNames "bool m_bIsLookingAtWeapon"
        // static metadata: MNetworkVarNames "bool m_bIsHoldingLookAtWeapon"
        #pragma pack(push, 1)
        class CCSPlayer_WeaponServices : public source2sdk::client::CPlayer_WeaponServices
        {
        public:
            uint8_t _pad00a0[0x18]; // 0xa0
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flNextAttack; // 0xb8            
            // metadata: MNetworkEnable
            bool m_bIsLookingAtWeapon; // 0xbc            
            // metadata: MNetworkEnable
            bool m_bIsHoldingLookAtWeapon; // 0xbd            
            uint8_t _pad00be[0x2]; // 0xbe
            std::uint32_t m_nOldShootPositionHistoryCount; // 0xc0            
            uint8_t _pad00c4[0x394]; // 0xc4
            std::uint32_t m_nOldInputHistoryCount; // 0x458            
            uint8_t _pad045c[0xf3c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_WeaponServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCSPlayer_WeaponServices) == 0x1398);
    };
};
