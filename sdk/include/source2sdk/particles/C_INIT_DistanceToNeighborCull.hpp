#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x330
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_DistanceToNeighborCull : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "cull distance"
            source2sdk::particleslib::CPerParticleFloatInput m_flDistance; // 0x1c8            
            // metadata: MPropertyFriendlyName "include particle radius"
            bool m_bIncludeRadii; // 0x328            
            uint8_t _pad0329[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_DistanceToNeighborCull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_DistanceToNeighborCull) == 0x330);
    };
};
