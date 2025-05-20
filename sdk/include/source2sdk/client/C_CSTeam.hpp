#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_Team.hpp"

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
        // Size: 0x8d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "char m_szTeamMatchStat"
        // static metadata: MNetworkVarNames "int m_numMapVictories"
        // static metadata: MNetworkVarNames "bool m_bSurrendered"
        // static metadata: MNetworkVarNames "int32 m_scoreFirstHalf"
        // static metadata: MNetworkVarNames "int32 m_scoreSecondHalf"
        // static metadata: MNetworkVarNames "int32 m_scoreOvertime"
        // static metadata: MNetworkVarNames "char m_szClanTeamname"
        // static metadata: MNetworkVarNames "uint32 m_iClanID"
        // static metadata: MNetworkVarNames "char m_szTeamFlagImage"
        // static metadata: MNetworkVarNames "char m_szTeamLogoImage"
        #pragma pack(push, 1)
        class C_CSTeam : public source2sdk::client::C_Team
        {
        public:
            // metadata: MNetworkEnable
            char m_szTeamMatchStat[512]; // 0x620            
            // metadata: MNetworkEnable
            std::int32_t m_numMapVictories; // 0x820            
            // metadata: MNetworkEnable
            bool m_bSurrendered; // 0x824            
            uint8_t _pad0825[0x3]; // 0x825
            // metadata: MNetworkEnable
            std::int32_t m_scoreFirstHalf; // 0x828            
            // metadata: MNetworkEnable
            std::int32_t m_scoreSecondHalf; // 0x82c            
            // metadata: MNetworkEnable
            std::int32_t m_scoreOvertime; // 0x830            
            // metadata: MNetworkEnable
            char m_szClanTeamname[129]; // 0x834            
            uint8_t _pad08b5[0x3]; // 0x8b5
            // metadata: MNetworkEnable
            std::uint32_t m_iClanID; // 0x8b8            
            // metadata: MNetworkEnable
            char m_szTeamFlagImage[8]; // 0x8bc            
            // metadata: MNetworkEnable
            char m_szTeamLogoImage[8]; // 0x8c4            
            uint8_t _pad08cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSTeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSTeam) == 0x8d0);
    };
};
