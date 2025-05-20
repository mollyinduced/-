#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_AttributeContainer.hpp"
#include "source2sdk/client/C_BaseFlex.hpp"
#include "source2sdk/client/C_EconEntity_AttachedModelData_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBaseAnimGraph;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1668
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
        class C_EconEntity : public source2sdk::client::C_BaseFlex
        {
        public:
            uint8_t _pad1120[0x10]; // 0x1120
            float m_flFlexDelayTime; // 0x1130            
            uint8_t _pad1134[0x4]; // 0x1134
            float* m_flFlexDelayedWeight; // 0x1138            
            bool m_bAttributesInitialized; // 0x1140            
            uint8_t _pad1141[0x7]; // 0x1141
            // metadata: MNetworkEnable
            source2sdk::client::C_AttributeContainer m_AttributeManager; // 0x1148            
            // metadata: MNetworkEnable
            std::uint32_t m_OriginalOwnerXuidLow; // 0x15f0            
            // metadata: MNetworkEnable
            std::uint32_t m_OriginalOwnerXuidHigh; // 0x15f4            
            // metadata: MNetworkEnable
            std::int32_t m_nFallbackPaintKit; // 0x15f8            
            // metadata: MNetworkEnable
            std::int32_t m_nFallbackSeed; // 0x15fc            
            // metadata: MNetworkEnable
            float m_flFallbackWear; // 0x1600            
            // metadata: MNetworkEnable
            std::int32_t m_nFallbackStatTrak; // 0x1604            
            bool m_bClientside; // 0x1608            
            bool m_bParticleSystemsCreated; // 0x1609            
            uint8_t _pad160a[0x6]; // 0x160a
            // m_vecAttachedParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecAttachedParticles;
            char m_vecAttachedParticles[0x18]; // 0x1610            
            // m_hViewmodelAttachment has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBaseAnimGraph> m_hViewmodelAttachment;
            char m_hViewmodelAttachment[0x4]; // 0x1628            
            std::int32_t m_iOldTeam; // 0x162c            
            bool m_bAttachmentDirty; // 0x1630            
            uint8_t _pad1631[0x3]; // 0x1631
            std::int32_t m_nUnloadedModelIndex; // 0x1634            
            std::int32_t m_iNumOwnerValidationRetries; // 0x1638            
            uint8_t _pad163c[0xc]; // 0x163c
            // m_hOldProvidee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOldProvidee;
            char m_hOldProvidee[0x4]; // 0x1648            
            uint8_t _pad164c[0x4]; // 0x164c
            // m_vecAttachedModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_EconEntity_AttachedModelData_t> m_vecAttachedModels;
            char m_vecAttachedModels[0x18]; // 0x1650            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EconEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EconEntity) == 0x1668);
    };
};
