#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/worldrenderer/ObjectTypeFlags_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x18
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AggregateMeshInfo_t
        {
        public:
            std::uint32_t m_nVisClusterMemberOffset; // 0x0            
            std::uint8_t m_nVisClusterMemberCount; // 0x4            
            bool m_bHasTransform; // 0x5            
            std::int16_t m_nDrawCallIndex; // 0x6            
            std::int16_t m_nLODSetupIndex; // 0x8            
            std::uint8_t m_nLODGroupMask; // 0xa            
            Color m_vTintColor; // 0xb            
            uint8_t _pad000f[0x1]; // 0xf
            source2sdk::worldrenderer::ObjectTypeFlags_t m_objectFlags; // 0x10            
            std::int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x14            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::AggregateMeshInfo_t, m_nVisClusterMemberOffset) == 0x0);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateMeshInfo_t, m_nVisClusterMemberCount) == 0x4);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateMeshInfo_t, m_bHasTransform) == 0x5);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateMeshInfo_t, m_nDrawCallIndex) == 0x6);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateMeshInfo_t, m_nLODSetupIndex) == 0x8);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateMeshInfo_t, m_nLODGroupMask) == 0xa);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateMeshInfo_t, m_vTintColor) == 0xb);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateMeshInfo_t, m_objectFlags) == 0x10);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateMeshInfo_t, m_nLightProbeVolumePrecomputedHandshake) == 0x14);
        
        static_assert(sizeof(source2sdk::worldrenderer::AggregateMeshInfo_t) == 0x18);
    };
};
