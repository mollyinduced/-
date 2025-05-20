#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CPulseCell_Outflow_PlaySceneBase_CursorState_t
        {
        public:
            // m_sceneInstance has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_sceneInstance;
            char m_sceneInstance[0x4]; // 0x0            
            // m_mainActor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_mainActor;
            char m_mainActor[0x4]; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CPulseCell_Outflow_PlaySceneBase_CursorState_t, m_sceneInstance) == 0x0);
        static_assert(offsetof(source2sdk::server::CPulseCell_Outflow_PlaySceneBase_CursorState_t, m_mainActor) == 0x4);
        
        static_assert(sizeof(source2sdk::server::CPulseCell_Outflow_PlaySceneBase_CursorState_t) == 0x8);
    };
};
