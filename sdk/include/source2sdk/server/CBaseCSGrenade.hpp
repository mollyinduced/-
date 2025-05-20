#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCSWeaponBase.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCSWeaponBase;
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
        // Size: 0xfa0
        // Has VTable
        // Construct disallowed
        // MConstructibleClassBase
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "bool m_bRedraw"
        // static metadata: MNetworkVarNames "bool m_bIsHeldByPlayer"
        // static metadata: MNetworkVarNames "bool m_bPinPulled"
        // static metadata: MNetworkVarNames "bool m_bJumpThrow"
        // static metadata: MNetworkVarNames "bool m_bThrowAnimating"
        // static metadata: MNetworkVarNames "GameTime_t m_fThrowTime"
        // static metadata: MNetworkVarNames "float m_flThrowStrength"
        // static metadata: MNetworkVarNames "float m_flThrowStrengthApproach"
        // static metadata: MNetworkVarNames "GameTime_t m_fDropTime"
        // static metadata: MNetworkVarNames "GameTime_t m_fPinPullTime"
        // static metadata: MNetworkVarNames "bool m_bJustPulledPin"
        // static metadata: MNetworkVarNames "GameTick_t m_nNextHoldTick"
        // static metadata: MNetworkVarNames "float m_flNextHoldFrac"
        // static metadata: MNetworkVarNames "CHandle< CCSWeaponBase> m_hSwitchToWeaponAfterThrow"
        #pragma pack(push, 1)
        class CBaseCSGrenade : public source2sdk::server::CCSWeaponBase
        {
        public:
            // metadata: MNetworkEnable
            bool m_bRedraw; // 0xf68            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnGrenadeStateChanged"
            bool m_bIsHeldByPlayer; // 0xf69            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnGrenadeStateChanged"
            bool m_bPinPulled; // 0xf6a            
            // metadata: MNetworkEnable
            bool m_bJumpThrow; // 0xf6b            
            // metadata: MNetworkEnable
            bool m_bThrowAnimating; // 0xf6c            
            uint8_t _pad0f6d[0x3]; // 0xf6d
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fThrowTime; // 0xf70            
            // metadata: MNetworkEnable
            float m_flThrowStrength; // 0xf74            
            // metadata: MNetworkEnable
            float m_flThrowStrengthApproach; // 0xf78            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fDropTime; // 0xf7c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fPinPullTime; // 0xf80            
            // metadata: MNetworkEnable
            bool m_bJustPulledPin; // 0xf84            
            uint8_t _pad0f85[0x3]; // 0xf85
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTick_t m_nNextHoldTick; // 0xf88            
            // metadata: MNetworkEnable
            float m_flNextHoldFrac; // 0xf8c            
            // metadata: MNetworkEnable
            // m_hSwitchToWeaponAfterThrow has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSWeaponBase> m_hSwitchToWeaponAfterThrow;
            char m_hSwitchToWeaponAfterThrow[0x4]; // 0xf90            
            uint8_t _pad0f94[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseCSGrenade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseCSGrenade) == 0xfa0);
    };
};
