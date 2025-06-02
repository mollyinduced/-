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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x568
        // Has VTable
        // Construct disallowed
        // MConstructibleClassBase
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class C_CSGO_EndOfMatchLineupEndpoint : public source2sdk::client::C_BaseEntity
        {
        public:
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::C_CSGO_EndOfMatchLineupEndpoint) == 0x568);
    };
};
