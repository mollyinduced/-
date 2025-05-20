#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CVSound.hpp"
namespace source2sdk
{
    namespace soundsystem_voicecontainers
    {
        struct CVoiceContainerAnalysisBase;
    };
};

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
        // Standard-layout class: true
        // Size: 0xc0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataNodeType "1"
        // static metadata: MFgdFromSchemaEditablePolymorphicThisClass
        // static metadata: MVDataFileExtension
        // static metadata: MPropertyFriendlyName "VSND Container"
        // static metadata: MPropertyDescription "Voice Container Base"
        #pragma pack(push, 1)
        class CVoiceContainerBase
        {
        public:
            uint8_t _pad0000[0x38]; // 0x0
            // metadata: MPropertySuppressField
            source2sdk::soundsystem_voicecontainers::CVSound m_vSound; // 0x38            
            // metadata: MPropertySuppressExpr "true"
            source2sdk::soundsystem_voicecontainers::CVoiceContainerAnalysisBase* m_pEnvelopeAnalyzer; // 0xb8            
            
            // Static fields:
            static bool &Get_bAudioFinishedPlaying(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CVoiceContainerBase")->GetStaticFields()[0]->m_pInstance);};
            static bool &Get_bAudioStillPlaying(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CVoiceContainerBase")->GetStaticFields()[1]->m_pInstance);};
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerBase, m_vSound) == 0x38);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerBase, m_pEnvelopeAnalyzer) == 0xb8);
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerBase) == 0xc0);
    };
};
