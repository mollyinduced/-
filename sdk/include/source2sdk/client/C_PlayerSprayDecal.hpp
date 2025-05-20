#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerSprayDecalRenderHelper.hpp"
#include "source2sdk/client/C_ModelPointEntity.hpp"

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
        // Size: 0xe38
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "int m_nUniqueID"
        // static metadata: MNetworkVarNames "uint32 m_unAccountID"
        // static metadata: MNetworkVarNames "uint32 m_unTraceID"
        // static metadata: MNetworkVarNames "uint32 m_rtGcTime"
        // static metadata: MNetworkVarNames "Vector m_vecEndPos"
        // static metadata: MNetworkVarNames "Vector m_vecStart"
        // static metadata: MNetworkVarNames "Vector m_vecLeft"
        // static metadata: MNetworkVarNames "Vector m_vecNormal"
        // static metadata: MNetworkVarNames "int m_nPlayer"
        // static metadata: MNetworkVarNames "int m_nEntity"
        // static metadata: MNetworkVarNames "int m_nHitbox"
        // static metadata: MNetworkVarNames "float m_flCreationTime"
        // static metadata: MNetworkVarNames "int m_nTintID"
        // static metadata: MNetworkVarNames "uint8 m_nVersion"
        // static metadata: MNetworkVarNames "uint8 m_ubSignature"
        #pragma pack(push, 1)
        class C_PlayerSprayDecal : public source2sdk::client::C_ModelPointEntity
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nUniqueID; // 0xd28            
            // metadata: MNetworkEnable
            std::uint32_t m_unAccountID; // 0xd2c            
            // metadata: MNetworkEnable
            std::uint32_t m_unTraceID; // 0xd30            
            // metadata: MNetworkEnable
            std::uint32_t m_rtGcTime; // 0xd34            
            // metadata: MNetworkEnable
            Vector m_vecEndPos; // 0xd38            
            // metadata: MNetworkEnable
            Vector m_vecStart; // 0xd44            
            // metadata: MNetworkEnable
            Vector m_vecLeft; // 0xd50            
            // metadata: MNetworkEnable
            Vector m_vecNormal; // 0xd5c            
            // metadata: MNetworkEnable
            std::int32_t m_nPlayer; // 0xd68            
            // metadata: MNetworkEnable
            std::int32_t m_nEntity; // 0xd6c            
            // metadata: MNetworkEnable
            std::int32_t m_nHitbox; // 0xd70            
            // metadata: MNetworkEnable
            float m_flCreationTime; // 0xd74            
            // metadata: MNetworkEnable
            std::int32_t m_nTintID; // 0xd78            
            // metadata: MNetworkEnable
            std::uint8_t m_nVersion; // 0xd7c            
            // metadata: MNetworkEnable
            std::uint8_t m_ubSignature[128]; // 0xd7d            
            uint8_t _pad0dfd[0xb]; // 0xdfd
            source2sdk::client::CPlayerSprayDecalRenderHelper m_SprayRenderHelper; // 0xe08            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PlayerSprayDecal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PlayerSprayDecal) == 0xe38);
    };
};
