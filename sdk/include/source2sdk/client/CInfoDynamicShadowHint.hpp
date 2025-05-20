#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x580
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CInfoDynamicShadowHint : public source2sdk::client::C_PointEntity
        {
        public:
            bool m_bDisabled; // 0x568            
            uint8_t _pad0569[0x3]; // 0x569
            float m_flRange; // 0x56c            
            std::int32_t m_nImportance; // 0x570            
            std::int32_t m_nLightChoice; // 0x574            
            // m_hLight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLight;
            char m_hLight[0x4]; // 0x578            
            uint8_t _pad057c[0x4];
            
            // Static fields:
            static CUtlVector<source2sdk::client::CInfoDynamicShadowHint*> &Get_m_AllHints(){return *reinterpret_cast<CUtlVector<source2sdk::client::CInfoDynamicShadowHint*>*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CInfoDynamicShadowHint")->GetStaticFields()[0]->m_pInstance);};
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoDynamicShadowHint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CInfoDynamicShadowHint) == 0x580);
    };
};
