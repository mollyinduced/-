#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/client/C_AttributeContainer.hpp"
#include "source2sdk/client/EntitySpottedState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBasePlayerController;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_CSPlayerPawn;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_Multimeter;
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
        // Size: 0x14d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "bool m_bBombTicking"
        // static metadata: MNetworkVarNames "int m_nBombSite"
        // static metadata: MNetworkVarNames "int m_nSourceSoundscapeHash"
        // static metadata: MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
        // static metadata: MNetworkVarNames "GameTime_t m_flC4Blow"
        // static metadata: MNetworkVarNames "bool m_bCannotBeDefused"
        // static metadata: MNetworkVarNames "bool m_bHasExploded"
        // static metadata: MNetworkVarNames "float m_flTimerLength"
        // static metadata: MNetworkVarNames "bool m_bBeingDefused"
        // static metadata: MNetworkVarNames "float m_flDefuseLength"
        // static metadata: MNetworkVarNames "GameTime_t m_flDefuseCountDown"
        // static metadata: MNetworkVarNames "bool m_bBombDefused"
        // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_hBombDefuser"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hControlPanel"
        // static metadata: MNetworkVarNames "CAttributeContainer m_AttributeManager"
        #pragma pack(push, 1)
        class C_PlantedC4 : public source2sdk::client::CBaseAnimGraph
        {
        public:
            uint8_t _pad0f88[0x8]; // 0xf88
            // metadata: MNetworkEnable
            bool m_bBombTicking; // 0xf90            
            uint8_t _pad0f91[0x3]; // 0xf91
            // metadata: MNetworkEnable
            std::int32_t m_nBombSite; // 0xf94            
            // metadata: MNetworkEnable
            std::int32_t m_nSourceSoundscapeHash; // 0xf98            
            uint8_t _pad0f9c[0x4]; // 0xf9c
            // metadata: MNetworkEnable
            source2sdk::client::EntitySpottedState_t m_entitySpottedState; // 0xfa0            
            source2sdk::entity2::GameTime_t m_flNextGlow; // 0xfb8            
            source2sdk::entity2::GameTime_t m_flNextBeep; // 0xfbc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flC4Blow; // 0xfc0            
            // metadata: MNetworkEnable
            bool m_bCannotBeDefused; // 0xfc4            
            // metadata: MNetworkEnable
            bool m_bHasExploded; // 0xfc5            
            uint8_t _pad0fc6[0x2]; // 0xfc6
            // metadata: MNetworkEnable
            float m_flTimerLength; // 0xfc8            
            // metadata: MNetworkEnable
            bool m_bBeingDefused; // 0xfcc            
            uint8_t _pad0fcd[0x3]; // 0xfcd
            float m_bTriggerWarning; // 0xfd0            
            float m_bExplodeWarning; // 0xfd4            
            bool m_bC4Activated; // 0xfd8            
            bool m_bTenSecWarning; // 0xfd9            
            uint8_t _pad0fda[0x2]; // 0xfda
            // metadata: MNetworkEnable
            float m_flDefuseLength; // 0xfdc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDefuseCountDown; // 0xfe0            
            // metadata: MNetworkEnable
            bool m_bBombDefused; // 0xfe4            
            uint8_t _pad0fe5[0x3]; // 0xfe5
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDefuserChanged"
            // m_hBombDefuser has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_hBombDefuser;
            char m_hBombDefuser[0x4]; // 0xfe8            
            // metadata: MNetworkEnable
            // m_hControlPanel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hControlPanel;
            char m_hControlPanel[0x4]; // 0xfec            
            // metadata: MNetworkEnable
            source2sdk::client::C_AttributeContainer m_AttributeManager; // 0xff0            
            // m_hDefuserMultimeter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_Multimeter> m_hDefuserMultimeter;
            char m_hDefuserMultimeter[0x4]; // 0x1498            
            source2sdk::entity2::GameTime_t m_flNextRadarFlashTime; // 0x149c            
            bool m_bRadarFlash; // 0x14a0            
            uint8_t _pad14a1[0x3]; // 0x14a1
            // m_pBombDefuser has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_pBombDefuser;
            char m_pBombDefuser[0x4]; // 0x14a4            
            source2sdk::entity2::GameTime_t m_fLastDefuseTime; // 0x14a8            
            uint8_t _pad14ac[0x4]; // 0x14ac
            source2sdk::client::CBasePlayerController* m_pPredictionOwner; // 0x14b0            
            Vector m_vecC4ExplodeSpectatePos; // 0x14b8            
            QAngle m_vecC4ExplodeSpectateAng; // 0x14c4            
            float m_flC4ExplodeSpectateDuration; // 0x14d0            
            uint8_t _pad14d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PlantedC4 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PlantedC4) == 0x14d8);
    };
};
