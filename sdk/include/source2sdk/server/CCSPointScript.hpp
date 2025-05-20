#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CBasePulseGraphInstance.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCSPointScriptEntity;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x100
        // Has VTable
        // 
        // static metadata: MPulseInstanceDomainInfo
        // static metadata: MPulseDomainHookInfo
        // static metadata: MPulseLibraryBindings
        // static metadata: MSourceTSDomain
        // static metadata: MPulseDomainHiddenInTool
        // static metadata: MPulseDomainOptInFeatureTag
        #pragma pack(push, 1)
        class CCSPointScript : public source2sdk::pulse_runtime_lib::CBasePulseGraphInstance
        {
        public:
            source2sdk::server::CCSPointScriptEntity* m_pParent; // 0xf8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPointScript because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPointScript) == 0x100);
    };
};
