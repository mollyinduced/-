#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x80
        // Has VTable
        #pragma pack(push, 1)
        class CBuoyancyHelper
        {
        public:
            uint8_t _pad0000[0x18]; // 0x0
            CUtlStringToken m_nFluidType; // 0x18            
            float m_flFluidDensity; // 0x1c            
            // m_vecFractionOfWheelSubmergedForWheelFriction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecFractionOfWheelSubmergedForWheelFriction;
            char m_vecFractionOfWheelSubmergedForWheelFriction[0x18]; // 0x20            
            // m_vecWheelFrictionScales has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecWheelFrictionScales;
            char m_vecWheelFrictionScales[0x18]; // 0x38            
            // m_vecFractionOfWheelSubmergedForWheelDrag has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecFractionOfWheelSubmergedForWheelDrag;
            char m_vecFractionOfWheelSubmergedForWheelDrag[0x18]; // 0x50            
            // m_vecWheelDrag has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecWheelDrag;
            char m_vecWheelDrag[0x18]; // 0x68            
            
            // Datamap fields:
            // void m_pController; // 0x8
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CBuoyancyHelper, m_nFluidType) == 0x18);
        static_assert(offsetof(source2sdk::server::CBuoyancyHelper, m_flFluidDensity) == 0x1c);
        static_assert(offsetof(source2sdk::server::CBuoyancyHelper, m_vecFractionOfWheelSubmergedForWheelFriction) == 0x20);
        static_assert(offsetof(source2sdk::server::CBuoyancyHelper, m_vecWheelFrictionScales) == 0x38);
        static_assert(offsetof(source2sdk::server::CBuoyancyHelper, m_vecFractionOfWheelSubmergedForWheelDrag) == 0x50);
        static_assert(offsetof(source2sdk::server::CBuoyancyHelper, m_vecWheelDrag) == 0x68);
        
        static_assert(sizeof(source2sdk::server::CBuoyancyHelper) == 0x80);
    };
};
