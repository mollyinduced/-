#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CSAdditionalPerRoundStats_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0x48
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct CSAdditionalMatchStats_t : public source2sdk::server::CSAdditionalPerRoundStats_t
        {
        public:
            std::int32_t m_numRoundsSurvived; // 0x18            
            std::int32_t m_maxNumRoundsSurvived; // 0x1c            
            std::int32_t m_numRoundsSurvivedTotal; // 0x20            
            std::int32_t m_iRoundsWonWithoutPurchase; // 0x24            
            std::int32_t m_iRoundsWonWithoutPurchaseTotal; // 0x28            
            std::int32_t m_numFirstKills; // 0x2c            
            std::int32_t m_numClutchKills; // 0x30            
            std::int32_t m_numPistolKills; // 0x34            
            std::int32_t m_numSniperKills; // 0x38            
            std::int32_t m_iNumSuicides; // 0x3c            
            std::int32_t m_iNumTeamKills; // 0x40            
            std::int32_t m_iTeamDamage; // 0x44            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSAdditionalMatchStats_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSAdditionalMatchStats_t) == 0x48);
    };
};
