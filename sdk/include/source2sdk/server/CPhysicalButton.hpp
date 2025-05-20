#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseButton.hpp"

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
        // Size: 0x960
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CPhysicalButton : public source2sdk::server::CBaseButton
        {
        public:
            // Datamap fields:
            // void CPhysicalButtonPhysicsThink; // 0x0
            // void CPhysicalButtonButtonTouch; // 0x0
            // void CPhysicalButtonTriggerAndWait; // 0x0
            // void CPhysicalButtonButtonBackHome; // 0x0
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CPhysicalButton) == 0x960);
    };
};
