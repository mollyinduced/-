#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/RenderHairStrandInfo_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x68
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CRenderGroom
        {
        public:
            // m_hairs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::RenderHairStrandInfo_t> m_hairs;
            char m_hairs[0x18]; // 0x0            
            // m_hairPositionOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_hairPositionOffsets;
            char m_hairPositionOffsets[0x18]; // 0x18            
            uint8_t _pad0030[0x10]; // 0x30
            // m_hSimParamsMat has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandleCopyable<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSimParamsMat;
            char m_hSimParamsMat[0x8]; // 0x40            
            std::int32_t m_nSegmentsPerHairStrand; // 0x48            
            std::int32_t m_nGuideHairCount; // 0x4c            
            std::int32_t m_nHairCount; // 0x50            
            std::int32_t m_nGroomGroupID; // 0x54            
            std::int32_t m_nAttachBoneIdx; // 0x58            
            std::int32_t m_nAttachMeshIdx; // 0x5c            
            std::int32_t m_nAttachMeshDrawCallIdx; // 0x60            
            bool m_bEnableSimulation; // 0x64            
            uint8_t _pad0065[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_hairs) == 0x0);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_hairPositionOffsets) == 0x18);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_hSimParamsMat) == 0x40);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_nSegmentsPerHairStrand) == 0x48);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_nGuideHairCount) == 0x4c);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_nHairCount) == 0x50);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_nGroomGroupID) == 0x54);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_nAttachBoneIdx) == 0x58);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_nAttachMeshIdx) == 0x5c);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_nAttachMeshDrawCallIdx) == 0x60);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_bEnableSimulation) == 0x64);
        
        static_assert(sizeof(source2sdk::modellib::CRenderGroom) == 0x68);
    };
};
