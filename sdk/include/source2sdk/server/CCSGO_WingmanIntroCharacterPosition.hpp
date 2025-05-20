#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCSGO_TeamIntroCharacterPosition.hpp"

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
        // Size: 0xc68
        // Has VTable
        // Construct disallowed
        // MConstructibleClassBase
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CCSGO_WingmanIntroCharacterPosition : public source2sdk::server::CCSGO_TeamIntroCharacterPosition
        {
        public:
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CCSGO_WingmanIntroCharacterPosition) == 0xc68);
    };
};
