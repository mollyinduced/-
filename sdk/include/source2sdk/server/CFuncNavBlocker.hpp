#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0x7a0
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CFuncNavBlocker : public source2sdk::server::CBaseModelEntity
        {
        public:
            bool m_bDisabled; // 0x790            
            uint8_t _pad0791[0x3]; // 0x791
            std::int32_t m_nBlockedTeamNumber; // 0x794            
            uint8_t _pad0798[0x8];
            
            // Datamap fields:
            // void InputBlockNav; // 0x0
            // void InputUnblockNav; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncNavBlocker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncNavBlocker) == 0x7a0);
    };
};
