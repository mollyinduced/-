#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/Hull_t.hpp"
#include "source2sdk/server/CBaseFlex.hpp"
#include "source2sdk/server/RelationshipOverride_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CEconWearable;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xac0
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkExcludeByUserGroup "LocalPlayerExclusive"
        // static metadata: MNetworkVarNames "CHandle< CEconWearable > m_hMyWearables"
        #pragma pack(push, 1)
        class CBaseCombatCharacter : public source2sdk::server::CBaseFlex
        {
        public:
            bool m_bForceServerRagdoll; // 0xa38            
            uint8_t _pad0a39[0x7]; // 0xa39
            // metadata: MNetworkEnable
            // m_hMyWearables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CEconWearable>> m_hMyWearables;
            char m_hMyWearables[0x18]; // 0xa40            
            float m_impactEnergyScale; // 0xa58            
            bool m_bApplyStressDamage; // 0xa5c            
            uint8_t _pad0a5d[0x43]; // 0xa5d
            std::int32_t m_iDamageCount; // 0xaa0            
            uint8_t _pad0aa4[0x4]; // 0xaa4
            // m_pVecRelationships has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::RelationshipOverride_t>* m_pVecRelationships;
            char m_pVecRelationships[0x8]; // 0xaa8            
            CUtlSymbolLarge m_strRelationships; // 0xab0            
            source2sdk::client::Hull_t m_eHull; // 0xab8            
            std::uint32_t m_nNavHullIdx; // 0xabc            
            
            // Static fields:
            static std::int32_t &Get_sm_lastInteraction(){return *reinterpret_cast<std::int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCombatCharacter")->GetStaticFields()[0]->m_pInstance);};
            
            // Datamap fields:
            // int32_t m_LastHitGroup; // 0x550
            // void InputBecomeServerRagdoll; // 0x0
            // CUtlSymbolLarge InputSetRelationship; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseCombatCharacter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseCombatCharacter) == 0xac0);
    };
};
