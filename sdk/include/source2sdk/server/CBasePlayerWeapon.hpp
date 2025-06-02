#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/server/CEconEntity.hpp"

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
        // Size: 0xd78
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByName "m_blinktoggle"
        // static metadata: MNetworkIncludeByName "m_nNextThinkTick"
        // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
        // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
        // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
        // static metadata: MNetworkUserGroupProxy "CBasePlayerWeapon"
        // static metadata: MNetworkVarNames "GameTick_t m_nNextPrimaryAttackTick"
        // static metadata: MNetworkVarNames "float32 m_flNextPrimaryAttackTickRatio"
        // static metadata: MNetworkVarNames "GameTick_t m_nNextSecondaryAttackTick"
        // static metadata: MNetworkVarNames "float32 m_flNextSecondaryAttackTickRatio"
        // static metadata: MNetworkVarNames "int32 m_iClip1"
        // static metadata: MNetworkVarNames "int32 m_iClip2"
        // static metadata: MNetworkVarNames "int m_pReserveAmmo"
        #pragma pack(push, 1)
        class CBasePlayerWeapon : public source2sdk::server::CEconEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            source2sdk::entity2::GameTick_t m_nNextPrimaryAttackTick; // 0xd30            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            float m_flNextPrimaryAttackTickRatio; // 0xd34            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            source2sdk::entity2::GameTick_t m_nNextSecondaryAttackTick; // 0xd38            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            float m_flNextSecondaryAttackTickRatio; // 0xd3c            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "minusone"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iClip1; // 0xd40            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "minusone"
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            std::int32_t m_iClip2; // 0xd44            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            std::int32_t m_pReserveAmmo[2]; // 0xd48            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerUse; // 0xd50            
            
            // Datamap fields:
            // int32_t InputSetClipPrimary; // 0x0
            // int32_t InputSetClipSecondary; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePlayerWeapon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePlayerWeapon) == 0xd78);
    };
};
