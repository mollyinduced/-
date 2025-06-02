#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
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
        // Size: 0xcc0
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CTriggerSndSosOpvar : public source2sdk::server::CBaseTrigger
        {
        public:
            // m_hTouchingPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hTouchingPlayers;
            char m_hTouchingPlayers[0x18]; // 0x960            
            Vector m_flPosition; // 0x978            
            float m_flCenterSize; // 0x984            
            float m_flMinVal; // 0x988            
            float m_flMaxVal; // 0x98c            
            CUtlSymbolLarge m_opvarName; // 0x990            
            CUtlSymbolLarge m_stackName; // 0x998            
            CUtlSymbolLarge m_operatorName; // 0x9a0            
            bool m_bVolIs2D; // 0x9a8            
            char m_opvarNameChar[256]; // 0x9a9            
            char m_stackNameChar[256]; // 0xaa9            
            char m_operatorNameChar[256]; // 0xba9            
            uint8_t _pad0ca9[0x3]; // 0xca9
            Vector m_VecNormPos; // 0xcac            
            float m_flNormCenterSize; // 0xcb8            
            uint8_t _pad0cbc[0x4];
            
            // Datamap fields:
            // void CTriggerSndSosOpvarSndSosTriggerOpvarWaitOver; // 0x0
            // void m_opvarNameChar; // 0x9a9
            // void m_stackNameChar; // 0xaa9
            // void m_operatorNameChar; // 0xba9
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerSndSosOpvar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerSndSosOpvar) == 0xcc0);
    };
};
