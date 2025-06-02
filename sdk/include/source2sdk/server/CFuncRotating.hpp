#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0x878
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkOverride "m_angRotation CGameSceneNode"
        // static metadata: MNetworkOverride "m_flSimulationTime CBaseEntity"
        #pragma pack(push, 1)
        class CFuncRotating : public source2sdk::server::CBaseModelEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnStopped; // 0x790            
            source2sdk::entity2::CEntityIOOutput m_OnStarted; // 0x7b8            
            source2sdk::entity2::CEntityIOOutput m_OnReachedStart; // 0x7e0            
            RotationVector m_localRotationVector; // 0x808            
            float m_flFanFriction; // 0x814            
            float m_flAttenuation; // 0x818            
            float m_flVolume; // 0x81c            
            float m_flTargetSpeed; // 0x820            
            float m_flMaxSpeed; // 0x824            
            float m_flBlockDamage; // 0x828            
            uint8_t _pad082c[0x4]; // 0x82c
            CUtlSymbolLarge m_NoiseRunning; // 0x830            
            bool m_bReversed; // 0x838            
            bool m_bAccelDecel; // 0x839            
            uint8_t _pad083a[0xa]; // 0x83a
            QAngle m_prevLocalAngles; // 0x844            
            QAngle m_angStart; // 0x850            
            bool m_bStopAtStartPos; // 0x85c            
            uint8_t _pad085d[0x3]; // 0x85d
            Vector m_vecClientOrigin; // 0x860            
            QAngle m_vecClientAngles; // 0x86c            
            
            // Datamap fields:
            // bool movewithoutpushingblockers; // 0x7fffffff
            // void CFuncRotatingSpinUpMove; // 0x0
            // void CFuncRotatingSpinDownMove; // 0x0
            // void CFuncRotatingHurtTouch; // 0x0
            // void CFuncRotatingRotatingUse; // 0x0
            // void CFuncRotatingRotateMove; // 0x0
            // void CFuncRotatingReverseMove; // 0x0
            // float InputSetSpeed; // 0x0
            // void InputStart; // 0x0
            // void InputStop; // 0x0
            // void InputToggle; // 0x0
            // void InputReverse; // 0x0
            // void InputStartForward; // 0x0
            // void InputStartBackward; // 0x0
            // void InputStopAtStartPos; // 0x0
            // void InputSnapToStartPos; // 0x0
            // Vector InputSetStartPos; // 0x0
            // void InputEnableAccelDecel; // 0x0
            // void InputDisableAccelDecel; // 0x0
            // void m_nNoiseRunningGuid; // 0x83c
            // int32_t fanfriction; // 0x7fffffff
            // int32_t Volume; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncRotating because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncRotating) == 0x878);
    };
};
