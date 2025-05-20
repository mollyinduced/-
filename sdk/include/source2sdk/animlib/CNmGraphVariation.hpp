#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmGraphDataSet.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmGraphDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x58
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmGraphVariation
        {
        public:
            // m_graphDefinition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmGraphDefinition> m_graphDefinition;
            char m_graphDefinition[0x8]; // 0x0            
            source2sdk::animlib::CNmGraphDataSet m_dataSet; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmGraphVariation, m_graphDefinition) == 0x0);
        static_assert(offsetof(source2sdk::animlib::CNmGraphVariation, m_dataSet) == 0x8);
        
        static_assert(sizeof(source2sdk::animlib::CNmGraphVariation) == 0x58);
    };
};
