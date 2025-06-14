#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"

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
        // Size: 0x4e8
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CProjectedDecal : public source2sdk::server::CPointEntity
        {
        public:
            std::int32_t m_nTexture; // 0x4e0            
            float m_flDistance; // 0x4e4            
            
            // Datamap fields:
            // void CProjectedDecalTriggerDecal; // 0x0
            // void CProjectedDecalStaticDecal; // 0x0
            // void InputActivate; // 0x0
            // CUtlString texture; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CProjectedDecal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CProjectedDecal) == 0x4e8);
    };
};
