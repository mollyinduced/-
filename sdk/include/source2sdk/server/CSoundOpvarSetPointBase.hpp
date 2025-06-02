#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x578
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "string_t m_iszStackName"
        // static metadata: MNetworkVarNames "string_t m_iszOperatorName"
        // static metadata: MNetworkVarNames "string_t m_iszOpvarName"
        // static metadata: MNetworkVarNames "int m_iOpvarIndex"
        // static metadata: MNetworkVarNames "bool m_bUseAutoCompare"
        #pragma pack(push, 1)
        class CSoundOpvarSetPointBase : public source2sdk::server::CBaseEntity
        {
        public:
            bool m_bDisabled; // 0x4e0            
            uint8_t _pad04e1[0x3]; // 0x4e1
            CEntityHandle m_hSource; // 0x4e4            
            uint8_t _pad04e8[0x8]; // 0x4e8
            CUtlSymbolLarge m_iszSourceEntityName; // 0x4f0            
            uint8_t _pad04f8[0x50]; // 0x4f8
            Vector m_vLastPosition; // 0x548            
            uint8_t _pad0554[0x4]; // 0x554
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszStackName; // 0x558            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszOperatorName; // 0x560            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszOpvarName; // 0x568            
            // metadata: MNetworkEnable
            std::int32_t m_iOpvarIndex; // 0x570            
            // metadata: MNetworkEnable
            bool m_bUseAutoCompare; // 0x574            
            uint8_t _pad0575[0x3];
            
            // Datamap fields:
            // uint64_t InputSetEventGuid; // 0x0
            // CUtlSymbolLarge InputSetStackName; // 0x0
            // CUtlSymbolLarge InputSetOperatorName; // 0x0
            // CUtlSymbolLarge InputSetOpvarName; // 0x0
            // CUtlSymbolLarge InputSetOpvarIndex; // 0x0
            // CUtlSymbolLarge InputSetSourceEntity; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void CSoundOpvarSetPointBaseSetOpvarThink; // 0x0
            // void m_nGUID; // 0x4e8
            // void m_hOpvarData; // 0x4f8
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetPointBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetPointBase) == 0x578);
    };
};
