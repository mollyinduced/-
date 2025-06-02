#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimGraphControllerBase.hpp"

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
        // Size: 0x78
        // Has VTable
        #pragma pack(push, 1)
        class CCSGOViewModel_GraphController : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            CAnimGraphTagOptionalRef m_sReloadComplete; // 0x60            
            
            // Static fields:
            static std::uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<std::uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCSGOViewModel_GraphController")->GetStaticFields()[0]->m_pInstance);};
            static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCSGOViewModel_GraphController")->GetStaticFields()[1]->m_pInstance);};
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSGOViewModel_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCSGOViewModel_GraphController) == 0x78);
    };
};
