#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPulseGraphComponentBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x188
        // Has VTable
        #pragma pack(push, 1)
        class CPulseGraphComponentGameBlackboard : public source2sdk::server::CPulseGraphComponentBase
        {
        public:
            uint8_t _pad0030[0x158];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CPulseGraphComponentGameBlackboard) == 0x188);
    };
};
