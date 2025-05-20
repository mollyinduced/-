#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDestructiblePartsSystemData_HitGroupInfoAndPartData.hpp"
#include "source2sdk/client/HitGroup_t.hpp"

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
        // static metadata: MModelGameData
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDestructiblePartsSystemData
        {
        public:
            // metadata: MPropertyDescription "Destructible Parts"
            // m_DestructiblePartsDataByHitGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::HitGroup_t,source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndPartData> m_DestructiblePartsDataByHitGroup;
            char m_DestructiblePartsDataByHitGroup[0x28]; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData, m_DestructiblePartsDataByHitGroup) == 0x0);
        
        static_assert(sizeof(source2sdk::client::CDestructiblePartsSystemData) == 0x28);
    };
};
