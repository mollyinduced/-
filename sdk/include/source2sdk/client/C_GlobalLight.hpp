#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xa60
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_GlobalLight : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad0568[0x4c8]; // 0x568
            std::uint16_t m_WindClothForceHandle; // 0xa30            
            uint8_t _pad0a32[0x2e];
            
            // Static fields:
            static source2sdk::client::C_GlobalLight* &Get_sm_pGlobalLight(){return *reinterpret_cast<source2sdk::client::C_GlobalLight**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->GetStaticFields()[0]->m_pInstance);};
            static CUtlStringToken &Get_sm_pSkyboxSlots(){return *reinterpret_cast<CUtlStringToken*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->GetStaticFields()[1]->m_pInstance);};
            static CUtlVector<source2sdk::client::C_GlobalLight*> &Get_sm_nonPrimaryGlobalLights(){return *reinterpret_cast<CUtlVector<source2sdk::client::C_GlobalLight*>*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->GetStaticFields()[2]->m_pInstance);};
            
            // Datamap fields:
            // CGlobalLightBase CGlobalLightBase; // 0x570
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // float InputSetLightScale; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_GlobalLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_GlobalLight) == 0xa60);
    };
};
