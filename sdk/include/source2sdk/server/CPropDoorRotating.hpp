#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBasePropDoor.hpp"
#include "source2sdk/server/PropDoorRotatingOpenDirection_e.hpp"
#include "source2sdk/server/PropDoorRotatingSpawnPos_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CEntityBlocker;
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
        // Size: 0xf80
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CPropDoorRotating : public source2sdk::server::CBasePropDoor
        {
        public:
            Vector m_vecAxis; // 0xee8            
            float m_flDistance; // 0xef4            
            source2sdk::server::PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xef8            
            source2sdk::server::PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xefc            
            source2sdk::server::PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xf00            
            float m_flAjarAngle; // 0xf04            
            QAngle m_angRotationAjarDeprecated; // 0xf08            
            QAngle m_angRotationClosed; // 0xf14            
            QAngle m_angRotationOpenForward; // 0xf20            
            QAngle m_angRotationOpenBack; // 0xf2c            
            QAngle m_angGoal; // 0xf38            
            Vector m_vecForwardBoundsMin; // 0xf44            
            Vector m_vecForwardBoundsMax; // 0xf50            
            Vector m_vecBackBoundsMin; // 0xf5c            
            Vector m_vecBackBoundsMax; // 0xf68            
            bool m_bAjarDoorShouldntAlwaysOpen; // 0xf74            
            uint8_t _pad0f75[0x3]; // 0xf75
            // m_hEntityBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CEntityBlocker> m_hEntityBlocker;
            char m_hEntityBlocker[0x4]; // 0xf78            
            uint8_t _pad0f7c[0x4];
            
            // Datamap fields:
            // float InputSetRotationDistance; // 0x0
            // float InputSetSpeed; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPropDoorRotating because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPropDoorRotating) == 0xf80);
    };
};
