#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseFlex.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CSPlayerPawn;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1170
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkIncludeByName "m_fFlags"
        // static metadata: MNetworkIncludeByName "m_vecVelocity"
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByName "m_blinktoggle"
        // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
        // static metadata: MNetworkExcludeByName "m_nResetEventsParity"
        // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
        // static metadata: MNetworkExcludeByName "m_flAnimTime"
        // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
        // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
        // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
        // static metadata: MNetworkExcludeByName "m_nNewSequenceParity"
        // static metadata: MNetworkVarNames "bool m_bIsLive"
        // static metadata: MNetworkVarNames "float32 m_DmgRadius"
        // static metadata: MNetworkVarNames "GameTime_t m_flDetonateTime"
        // static metadata: MNetworkVarNames "float32 m_flDamage"
        // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn > m_hThrower"
        #pragma pack(push, 1)
        class C_BaseGrenade : public source2sdk::client::C_BaseFlex
        {
        public:
            bool m_bHasWarnedAI; // 0x1120            
            bool m_bIsSmokeGrenade; // 0x1121            
            // metadata: MNetworkEnable
            bool m_bIsLive; // 0x1122            
            uint8_t _pad1123[0x1]; // 0x1123
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "0.000000"
            // metadata: MNetworkMaxValue "1024.000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_DmgRadius; // 0x1124            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDetonateTime; // 0x1128            
            float m_flWarnAITime; // 0x112c            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "0.000000"
            // metadata: MNetworkMaxValue "256.000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_flDamage; // 0x1130            
            uint8_t _pad1134[0x4]; // 0x1134
            CUtlSymbolLarge m_iszBounceSound; // 0x1138            
            CUtlString m_ExplosionSound; // 0x1140            
            uint8_t _pad1148[0x4]; // 0x1148
            // metadata: MNetworkEnable
            // m_hThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_hThrower;
            char m_hThrower[0x4]; // 0x114c            
            uint8_t _pad1150[0x14]; // 0x1150
            source2sdk::entity2::GameTime_t m_flNextAttack; // 0x1164            
            // m_hOriginalThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_hOriginalThrower;
            char m_hOriginalThrower[0x4]; // 0x1168            
            uint8_t _pad116c[0x4];
            
            // Datamap fields:
            // int32_t m_nExplosionType; // 0x1148
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseGrenade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseGrenade) == 0x1170);
    };
};
