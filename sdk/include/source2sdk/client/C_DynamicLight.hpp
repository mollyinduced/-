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
        // Size: 0xd50
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "uint8 m_Flags"
        // static metadata: MNetworkVarNames "uint8 m_LightStyle"
        // static metadata: MNetworkVarNames "float32 m_Radius"
        // static metadata: MNetworkVarNames "int32 m_Exponent"
        // static metadata: MNetworkVarNames "float32 m_InnerAngle"
        // static metadata: MNetworkVarNames "float32 m_OuterAngle"
        // static metadata: MNetworkVarNames "float32 m_SpotRadius"
        #pragma pack(push, 1)
        class C_DynamicLight : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            std::uint8_t m_Flags; // 0xd28            
            // metadata: MNetworkEnable
            std::uint8_t m_LightStyle; // 0xd29            
            uint8_t _pad0d2a[0x2]; // 0xd2a
            // metadata: MNetworkEnable
            float m_Radius; // 0xd2c            
            // metadata: MNetworkEnable
            std::int32_t m_Exponent; // 0xd30            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0.000000"
            // metadata: MNetworkMaxValue "360.000000"
            float m_InnerAngle; // 0xd34            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0.000000"
            // metadata: MNetworkMaxValue "360.000000"
            float m_OuterAngle; // 0xd38            
            // metadata: MNetworkEnable
            float m_SpotRadius; // 0xd3c            
            uint8_t _pad0d40[0x10];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DynamicLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DynamicLight) == 0xd50);
    };
};
