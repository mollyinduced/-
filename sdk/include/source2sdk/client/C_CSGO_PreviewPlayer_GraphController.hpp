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
        // Size: 0x190
        // Has VTable
        #pragma pack(push, 1)
        class C_CSGO_PreviewPlayer_GraphController : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            // m_pszCharacterMode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<char*> m_pszCharacterMode;
            char m_pszCharacterMode[0x28]; // 0x60            
            // m_pszTeamPreviewVariant has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<char*> m_pszTeamPreviewVariant;
            char m_pszTeamPreviewVariant[0x28]; // 0x88            
            // m_pszTeamPreviewPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<char*> m_pszTeamPreviewPosition;
            char m_pszTeamPreviewPosition[0x28]; // 0xb0            
            // m_pszEndOfMatchCelebration has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<char*> m_pszEndOfMatchCelebration;
            char m_pszEndOfMatchCelebration[0x28]; // 0xd8            
            // m_nTeamPreviewRandom has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<std::int32_t> m_nTeamPreviewRandom;
            char m_nTeamPreviewRandom[0x20]; // 0x100            
            // m_pszWeaponState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<char*> m_pszWeaponState;
            char m_pszWeaponState[0x28]; // 0x120            
            // m_pszWeaponType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<char*> m_pszWeaponType;
            char m_pszWeaponType[0x28]; // 0x148            
            // m_bCT has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bCT;
            char m_bCT[0x20]; // 0x170            
            
            // Static fields:
            static std::uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<std::uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("C_CSGO_PreviewPlayer_GraphController")->GetStaticFields()[0]->m_pInstance);};
            static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("C_CSGO_PreviewPlayer_GraphController")->GetStaticFields()[1]->m_pInstance);};
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSGO_PreviewPlayer_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSGO_PreviewPlayer_GraphController) == 0x190);
    };
};
