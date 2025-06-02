#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x198
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nMatchSeed"
        // static metadata: MNetworkVarNames "bool m_bBlockersPresent"
        // static metadata: MNetworkVarNames "bool m_bRoundInProgress"
        // static metadata: MNetworkVarNames "int m_iFirstSecondHalfRound"
        // static metadata: MNetworkVarNames "int m_iBombSite"
        #pragma pack(push, 1)
        class CRetakeGameRules
        {
        public:
            uint8_t _pad0000[0xf8]; // 0x0
            // metadata: MNetworkEnable
            std::int32_t m_nMatchSeed; // 0xf8            
            // metadata: MNetworkEnable
            bool m_bBlockersPresent; // 0xfc            
            // metadata: MNetworkEnable
            bool m_bRoundInProgress; // 0xfd            
            uint8_t _pad00fe[0x2]; // 0xfe
            // metadata: MNetworkEnable
            std::int32_t m_iFirstSecondHalfRound; // 0x100            
            // metadata: MNetworkEnable
            std::int32_t m_iBombSite; // 0x104            
            uint8_t _pad0108[0x90];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CRetakeGameRules, m_nMatchSeed) == 0xf8);
        static_assert(offsetof(source2sdk::server::CRetakeGameRules, m_bBlockersPresent) == 0xfc);
        static_assert(offsetof(source2sdk::server::CRetakeGameRules, m_bRoundInProgress) == 0xfd);
        static_assert(offsetof(source2sdk::server::CRetakeGameRules, m_iFirstSecondHalfRound) == 0x100);
        static_assert(offsetof(source2sdk::server::CRetakeGameRules, m_iBombSite) == 0x104);
        
        static_assert(sizeof(source2sdk::server::CRetakeGameRules) == 0x198);
    };
};
