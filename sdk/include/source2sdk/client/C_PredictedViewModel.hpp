#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseViewModel.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1018
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class C_PredictedViewModel : public source2sdk::client::C_BaseViewModel
        {
        public:
            Vector m_vPredictedLagOffset; // 0xff0            
            QAngle m_targetSpeed; // 0xffc            
            QAngle m_currentSpeed; // 0x1008            
            uint8_t _pad1014[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PredictedViewModel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PredictedViewModel) == 0x1018);
    };
};
