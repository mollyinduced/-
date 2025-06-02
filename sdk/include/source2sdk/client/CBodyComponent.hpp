#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityComponent.hpp"
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
#include "source2sdk/entity2/EntComponentInfo_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CGameSceneNode;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x50
        // Has VTable
        // Construct disallowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CBodyComponent : public source2sdk::entity2::CEntityComponent
        {
        public:
            // metadata: MNetworkDisable
            source2sdk::client::CGameSceneNode* m_pSceneNode; // 0x8            
            uint8_t _pad0010[0x10]; // 0x10
            // metadata: MNetworkDisable
            // metadata: MNetworkChangeAccessorFieldPathIndex
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x20            
            uint8_t _pad0048[0x8];
            
            // Static fields:
            static source2sdk::entity2::EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<source2sdk::entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponent")->GetStaticFields()[0]->m_pInstance);};
            static std::int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<std::int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponent")->GetStaticFields()[1]->m_pInstance);};
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBodyComponent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBodyComponent) == 0x50);
    };
};
