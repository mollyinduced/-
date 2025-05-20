#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAttributeContainer.hpp"
#include "source2sdk/server/CBaseFlex.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd30
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "CAttributeContainer m_AttributeManager"
        // static metadata: MNetworkVarNames "uint32 m_OriginalOwnerXuidLow"
        // static metadata: MNetworkVarNames "uint32 m_OriginalOwnerXuidHigh"
        // static metadata: MNetworkVarNames "int m_nFallbackPaintKit"
        // static metadata: MNetworkVarNames "int m_nFallbackSeed"
        // static metadata: MNetworkVarNames "float m_flFallbackWear"
        // static metadata: MNetworkVarNames "int m_nFallbackStatTrak"
        #pragma pack(push, 1)
        class CEconEntity : public source2sdk::server::CBaseFlex
        {
        public:
            uint8_t _pad0a38[0x10]; // 0xa38
            // metadata: MNetworkEnable
            source2sdk::server::CAttributeContainer m_AttributeManager; // 0xa48            
            // metadata: MNetworkEnable
            std::uint32_t m_OriginalOwnerXuidLow; // 0xd10            
            // metadata: MNetworkEnable
            std::uint32_t m_OriginalOwnerXuidHigh; // 0xd14            
            // metadata: MNetworkEnable
            std::int32_t m_nFallbackPaintKit; // 0xd18            
            // metadata: MNetworkEnable
            std::int32_t m_nFallbackSeed; // 0xd1c            
            // metadata: MNetworkEnable
            float m_flFallbackWear; // 0xd20            
            // metadata: MNetworkEnable
            std::int32_t m_nFallbackStatTrak; // 0xd24            
            // m_hOldProvidee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOldProvidee;
            char m_hOldProvidee[0x4]; // 0xd28            
            std::int32_t m_iOldOwnerClass; // 0xd2c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEconEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEconEntity) == 0xd30);
    };
};
