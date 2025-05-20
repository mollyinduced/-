#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0xf08
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "int m_nDraftType"
        // static metadata: MNetworkVarNames "int m_nTeamWinningCoinToss"
        // static metadata: MNetworkVarNames "int m_nTeamWithFirstChoice"
        // static metadata: MNetworkVarNames "int m_nVoteMapIdsList"
        // static metadata: MNetworkVarNames "int m_nAccountIDs"
        // static metadata: MNetworkVarNames "int m_nMapId0"
        // static metadata: MNetworkVarNames "int m_nMapId1"
        // static metadata: MNetworkVarNames "int m_nMapId2"
        // static metadata: MNetworkVarNames "int m_nMapId3"
        // static metadata: MNetworkVarNames "int m_nMapId4"
        // static metadata: MNetworkVarNames "int m_nMapId5"
        // static metadata: MNetworkVarNames "int m_nStartingSide0"
        // static metadata: MNetworkVarNames "int m_nCurrentPhase"
        // static metadata: MNetworkVarNames "int m_nPhaseStartTick"
        // static metadata: MNetworkVarNames "int m_nPhaseDurationTicks"
        #pragma pack(push, 1)
        class CMapVetoPickController : public source2sdk::server::CBaseEntity
        {
        public:
            bool m_bPlayedIntroVcd; // 0x4e0            
            bool m_bNeedToPlayFiveSecondsRemaining; // 0x4e1            
            uint8_t _pad04e2[0x1e]; // 0x4e2
            double m_dblPreMatchDraftSequenceTime; // 0x500            
            bool m_bPreMatchDraftStateChanged; // 0x508            
            uint8_t _pad0509[0x3]; // 0x509
            // metadata: MNetworkEnable
            std::int32_t m_nDraftType; // 0x50c            
            // metadata: MNetworkEnable
            std::int32_t m_nTeamWinningCoinToss; // 0x510            
            // metadata: MNetworkEnable
            std::int32_t m_nTeamWithFirstChoice[64]; // 0x514            
            // metadata: MNetworkEnable
            std::int32_t m_nVoteMapIdsList[7]; // 0x614            
            // metadata: MNetworkEnable
            std::int32_t m_nAccountIDs[64]; // 0x630            
            // metadata: MNetworkEnable
            std::int32_t m_nMapId0[64]; // 0x730            
            // metadata: MNetworkEnable
            std::int32_t m_nMapId1[64]; // 0x830            
            // metadata: MNetworkEnable
            std::int32_t m_nMapId2[64]; // 0x930            
            // metadata: MNetworkEnable
            std::int32_t m_nMapId3[64]; // 0xa30            
            // metadata: MNetworkEnable
            std::int32_t m_nMapId4[64]; // 0xb30            
            // metadata: MNetworkEnable
            std::int32_t m_nMapId5[64]; // 0xc30            
            // metadata: MNetworkEnable
            std::int32_t m_nStartingSide0[64]; // 0xd30            
            // metadata: MNetworkEnable
            std::int32_t m_nCurrentPhase; // 0xe30            
            // metadata: MNetworkEnable
            std::int32_t m_nPhaseStartTick; // 0xe34            
            // metadata: MNetworkEnable
            std::int32_t m_nPhaseDurationTicks; // 0xe38            
            uint8_t _pad0e3c[0x4]; // 0xe3c
            // m_OnMapVetoed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlSymbolLarge> m_OnMapVetoed;
            char m_OnMapVetoed[0x28]; // 0xe40            
            // m_OnMapPicked has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlSymbolLarge> m_OnMapPicked;
            char m_OnMapPicked[0x28]; // 0xe68            
            // m_OnSidesPicked has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<std::int32_t> m_OnSidesPicked;
            char m_OnSidesPicked[0x28]; // 0xe90            
            // m_OnNewPhaseStarted has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<std::int32_t> m_OnNewPhaseStarted;
            char m_OnNewPhaseStarted[0x28]; // 0xeb8            
            // m_OnLevelTransition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<std::int32_t> m_OnLevelTransition;
            char m_OnLevelTransition[0x28]; // 0xee0            
            
            // Datamap fields:
            // void CMapVetoPickControllerVoteControllerThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMapVetoPickController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMapVetoPickController) == 0xf08);
    };
};
