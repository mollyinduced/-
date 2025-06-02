#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityComponent.hpp"
#include "source2sdk/entity2/EntComponentInfo_t.hpp"

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
        // Size: 0x40
        // Has VTable
        // Has Trivial Destructor
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CPropDataComponent : public source2sdk::entity2::CEntityComponent
        {
        public:
            uint8_t _pad0008[0x8]; // 0x8
            float m_flDmgModBullet; // 0x10            
            float m_flDmgModClub; // 0x14            
            float m_flDmgModExplosive; // 0x18            
            float m_flDmgModFire; // 0x1c            
            CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0x20            
            CUtlSymbolLarge m_iszBasePropData; // 0x28            
            std::int32_t m_nInteractions; // 0x30            
            bool m_bSpawnMotionDisabled; // 0x34            
            uint8_t _pad0035[0x3]; // 0x35
            std::int32_t m_nDisableTakePhysicsDamageSpawnFlag; // 0x38            
            std::int32_t m_nMotionDisabledSpawnFlag; // 0x3c            
            
            // Static fields:
            static source2sdk::entity2::EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<source2sdk::entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CPropDataComponent")->GetStaticFields()[0]->m_pInstance);};
            static std::int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<std::int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CPropDataComponent")->GetStaticFields()[1]->m_pInstance);};
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPropDataComponent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPropDataComponent) == 0x40);
    };
};
