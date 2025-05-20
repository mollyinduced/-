#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CStopwatchBase.hpp"

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
        // Standard-layout class: false
        // Size: 0x14
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CRandStopwatch : public source2sdk::client::CStopwatchBase
        {
        public:
            float m_minInterval; // 0xc            
            float m_maxInterval; // 0x10            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRandStopwatch because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CRandStopwatch) == 0x14);
    };
};
