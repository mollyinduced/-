#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x4
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmBitFlags
        {
        public:
            std::uint32_t m_flags; // 0x0            
            
            // Static fields:
            static std::uint8_t &Get_MaxFlags(){return *reinterpret_cast<std::uint8_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNmBitFlags")->GetStaticFields()[0]->m_pInstance);};
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmBitFlags, m_flags) == 0x0);
        
        static_assert(sizeof(source2sdk::animlib::CNmBitFlags) == 0x4);
    };
};
