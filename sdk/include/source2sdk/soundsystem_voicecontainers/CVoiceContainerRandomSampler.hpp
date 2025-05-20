#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCVoiceContainerBase.hpp"
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_voicecontainers
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1e8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Random Smapler Container"
        // static metadata: MPropertyDescription "Trash Synth"
        #pragma pack(push, 1)
        class CVoiceContainerRandomSampler : public source2sdk::soundsystem_voicecontainers::CVoiceContainerBase
        {
        public:
            float m_flAmplitude; // 0xc0            
            float m_flAmplitudeJitter; // 0xc4            
            float m_flTimeJitter; // 0xc8            
            float m_flMaxLength; // 0xcc            
            std::int32_t m_nNumDelayVariations; // 0xd0            
            uint8_t _pad00d4[0x4]; // 0xd4
            // m_grainResources has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCVoiceContainerBase>> m_grainResources;
            char m_grainResources[0x18]; // 0xd8            
            uint8_t _pad00f0[0xf8];
            
            // Static fields:
            static std::int32_t &Get_nInstancesFixed(){return *reinterpret_cast<std::int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CVoiceContainerRandomSampler")->GetStaticFields()[0]->m_pInstance);};
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerRandomSampler because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerRandomSampler) == 0x1e8);
    };
};
