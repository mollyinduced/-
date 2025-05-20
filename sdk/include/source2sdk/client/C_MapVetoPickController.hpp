#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // Size: 0xeb0
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
        class C_MapVetoPickController : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad0568[0x10]; // 0x568
            // metadata: MNetworkEnable
            std::int32_t m_nDraftType; // 0x578            
            // metadata: MNetworkEnable
            std::int32_t m_nTeamWinningCoinToss; // 0x57c            
            // metadata: MNetworkEnable
            std::int32_t m_nTeamWithFirstChoice[64]; // 0x580            
            // metadata: MNetworkEnable
            std::int32_t m_nVoteMapIdsList[7]; // 0x680            
            // metadata: MNetworkEnable
            std::int32_t m_nAccountIDs[64]; // 0x69c            
            // metadata: MNetworkEnable
            std::int32_t m_nMapId0[64]; // 0x79c            
            // metadata: MNetworkEnable
            std::int32_t m_nMapId1[64]; // 0x89c            
            // metadata: MNetworkEnable
            std::int32_t m_nMapId2[64]; // 0x99c            
            // metadata: MNetworkEnable
            std::int32_t m_nMapId3[64]; // 0xa9c            
            // metadata: MNetworkEnable
            std::int32_t m_nMapId4[64]; // 0xb9c            
            // metadata: MNetworkEnable
            std::int32_t m_nMapId5[64]; // 0xc9c            
            // metadata: MNetworkEnable
            std::int32_t m_nStartingSide0[64]; // 0xd9c            
            // metadata: MNetworkEnable
            std::int32_t m_nCurrentPhase; // 0xe9c            
            // metadata: MNetworkEnable
            std::int32_t m_nPhaseStartTick; // 0xea0            
            // metadata: MNetworkEnable
            std::int32_t m_nPhaseDurationTicks; // 0xea4            
            std::int32_t m_nPostDataUpdateTick; // 0xea8            
            bool m_bDisabledHud; // 0xeac            
            uint8_t _pad0ead[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_MapVetoPickController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_MapVetoPickController) == 0xeb0);
    };
};
