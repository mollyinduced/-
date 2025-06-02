#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0xfd8
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
        // static metadata: MNetworkVarNames "float32 m_flStartTimeInCommentary"
        // static metadata: MNetworkVarNames "string_t m_iszCommentaryFile"
        // static metadata: MNetworkVarNames "string_t m_iszTitle"
        // static metadata: MNetworkVarNames "string_t m_iszSpeakers"
        // static metadata: MNetworkVarNames "int m_iNodeNumber"
        // static metadata: MNetworkVarNames "int m_iNodeNumberMax"
        // static metadata: MNetworkVarNames "bool m_bListenedTo"
        // static metadata: MNetworkVarNames "CHandle< C_BaseEntity> m_hViewPosition"
        #pragma pack(push, 1)
        class C_PointCommentaryNode : public source2sdk::client::CBaseAnimGraph
        {
        public:
            uint8_t _pad0f88[0x8]; // 0xf88
            // metadata: MNetworkEnable
            bool m_bActive; // 0xf90            
            bool m_bWasActive; // 0xf91            
            uint8_t _pad0f92[0x2]; // 0xf92
            source2sdk::entity2::GameTime_t m_flEndTime; // 0xf94            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xf98            
            // metadata: MNetworkEnable
            float m_flStartTimeInCommentary; // 0xf9c            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszCommentaryFile; // 0xfa0            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszTitle; // 0xfa8            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszSpeakers; // 0xfb0            
            // metadata: MNetworkEnable
            std::int32_t m_iNodeNumber; // 0xfb8            
            // metadata: MNetworkEnable
            std::int32_t m_iNodeNumberMax; // 0xfbc            
            // metadata: MNetworkEnable
            bool m_bListenedTo; // 0xfc0            
            uint8_t _pad0fc1[0xf]; // 0xfc1
            // metadata: MNetworkEnable
            // m_hViewPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hViewPosition;
            char m_hViewPosition[0x4]; // 0xfd0            
            bool m_bRestartAfterRestore; // 0xfd4            
            uint8_t _pad0fd5[0x3];
            
            // Datamap fields:
            // void m_sndCommentary; // 0xfc8
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointCommentaryNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointCommentaryNode) == 0xfd8);
    };
};
