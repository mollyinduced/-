#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // 
        // static metadata: MPropertyCustomEditor "multi_int(2)"
        #pragma pack(push, 1)
        class CFiringModeInt
        {
        public:
            std::int32_t m_nValues[2]; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CFiringModeInt, m_nValues) == 0x0);
        
        static_assert(sizeof(source2sdk::client::CFiringModeInt) == 0x8);
    };
};
