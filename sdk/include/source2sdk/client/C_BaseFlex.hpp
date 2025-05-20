#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/client/C_BaseFlex_Emphasized_Phoneme.hpp"
#include "source2sdk/client/SceneEventId_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"

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
        // Size: 0x1120
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "float32 m_flexWeight"
        // static metadata: MNetworkVarNames "bool m_blinktoggle"
        #pragma pack(push, 1)
        class C_BaseFlex : public source2sdk::client::CBaseAnimGraph
        {
        public:
            uint8_t _pad0f88[0x10]; // 0xf88
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "12"
            // metadata: MNetworkMinValue "0.000000"
            // metadata: MNetworkMaxValue "1.000000"
            // metadata: MNetworkEncodeFlags "1"
            // m_flexWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<float> m_flexWeight;
            char m_flexWeight[0x18]; // 0xf98            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkChangeCallback "OnViewTargetChanged"
            Vector m_vLookTargetPosition; // 0xfb0            
            uint8_t _pad0fbc[0xc]; // 0xfbc
            // metadata: MNetworkEnable
            bool m_blinktoggle; // 0xfc8            
            uint8_t _pad0fc9[0x5f]; // 0xfc9
            std::int32_t m_nLastFlexUpdateFrameCount; // 0x1028            
            Vector m_CachedViewTarget; // 0x102c            
            source2sdk::client::SceneEventId_t m_nNextSceneEventId; // 0x1038            
            std::int32_t m_iBlink; // 0x103c            
            float m_blinktime; // 0x1040            
            bool m_prevblinktoggle; // 0x1044            
            uint8_t _pad1045[0x3]; // 0x1045
            std::int32_t m_iJawOpen; // 0x1048            
            float m_flJawOpenAmount; // 0x104c            
            float m_flBlinkAmount; // 0x1050            
            source2sdk::modellib::AttachmentHandle_t m_iMouthAttachment; // 0x1054            
            source2sdk::modellib::AttachmentHandle_t m_iEyeAttachment; // 0x1055            
            bool m_bResetFlexWeightsOnModelChange; // 0x1056            
            uint8_t _pad1057[0x19]; // 0x1057
            std::int32_t m_nEyeOcclusionRendererBone; // 0x1070            
            matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0x1074            
            Vector m_vEyeOcclusionRendererHalfExtent; // 0x10a4            
            uint8_t _pad10b0[0x10]; // 0x10b0
            source2sdk::client::C_BaseFlex_Emphasized_Phoneme m_PhonemeClasses[3]; // 0x10c0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseFlex because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseFlex) == 0x1120);
    };
};
