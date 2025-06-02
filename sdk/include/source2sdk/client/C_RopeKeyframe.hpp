#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/C_RopeKeyframe_CPhysicsDelegate.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
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
        // Size: 0x1110
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkIncludeByUserGroup "Origin"
        // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hParent"
        // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
        // static metadata: MNetworkIncludeByName "m_nMinCPULevel"
        // static metadata: MNetworkIncludeByName "m_nMaxCPULevel"
        // static metadata: MNetworkIncludeByName "m_nMinGPULevel"
        // static metadata: MNetworkIncludeByName "m_nMaxGPULevel"
        // static metadata: MNetworkVarNames "float32 m_flScrollSpeed"
        // static metadata: MNetworkVarNames "uint16 m_RopeFlags"
        // static metadata: MNetworkVarNames "HMaterialStrong m_iRopeMaterialModelIndex"
        // static metadata: MNetworkVarNames "uint8 m_nSegments"
        // static metadata: MNetworkVarNames "CHandle< C_BaseEntity> m_hStartPoint"
        // static metadata: MNetworkVarNames "CHandle< C_BaseEntity> m_hEndPoint"
        // static metadata: MNetworkVarNames "AttachmentHandle_t m_iStartAttachment"
        // static metadata: MNetworkVarNames "AttachmentHandle_t m_iEndAttachment"
        // static metadata: MNetworkVarNames "uint8 m_Subdiv"
        // static metadata: MNetworkVarNames "int16 m_RopeLength"
        // static metadata: MNetworkVarNames "int16 m_Slack"
        // static metadata: MNetworkVarNames "float32 m_TextureScale"
        // static metadata: MNetworkVarNames "uint8 m_fLockedPoints"
        // static metadata: MNetworkVarNames "uint8 m_nChangeCount"
        // static metadata: MNetworkVarNames "float32 m_Width"
        // static metadata: MNetworkVarNames "bool m_bConstrainBetweenEndpoints"
        #pragma pack(push, 1)
        class C_RopeKeyframe : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad0d28[0x8]; // 0xd28
            // m_LinksTouchingSomething has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CBitVec<10> m_LinksTouchingSomething;
            char m_LinksTouchingSomething[0x4]; // 0xd30            
            std::int32_t m_nLinksTouchingSomething; // 0xd34            
            bool m_bApplyWind; // 0xd38            
            uint8_t _pad0d39[0x3]; // 0xd39
            std::int32_t m_fPrevLockedPoints; // 0xd3c            
            std::int32_t m_iForcePointMoveCounter; // 0xd40            
            bool m_bPrevEndPointPos[2]; // 0xd44            
            uint8_t _pad0d46[0x2]; // 0xd46
            Vector m_vPrevEndPointPos[2]; // 0xd48            
            float m_flCurScroll; // 0xd60            
            // metadata: MNetworkEnable
            float m_flScrollSpeed; // 0xd64            
            // metadata: MNetworkEnable
            std::uint16_t m_RopeFlags; // 0xd68            
            uint8_t _pad0d6a[0x6]; // 0xd6a
            // metadata: MNetworkEnable
            // m_iRopeMaterialModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_iRopeMaterialModelIndex;
            char m_iRopeMaterialModelIndex[0x8]; // 0xd70            
            uint8_t _pad0d78[0x270]; // 0xd78
            Vector m_LightValues[10]; // 0xfe8            
            // metadata: MNetworkEnable
            std::uint8_t m_nSegments; // 0x1060            
            uint8_t _pad1061[0x3]; // 0x1061
            // metadata: MNetworkEnable
            // m_hStartPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hStartPoint;
            char m_hStartPoint[0x4]; // 0x1064            
            // metadata: MNetworkEnable
            // m_hEndPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEndPoint;
            char m_hEndPoint[0x4]; // 0x1068            
            // metadata: MNetworkEnable
            source2sdk::modellib::AttachmentHandle_t m_iStartAttachment; // 0x106c            
            // metadata: MNetworkEnable
            source2sdk::modellib::AttachmentHandle_t m_iEndAttachment; // 0x106d            
            // metadata: MNetworkEnable
            std::uint8_t m_Subdiv; // 0x106e            
            uint8_t _pad106f[0x1]; // 0x106f
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RecomputeSprings"
            std::int16_t m_RopeLength; // 0x1070            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RecomputeSprings"
            std::int16_t m_Slack; // 0x1072            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "0.100000"
            // metadata: MNetworkMaxValue "10.000000"
            float m_TextureScale; // 0x1074            
            // metadata: MNetworkEnable
            std::uint8_t m_fLockedPoints; // 0x1078            
            // metadata: MNetworkEnable
            std::uint8_t m_nChangeCount; // 0x1079            
            uint8_t _pad107a[0x2]; // 0x107a
            // metadata: MNetworkEnable
            float m_Width; // 0x107c            
            source2sdk::client::C_RopeKeyframe_CPhysicsDelegate m_PhysicsDelegate; // 0x1080            
            // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
            char m_hMaterial[0x8]; // 0x1090            
            std::int32_t m_TextureHeight; // 0x1098            
            Vector m_vecImpulse; // 0x109c            
            Vector m_vecPreviousImpulse; // 0x10a8            
            float m_flCurrentGustTimer; // 0x10b4            
            float m_flCurrentGustLifetime; // 0x10b8            
            float m_flTimeToNextGust; // 0x10bc            
            Vector m_vWindDir; // 0x10c0            
            Vector m_vColorMod; // 0x10cc            
            Vector m_vCachedEndPointAttachmentPos[2]; // 0x10d8            
            QAngle m_vCachedEndPointAttachmentAngle[2]; // 0x10f0            
            // metadata: MNetworkEnable
            bool m_bConstrainBetweenEndpoints; // 0x1108            
            // start of bitfield block
            uint8_t m_bEndPointAttachmentPositionsDirty: 1;
            uint8_t m_bEndPointAttachmentAnglesDirty: 1;
            uint8_t m_bNewDataThisFrame: 1;
            uint8_t m_bPhysicsInitted: 1;
            // end of bitfield block// 4 bits
            uint8_t _pad110a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_RopeKeyframe because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_RopeKeyframe) == 0x1110);
    };
};
