#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSnapshot.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x8330
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "Vector m_firePositions"
        // static metadata: MNetworkVarNames "Vector m_fireParentPositions"
        // static metadata: MNetworkVarNames "bool m_bFireIsBurning"
        // static metadata: MNetworkVarNames "Vector m_BurnNormal"
        // static metadata: MNetworkVarNames "int m_fireCount"
        // static metadata: MNetworkVarNames "int m_nInfernoType"
        // static metadata: MNetworkVarNames "float m_nFireLifetime"
        // static metadata: MNetworkVarNames "bool m_bInPostEffectTime"
        // static metadata: MNetworkVarNames "int m_nFireEffectTickBegin"
        #pragma pack(push, 1)
        class C_Inferno : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad0d28[0x40]; // 0xd28
            source2sdk::client::ParticleIndex_t m_nfxFireDamageEffect; // 0xd68            
            uint8_t _pad0d6c[0x4]; // 0xd6c
            // m_hInfernoPointsSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hInfernoPointsSnapshot;
            char m_hInfernoPointsSnapshot[0x8]; // 0xd70            
            // m_hInfernoFillerPointsSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hInfernoFillerPointsSnapshot;
            char m_hInfernoFillerPointsSnapshot[0x8]; // 0xd78            
            // m_hInfernoOutlinePointsSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hInfernoOutlinePointsSnapshot;
            char m_hInfernoOutlinePointsSnapshot[0x8]; // 0xd80            
            // m_hInfernoClimbingOutlinePointsSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hInfernoClimbingOutlinePointsSnapshot;
            char m_hInfernoClimbingOutlinePointsSnapshot[0x8]; // 0xd88            
            // m_hInfernoDecalsSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hInfernoDecalsSnapshot;
            char m_hInfernoDecalsSnapshot[0x8]; // 0xd90            
            // metadata: MNetworkEnable
            Vector m_firePositions[64]; // 0xd98            
            // metadata: MNetworkEnable
            Vector m_fireParentPositions[64]; // 0x1098            
            // metadata: MNetworkEnable
            bool m_bFireIsBurning[64]; // 0x1398            
            // metadata: MNetworkEnable
            Vector m_BurnNormal[64]; // 0x13d8            
            // metadata: MNetworkEnable
            std::int32_t m_fireCount; // 0x16d8            
            // metadata: MNetworkEnable
            std::int32_t m_nInfernoType; // 0x16dc            
            // metadata: MNetworkEnable
            float m_nFireLifetime; // 0x16e0            
            // metadata: MNetworkEnable
            bool m_bInPostEffectTime; // 0x16e4            
            uint8_t _pad16e5[0x3]; // 0x16e5
            std::int32_t m_lastFireCount; // 0x16e8            
            // metadata: MNetworkEnable
            std::int32_t m_nFireEffectTickBegin; // 0x16ec            
            uint8_t _pad16f0[0x6c00]; // 0x16f0
            std::int32_t m_drawableCount; // 0x82f0            
            bool m_blosCheck; // 0x82f4            
            uint8_t _pad82f5[0x3]; // 0x82f5
            std::int32_t m_nlosperiod; // 0x82f8            
            float m_maxFireHalfWidth; // 0x82fc            
            float m_maxFireHeight; // 0x8300            
            Vector m_minBounds; // 0x8304            
            Vector m_maxBounds; // 0x8310            
            float m_flLastGrassBurnThink; // 0x831c            
            uint8_t _pad8320[0x10];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Inferno because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Inferno) == 0x8330);
    };
};
