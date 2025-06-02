#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: mathlib_extended
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace mathlib_extended
    {
        // Registered alignment: unknown
        // Alignment: 0x2
        // Standard-layout class: true
        // Size: 0x2
        // Has Trivial Destructor
        // 
        // static metadata: MIsBoxedIntegerType
        #pragma pack(push, 1)
        struct FuseFunctionIndex_t
        {
        public:
            std::uint16_t m_Value; // 0x0            
            
            // Static fields:
            static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("FuseFunctionIndex_t")->GetStaticFields()[0]->m_pInstance);};
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::mathlib_extended::FuseFunctionIndex_t, m_Value) == 0x0);
        
        static_assert(sizeof(source2sdk::mathlib_extended::FuseFunctionIndex_t) == 0x2);
    };
};
