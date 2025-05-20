#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/client/TimedEvent.hpp"

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
        // Size: 0xd80
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class C_Precipitation : public source2sdk::client::C_BaseTrigger
        {
        public:
            float m_flDensity; // 0xd30            
            uint8_t _pad0d34[0xc]; // 0xd34
            float m_flParticleInnerDist; // 0xd40            
            uint8_t _pad0d44[0x4]; // 0xd44
            char* m_pParticleDef; // 0xd48            
            uint8_t _pad0d50[0x20]; // 0xd50
            source2sdk::client::TimedEvent m_tParticlePrecipTraceTimer[1]; // 0xd70            
            bool m_bActiveParticlePrecipEmitter[1]; // 0xd78            
            bool m_bParticlePrecipInitialized; // 0xd79            
            bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0xd7a            
            uint8_t _pad0d7b[0x1]; // 0xd7b
            std::int32_t m_nAvailableSheetSequencesMaxIndex; // 0xd7c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Precipitation because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Precipitation) == 0xd80);
    };
};
