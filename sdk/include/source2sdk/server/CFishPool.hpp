#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CFish;
    };
};

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
        // Size: 0x538
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CFishPool : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04e0[0x10]; // 0x4e0
            std::int32_t m_fishCount; // 0x4f0            
            float m_maxRange; // 0x4f4            
            float m_swimDepth; // 0x4f8            
            float m_waterLevel; // 0x4fc            
            bool m_isDormant; // 0x500            
            uint8_t _pad0501[0x7]; // 0x501
            // m_fishes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CFish>> m_fishes;
            char m_fishes[0x18]; // 0x508            
            source2sdk::server::CountdownTimer m_visTimer; // 0x520            
            
            // Datamap fields:
            // void CFishPoolUpdate; // 0x0
            // float max_range; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFishPool because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFishPool) == 0x538);
    };
};
