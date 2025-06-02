#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSPlayerState.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBasePlayerPawn.hpp"
#include "source2sdk/server/CTouchExpansionComponent.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerController;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayer_PingServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_ViewModelServices;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xdc8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "CTouchExpansionComponent::Storage_t m_CTouchExpansionComponent"
        // static metadata: MNetworkExcludeByName "m_flAnimTime"
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
        // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
        // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
        // static metadata: MNetworkVarNames "CCSPlayer_PingServices * m_pPingServices"
        // static metadata: MNetworkVarNames "CPlayer_ViewModelServices * m_pViewModelServices"
        // static metadata: MNetworkVarNames "CSPlayerState m_iPlayerState"
        // static metadata: MNetworkVarNames "GameTime_t m_fImmuneToGunGameDamageTime"
        // static metadata: MNetworkVarNames "bool m_bGunGameImmunity"
        // static metadata: MNetworkVarNames "float m_fMolotovDamageTime"
        // static metadata: MNetworkVarNames "bool m_bHasMovedSinceSpawn"
        // static metadata: MNetworkVarNames "float m_flFlashDuration"
        // static metadata: MNetworkVarNames "float m_flFlashMaxAlpha"
        // static metadata: MNetworkVarNames "float m_flProgressBarStartTime"
        // static metadata: MNetworkVarNames "int m_iProgressBarDuration"
        // static metadata: MNetworkVarNames "QAngle m_angEyeAngles"
        // static metadata: MNetworkVarNames "CHandle< CCSPlayerController> m_hOriginalController"
        #pragma pack(push, 1)
        class CCSPlayerPawnBase : public source2sdk::server::CBasePlayerPawn
        {
        public:
            uint8_t _pad0c58[0x10]; // 0xc58
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CTouchExpansionComponent"
            // metadata: MNetworkAlias "CTouchExpansionComponent"
            // metadata: MNetworkTypeAlias "CTouchExpansionComponent"
            source2sdk::server::CTouchExpansionComponent m_CTouchExpansionComponent; // 0xc68            
            // metadata: MNetworkEnable
            source2sdk::server::CCSPlayer_PingServices* m_pPingServices; // 0xcb8            
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_ViewModelServices* m_pViewModelServices; // 0xcc0            
            source2sdk::entity2::GameTime_t m_blindUntilTime; // 0xcc8            
            source2sdk::entity2::GameTime_t m_blindStartTime; // 0xccc            
            // metadata: MNetworkEnable
            source2sdk::client::CSPlayerState m_iPlayerState; // 0xcd0            
            uint8_t _pad0cd4[0xac]; // 0xcd4
            bool m_bRespawning; // 0xd80            
            uint8_t _pad0d81[0x3]; // 0xd81
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fImmuneToGunGameDamageTime; // 0xd84            
            // metadata: MNetworkEnable
            bool m_bGunGameImmunity; // 0xd88            
            uint8_t _pad0d89[0x3]; // 0xd89
            // metadata: MNetworkEnable
            float m_fMolotovDamageTime; // 0xd8c            
            // metadata: MNetworkEnable
            bool m_bHasMovedSinceSpawn; // 0xd90            
            uint8_t _pad0d91[0x3]; // 0xd91
            std::int32_t m_iNumSpawns; // 0xd94            
            uint8_t _pad0d98[0x4]; // 0xd98
            float m_flIdleTimeSinceLastAction; // 0xd9c            
            float m_fNextRadarUpdateTime; // 0xda0            
            // metadata: MNetworkEnable
            float m_flFlashDuration; // 0xda4            
            // metadata: MNetworkEnable
            float m_flFlashMaxAlpha; // 0xda8            
            // metadata: MNetworkEnable
            float m_flProgressBarStartTime; // 0xdac            
            // metadata: MNetworkEnable
            std::int32_t m_iProgressBarDuration; // 0xdb0            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle_precise"
            // metadata: MNetworkPriority "32"
            QAngle m_angEyeAngles; // 0xdb4            
            bool m_wasNotKilledNaturally; // 0xdc0            
            bool m_bCommittingSuicideOnTeamChange; // 0xdc1            
            uint8_t _pad0dc2[0x2]; // 0xdc2
            // metadata: MNetworkEnable
            // m_hOriginalController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerController> m_hOriginalController;
            char m_hOriginalController[0x4]; // 0xdc4            
            
            // Datamap fields:
            // CHandle< CBaseEntity > original_controller; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayerPawnBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayerPawnBase) == 0xdc8);
    };
};
