#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CSWeaponBase.hpp"

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
        // Size: 0x1b40
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "int m_zoomLevel"
        // static metadata: MNetworkVarNames "int m_iBurstShotsRemaining"
        // static metadata: MNetworkVarNames "bool m_bNeedsBoltAction"
        #pragma pack(push, 1)
        class C_CSWeaponBaseGun : public source2sdk::client::C_CSWeaponBase
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_zoomLevel; // 0x1b20            
            // metadata: MNetworkEnable
            std::int32_t m_iBurstShotsRemaining; // 0x1b24            
            std::int32_t m_iSilencerBodygroup; // 0x1b28            
            uint8_t _pad1b2c[0xc]; // 0x1b2c
            std::int32_t m_silencedModelIndex; // 0x1b38            
            bool m_inPrecache; // 0x1b3c            
            // metadata: MNetworkEnable
            bool m_bNeedsBoltAction; // 0x1b3d            
            uint8_t _pad1b3e[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSWeaponBaseGun because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSWeaponBaseGun) == 0x1b40);
    };
};
