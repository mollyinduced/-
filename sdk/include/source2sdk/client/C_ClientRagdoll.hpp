#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1020
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class C_ClientRagdoll : public source2sdk::client::CBaseAnimGraph
        {
        public:
            bool m_bFadeOut; // 0xf88            
            bool m_bImportant; // 0xf89            
            uint8_t _pad0f8a[0x2]; // 0xf8a
            source2sdk::entity2::GameTime_t m_flEffectTime; // 0xf8c            
            source2sdk::entity2::GameTime_t m_gibDespawnTime; // 0xf90            
            std::int32_t m_iCurrentFriction; // 0xf94            
            std::int32_t m_iMinFriction; // 0xf98            
            std::int32_t m_iMaxFriction; // 0xf9c            
            std::int32_t m_iFrictionAnimState; // 0xfa0            
            bool m_bReleaseRagdoll; // 0xfa4            
            source2sdk::modellib::AttachmentHandle_t m_iEyeAttachment; // 0xfa5            
            bool m_bFadingOut; // 0xfa6            
            uint8_t _pad0fa7[0x1]; // 0xfa7
            float m_flScaleEnd[10]; // 0xfa8            
            source2sdk::entity2::GameTime_t m_flScaleTimeStart[10]; // 0xfd0            
            source2sdk::entity2::GameTime_t m_flScaleTimeEnd[10]; // 0xff8            
            
            // Datamap fields:
            // Color m_clrRender; // 0xad8
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ClientRagdoll because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ClientRagdoll) == 0x1020);
    };
};
