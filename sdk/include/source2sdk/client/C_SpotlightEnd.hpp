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
        // 
        // static metadata: MNetworkVarNames "float32 m_flLightScale"
        // static metadata: MNetworkVarNames "float32 m_Radius"
        #pragma pack(push, 1)
        class C_SpotlightEnd : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_flLightScale; // 0xd28            
            // metadata: MNetworkEnable
            float m_Radius; // 0xd2c            
            uint8_t _pad0d30[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_SpotlightEnd because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_SpotlightEnd) == 0xd38);
    };
};
