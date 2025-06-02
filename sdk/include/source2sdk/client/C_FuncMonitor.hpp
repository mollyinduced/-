#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_FuncBrush.hpp"
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x11e0
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "CUtlString m_targetCamera"
        // static metadata: MNetworkVarNames "int m_nResolutionEnum"
        // static metadata: MNetworkVarNames "bool m_bRenderShadows"
        // static metadata: MNetworkVarNames "bool m_bUseUniqueColorTarget"
        // static metadata: MNetworkVarNames "CUtlString m_brushModelName"
        // static metadata: MNetworkVarNames "EHANDLE m_hTargetCamera"
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "bool m_bDraw3DSkybox"
        #pragma pack(push, 1)
        class C_FuncMonitor : public source2sdk::client::C_FuncBrush
        {
        public:
            // metadata: MNetworkEnable
            CUtlString m_targetCamera; // 0xd28            
            // metadata: MNetworkEnable
            std::int32_t m_nResolutionEnum; // 0xd30            
            // metadata: MNetworkEnable
            bool m_bRenderShadows; // 0xd34            
            // metadata: MNetworkEnable
            bool m_bUseUniqueColorTarget; // 0xd35            
            uint8_t _pad0d36[0x2]; // 0xd36
            // metadata: MNetworkEnable
            CUtlString m_brushModelName; // 0xd38            
            // metadata: MNetworkEnable
            // m_hTargetCamera has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTargetCamera;
            char m_hTargetCamera[0x4]; // 0xd40            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0xd44            
            // metadata: MNetworkEnable
            bool m_bDraw3DSkybox; // 0xd45            
            uint8_t _pad0d46[0x49a];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_FuncMonitor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_FuncMonitor) == 0x11e0);
    };
};
