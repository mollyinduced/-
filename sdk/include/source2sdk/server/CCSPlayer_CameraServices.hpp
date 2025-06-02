#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCSPlayerBase_CameraServices.hpp"

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
        // Size: 0x1a8
        // Has VTable
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CCSPlayer_CameraServices : public source2sdk::server::CCSPlayerBase_CameraServices
        {
        public:
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CCSPlayer_CameraServices) == 0x1a8);
    };
};
