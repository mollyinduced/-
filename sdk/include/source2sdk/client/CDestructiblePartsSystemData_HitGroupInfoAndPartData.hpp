#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDestructiblePartsSystemData_PartData.hpp"

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
        // Standard-layout class: true
        // Size: 0x28
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDestructiblePartsSystemData_HitGroupInfoAndPartData
        {
        public:
            // metadata: MPropertyDescription "Name for this destructible part."
            CUtlString m_sName; // 0x0            
            // metadata: MPropertyDescription "Data for this destructible part."
            // metadata: MPropertyAutoExpandSelf
            // m_DestructiblePartsData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDestructiblePartsSystemData_PartData> m_DestructiblePartsData;
            char m_DestructiblePartsData[0x18]; // 0x8            
            // metadata: MPropertyStartGroup "+Hitgroup"
            // metadata: MPropertyDescription "Do we disable the hitgroup when all sub parts are destroyed?"
            bool m_bDisableHitGroupWhenDestroyed; // 0x20            
            uint8_t _pad0021[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndPartData, m_sName) == 0x0);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndPartData, m_DestructiblePartsData) == 0x8);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndPartData, m_bDisableHitGroupWhenDestroyed) == 0x20);
        
        static_assert(sizeof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndPartData) == 0x28);
    };
};
