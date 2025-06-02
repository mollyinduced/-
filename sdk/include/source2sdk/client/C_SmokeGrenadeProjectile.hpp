#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseCSGrenadeProjectile.hpp"

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
        // Size: 0x13b0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "int m_nSmokeEffectTickBegin"
        // static metadata: MNetworkVarNames "bool m_bDidSmokeEffect"
        // static metadata: MNetworkVarNames "int m_nRandomSeed"
        // static metadata: MNetworkVarNames "Vector m_vSmokeColor"
        // static metadata: MNetworkVarNames "Vector m_vSmokeDetonationPos"
        // static metadata: MNetworkVarNames "uint8 m_VoxelFrameData"
        // static metadata: MNetworkVarNames "int m_nVoxelFrameDataSize"
        // static metadata: MNetworkVarNames "int m_nVoxelUpdate"
        #pragma pack(push, 1)
        class C_SmokeGrenadeProjectile : public source2sdk::client::C_BaseCSGrenadeProjectile
        {
        public:
            uint8_t _pad1208[0x8]; // 0x1208
            // metadata: MNetworkEnable
            std::int32_t m_nSmokeEffectTickBegin; // 0x1210            
            // metadata: MNetworkEnable
            bool m_bDidSmokeEffect; // 0x1214            
            uint8_t _pad1215[0x3]; // 0x1215
            // metadata: MNetworkEnable
            std::int32_t m_nRandomSeed; // 0x1218            
            // metadata: MNetworkEnable
            Vector m_vSmokeColor; // 0x121c            
            // metadata: MNetworkEnable
            Vector m_vSmokeDetonationPos; // 0x1228            
            uint8_t _pad1234[0x4]; // 0x1234
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSimulationChanged"
            // m_VoxelFrameData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint8_t> m_VoxelFrameData;
            char m_VoxelFrameData[0x18]; // 0x1238            
            // metadata: MNetworkEnable
            std::int32_t m_nVoxelFrameDataSize; // 0x1250            
            // metadata: MNetworkEnable
            std::int32_t m_nVoxelUpdate; // 0x1254            
            bool m_bSmokeVolumeDataReceived; // 0x1258            
            bool m_bSmokeEffectSpawned; // 0x1259            
            uint8_t _pad125a[0x156];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_SmokeGrenadeProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_SmokeGrenadeProjectile) == 0x13b0);
    };
};
