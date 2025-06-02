#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CAttributeContainer.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/EntitySpottedState_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerPawn;
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
        // Size: 0xd78
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "bool m_bBombTicking"
        // static metadata: MNetworkVarNames "GameTime_t m_flC4Blow"
        // static metadata: MNetworkVarNames "int m_nBombSite"
        // static metadata: MNetworkVarNames "int m_nSourceSoundscapeHash"
        // static metadata: MNetworkVarNames "CAttributeContainer m_AttributeManager"
        // static metadata: MNetworkVarNames "bool m_bCannotBeDefused"
        // static metadata: MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
        // static metadata: MNetworkVarNames "bool m_bHasExploded"
        // static metadata: MNetworkVarNames "float m_flTimerLength"
        // static metadata: MNetworkVarNames "bool m_bBeingDefused"
        // static metadata: MNetworkVarNames "float m_flDefuseLength"
        // static metadata: MNetworkVarNames "GameTime_t m_flDefuseCountDown"
        // static metadata: MNetworkVarNames "bool m_bBombDefused"
        // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_hBombDefuser"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hControlPanel"
        #pragma pack(push, 1)
        class CPlantedC4 : public source2sdk::server::CBaseAnimGraph
        {
        public:
            uint8_t _pad09a8[0x8]; // 0x9a8
            // metadata: MNetworkEnable
            bool m_bBombTicking; // 0x9b0            
            uint8_t _pad09b1[0x3]; // 0x9b1
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flC4Blow; // 0x9b4            
            // metadata: MNetworkEnable
            std::int32_t m_nBombSite; // 0x9b8            
            // metadata: MNetworkEnable
            std::int32_t m_nSourceSoundscapeHash; // 0x9bc            
            // metadata: MNetworkEnable
            source2sdk::server::CAttributeContainer m_AttributeManager; // 0x9c0            
            source2sdk::entity2::CEntityIOOutput m_OnBombDefused; // 0xc88            
            source2sdk::entity2::CEntityIOOutput m_OnBombBeginDefuse; // 0xcb0            
            source2sdk::entity2::CEntityIOOutput m_OnBombDefuseAborted; // 0xcd8            
            // metadata: MNetworkEnable
            bool m_bCannotBeDefused; // 0xd00            
            uint8_t _pad0d01[0x7]; // 0xd01
            // metadata: MNetworkEnable
            source2sdk::server::EntitySpottedState_t m_entitySpottedState; // 0xd08            
            std::int32_t m_nSpotRules; // 0xd20            
            bool m_bTrainingPlacedByPlayer; // 0xd24            
            // metadata: MNetworkEnable
            bool m_bHasExploded; // 0xd25            
            uint8_t _pad0d26[0x2]; // 0xd26
            // metadata: MNetworkEnable
            float m_flTimerLength; // 0xd28            
            // metadata: MNetworkEnable
            bool m_bBeingDefused; // 0xd2c            
            uint8_t _pad0d2d[0x7]; // 0xd2d
            source2sdk::entity2::GameTime_t m_fLastDefuseTime; // 0xd34            
            uint8_t _pad0d38[0x4]; // 0xd38
            // metadata: MNetworkEnable
            float m_flDefuseLength; // 0xd3c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDefuseCountDown; // 0xd40            
            // metadata: MNetworkEnable
            bool m_bBombDefused; // 0xd44            
            uint8_t _pad0d45[0x3]; // 0xd45
            // metadata: MNetworkEnable
            // m_hBombDefuser has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_hBombDefuser;
            char m_hBombDefuser[0x4]; // 0xd48            
            // metadata: MNetworkEnable
            // m_hControlPanel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hControlPanel;
            char m_hControlPanel[0x4]; // 0xd4c            
            std::int32_t m_iProgressBarTime; // 0xd50            
            bool m_bVoiceAlertFired; // 0xd54            
            bool m_bVoiceAlertPlayed[4]; // 0xd55            
            uint8_t _pad0d59[0x3]; // 0xd59
            source2sdk::entity2::GameTime_t m_flNextBotBeepTime; // 0xd5c            
            uint8_t _pad0d60[0x4]; // 0xd60
            QAngle m_angCatchUpToPlayerEye; // 0xd64            
            source2sdk::entity2::GameTime_t m_flLastSpinDetectionTime; // 0xd70            
            uint8_t _pad0d74[0x4];
            
            // Datamap fields:
            // void CPlantedC4C4Think; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlantedC4 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPlantedC4) == 0xd78);
    };
};
