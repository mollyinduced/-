#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityComponent.hpp"
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
#include "source2sdk/entity2/EntComponentInfo_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0xb8
        // Has VTable
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CRenderComponent : public source2sdk::entity2::CEntityComponent
        {
        public:
            uint8_t _pad0008[0x8]; // 0x8
            // metadata: MNetworkDisable
            // metadata: MNetworkChangeAccessorFieldPathIndex
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x10            
            uint8_t _pad0038[0x18]; // 0x38
            bool m_bIsRenderingWithViewModels; // 0x50            
            uint8_t _pad0051[0x3]; // 0x51
            std::uint32_t m_nSplitscreenFlags; // 0x54            
            uint8_t _pad0058[0x8]; // 0x58
            bool m_bEnableRendering; // 0x60            
            uint8_t _pad0061[0x4f]; // 0x61
            bool m_bInterpolationReadyToDraw; // 0xb0            
            uint8_t _pad00b1[0x7];
            
            // Static fields:
            static source2sdk::entity2::EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<source2sdk::entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CRenderComponent")->GetStaticFields()[0]->m_pInstance);};
            static std::int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<std::int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CRenderComponent")->GetStaticFields()[1]->m_pInstance);};
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRenderComponent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRenderComponent) == 0xb8);
    };
};
