#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PointCameraSettings_t.hpp"
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseLerp.hpp"

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
        // Size: 0xa0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCellForDomain "BaseDomain"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo
        #pragma pack(push, 1)
        class CPulseCell_LerpCameraSettings : public source2sdk::pulse_runtime_lib::CPulseCell_BaseLerp
        {
        public:
            float m_flSeconds; // 0x78            
            source2sdk::client::PointCameraSettings_t m_Start; // 0x7c            
            source2sdk::client::PointCameraSettings_t m_End; // 0x8c            
            uint8_t _pad009c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_LerpCameraSettings because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPulseCell_LerpCameraSettings) == 0xa0);
    };
};
