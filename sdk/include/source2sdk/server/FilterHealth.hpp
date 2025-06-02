#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseFilter.hpp"

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
        // Size: 0x548
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class FilterHealth : public source2sdk::server::CBaseFilter
        {
        public:
            bool m_bAdrenalineActive; // 0x538            
            uint8_t _pad0539[0x3]; // 0x539
            std::int32_t m_iHealthMin; // 0x53c            
            std::int32_t m_iHealthMax; // 0x540            
            uint8_t _pad0544[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in FilterHealth because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::FilterHealth) == 0x548);
    };
};
