#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"

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
        // Size: 0xd38
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class C_FuncTrackTrain : public source2sdk::client::C_BaseModelEntity
        {
        public:
            std::int32_t m_nLongAxis; // 0xd28            
            float m_flRadius; // 0xd2c            
            float m_flLineLength; // 0xd30            
            uint8_t _pad0d34[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_FuncTrackTrain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_FuncTrackTrain) == 0xd38);
    };
};
