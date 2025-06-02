#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_PlantedC4;
    };
};

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
        // Size: 0xf98
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class C_Multimeter : public source2sdk::client::CBaseAnimGraph
        {
        public:
            uint8_t _pad0f88[0x8]; // 0xf88
            // m_hTargetC4 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_PlantedC4> m_hTargetC4;
            char m_hTargetC4[0x4]; // 0xf90            
            uint8_t _pad0f94[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Multimeter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Multimeter) == 0xf98);
    };
};
