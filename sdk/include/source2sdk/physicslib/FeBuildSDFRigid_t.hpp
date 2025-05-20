#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/physicslib/FeSDFRigid_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x58
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeBuildSDFRigid_t : public source2sdk::physicslib::FeSDFRigid_t
        {
        public:
            std::int32_t m_nPriority; // 0x50            
            std::uint32_t m_nVertexMapHash; // 0x54            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in FeBuildSDFRigid_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::physicslib::FeBuildSDFRigid_t) == 0x58);
    };
};
