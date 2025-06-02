#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"

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
        // Size: 0xf58
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "float m_MaxWeight"
        // static metadata: MNetworkVarNames "float m_FadeDuration"
        // static metadata: MNetworkVarNames "float m_Weight"
        // static metadata: MNetworkVarNames "char m_lookupFilename"
        #pragma pack(push, 1)
        class C_ColorCorrectionVolume : public source2sdk::client::C_BaseTrigger
        {
        public:
            float m_LastEnterWeight; // 0xd30            
            float m_LastEnterTime; // 0xd34            
            float m_LastExitWeight; // 0xd38            
            float m_LastExitTime; // 0xd3c            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0xd40            
            uint8_t _pad0d41[0x3]; // 0xd41
            // metadata: MNetworkEnable
            float m_MaxWeight; // 0xd44            
            // metadata: MNetworkEnable
            float m_FadeDuration; // 0xd48            
            // metadata: MNetworkEnable
            float m_Weight; // 0xd4c            
            // metadata: MNetworkEnable
            char m_lookupFilename[512]; // 0xd50            
            uint8_t _pad0f50[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ColorCorrectionVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ColorCorrectionVolume) == 0xf58);
    };
};
