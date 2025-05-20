#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CBasePulseGraphInstance.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CPulseGraphComponentBase;
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
        // Size: 0x158
        // Has VTable
        // 
        // static metadata: MPulseInstanceDomainInfo
        // static metadata: MPulseDomainHookInfo
        // static metadata: MPulseLibraryBindings
        // static metadata: MPulseDomainOptInFeatureTag
        // static metadata: MPulseDomainOptInGameBlackboard
        // static metadata: MPulseDomainOptInValueType
        #pragma pack(push, 1)
        class CPulseGraphInstance_ServerEntity : public source2sdk::pulse_runtime_lib::CBasePulseGraphInstance
        {
        public:
            uint8_t _pad00f8[0x8]; // 0xf8
            source2sdk::server::CPulseGraphComponentBase* m_pComponent; // 0x100            
            uint8_t _pad0108[0x50];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseGraphInstance_ServerEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPulseGraphInstance_ServerEntity) == 0x158);
    };
};
