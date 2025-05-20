#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/AimCameraOpFixedSettings_t.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xb8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAimCameraUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            source2sdk::animgraphlib::CAnimParamHandle m_hParameterPosition; // 0x68            
            source2sdk::animgraphlib::CAnimParamHandle m_hParameterOrientation; // 0x6a            
            source2sdk::animgraphlib::CAnimParamHandle m_hParameterSpineRotationWeight; // 0x6c            
            source2sdk::animgraphlib::CAnimParamHandle m_hParameterPelvisOffset; // 0x6e            
            source2sdk::animgraphlib::CAnimParamHandle m_hParameterUseIK; // 0x70            
            source2sdk::animgraphlib::CAnimParamHandle m_hParameterCameraOnly; // 0x72            
            source2sdk::animgraphlib::CAnimParamHandle m_hParameterWeaponDepenetrationDistance; // 0x74            
            source2sdk::animgraphlib::CAnimParamHandle m_hParameterWeaponDepenetrationDelta; // 0x76            
            source2sdk::animgraphlib::CAnimParamHandle m_hParameterCameraClearanceDistance; // 0x78            
            uint8_t _pad007a[0x6]; // 0x7a
            source2sdk::animgraphlib::AimCameraOpFixedSettings_t m_opFixedSettings; // 0x80            
            uint8_t _pad00b0[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAimCameraUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CAimCameraUpdateNode) == 0xb8);
    };
};
