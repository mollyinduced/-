#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBasePlatTrain.hpp"

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
        // Size: 0x840
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CFuncPlat : public source2sdk::server::CBasePlatTrain
        {
        public:
            CUtlSymbolLarge m_sNoise; // 0x838            
            
            // Datamap fields:
            // void CFuncPlatPlatUse; // 0x0
            // void CFuncPlatCallGoDown; // 0x0
            // void CFuncPlatCallHitTop; // 0x0
            // void CFuncPlatCallHitBottom; // 0x0
            // void InputToggle; // 0x0
            // void InputGoUp; // 0x0
            // void InputGoDown; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncPlat because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncPlat) == 0x840);
    };
};
