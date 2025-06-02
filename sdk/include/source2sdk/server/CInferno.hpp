#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/navlib/Extent.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/IntervalTimer.hpp"

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
        // Size: 0x1418
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
        // static metadata: MNetworkVarNames "int m_nFireEffectTickBegin"
        // static metadata: MNetworkVarNames "float m_nFireLifetime"
        // static metadata: MNetworkVarNames "bool m_bInPostEffectTime"
        #pragma pack(push, 1)
        class CInferno : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad0790[0x10]; // 0x790
            // metadata: MNetworkEnable
            Vector m_firePositions[64]; // 0x7a0            
            // metadata: MNetworkEnable
            Vector m_fireParentPositions[64]; // 0xaa0            
            // metadata: MNetworkEnable
            bool m_bFireIsBurning[64]; // 0xda0            
            // metadata: MNetworkEnable
            Vector m_BurnNormal[64]; // 0xde0            
            // metadata: MNetworkEnable
            std::int32_t m_fireCount; // 0x10e0            
            // metadata: MNetworkEnable
            std::int32_t m_nInfernoType; // 0x10e4            
            // metadata: MNetworkEnable
            std::int32_t m_nFireEffectTickBegin; // 0x10e8            
            // metadata: MNetworkEnable
            float m_nFireLifetime; // 0x10ec            
            // metadata: MNetworkEnable
            bool m_bInPostEffectTime; // 0x10f0            
            uint8_t _pad10f1[0x3]; // 0x10f1
            std::int32_t m_nFiresExtinguishCount; // 0x10f4            
            bool m_bWasCreatedInSmoke; // 0x10f8            
            uint8_t _pad10f9[0x207]; // 0x10f9
            source2sdk::navlib::Extent m_extent; // 0x1300            
            source2sdk::server::CountdownTimer m_damageTimer; // 0x1318            
            source2sdk::server::CountdownTimer m_damageRampTimer; // 0x1330            
            Vector m_splashVelocity; // 0x1348            
            Vector m_InitialSplashVelocity; // 0x1354            
            Vector m_startPos; // 0x1360            
            Vector m_vecOriginalSpawnLocation; // 0x136c            
            source2sdk::server::IntervalTimer m_activeTimer; // 0x1378            
            std::int32_t m_fireSpawnOffset; // 0x1388            
            std::int32_t m_nMaxFlames; // 0x138c            
            std::int32_t m_nSpreadCount; // 0x1390            
            uint8_t _pad1394[0x4]; // 0x1394
            source2sdk::server::CountdownTimer m_BookkeepingTimer; // 0x1398            
            source2sdk::server::CountdownTimer m_NextSpreadTimer; // 0x13b0            
            std::uint16_t m_nSourceItemDefIndex; // 0x13c8            
            uint8_t _pad13ca[0x4e];
            
            // Static fields:
            static float &Get_InfernoFire_Radius(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->GetStaticFields()[0]->m_pInstance);};
            static float &Get_InfernoFire_LOSHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->GetStaticFields()[1]->m_pInstance);};
            static float &Get_InfernoFire_CylinderHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->GetStaticFields()[2]->m_pInstance);};
            static float &Get_InfernoFire_FullHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->GetStaticFields()[3]->m_pInstance);};
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInferno because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInferno) == 0x1418);
    };
};
