#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CPlayer_WeaponServices.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerWeapon;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1380
        // Has VTable
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flNextAttack"
        // static metadata: MNetworkVarNames "bool m_bIsLookingAtWeapon"
        // static metadata: MNetworkVarNames "bool m_bIsHoldingLookAtWeapon"
        #pragma pack(push, 1)
        class CCSPlayer_WeaponServices : public source2sdk::server::CPlayer_WeaponServices
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flNextAttack; // 0xa8            
            // metadata: MNetworkEnable
            bool m_bIsLookingAtWeapon; // 0xac            
            // metadata: MNetworkEnable
            bool m_bIsHoldingLookAtWeapon; // 0xad            
            uint8_t _pad00ae[0x2]; // 0xae
            // m_hSavedWeapon has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerWeapon> m_hSavedWeapon;
            char m_hSavedWeapon[0x4]; // 0xb0            
            std::int32_t m_nTimeToMelee; // 0xb4            
            std::int32_t m_nTimeToSecondary; // 0xb8            
            std::int32_t m_nTimeToPrimary; // 0xbc            
            std::int32_t m_nTimeToSniperRifle; // 0xc0            
            bool m_bIsBeingGivenItem; // 0xc4            
            bool m_bIsPickingUpItemWithUse; // 0xc5            
            bool m_bPickedUpWeapon; // 0xc6            
            bool m_bDisableAutoDeploy; // 0xc7            
            bool m_bIsPickingUpGroundWeapon; // 0xc8            
            uint8_t _pad00c9[0x3]; // 0xc9
            std::uint32_t m_nOldShootPositionHistoryCount; // 0xcc            
            uint8_t _pad00d0[0x398]; // 0xd0
            std::uint32_t m_nOldInputHistoryCount; // 0x468            
            uint8_t _pad046c[0xf14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_WeaponServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayer_WeaponServices) == 0x1380);
    };
};
