#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCSPlayerPawnBase.hpp"

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
        // Size: 0xdf0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarTypeOverride "CCSObserver_ObserverServices m_pObserverServices"
        // static metadata: MNetworkIncludeByName "m_pObserverServices"
        // static metadata: MNetworkVarTypeOverride "CCSObserver_MovementServices m_pMovementServices"
        // static metadata: MNetworkIncludeByName "m_pMovementServices"
        // static metadata: MNetworkVarTypeOverride "CCSObserver_CameraServices m_pCameraServices"
        // static metadata: MNetworkIncludeByName "m_pCameraServices"
        // static metadata: MNetworkVarTypeOverride "CCSObserver_UseServices m_pUseServices"
        // static metadata: MNetworkIncludeByName "m_pUseServices"
        // static metadata: MNetworkVarTypeOverride "CCSObserver_ViewModelServices m_pViewModelServices"
        // static metadata: MNetworkIncludeByName "m_pViewModelServices"
        #pragma pack(push, 1)
        class CCSObserverPawn : public source2sdk::server::CCSPlayerPawnBase
        {
        public:
            uint8_t _pad0dc8[0x28];
            // Datamap fields:
            // CCSObserver_ObserverServices m_pObserverServices; // 0xad8
            // CCSObserver_MovementServices m_pMovementServices; // 0xb00
            // CCSObserver_UseServices m_pUseServices; // 0xae8
            // CCSObserver_ViewModelServices m_pViewModelServices; // 0xcc0
            // CCSObserver_CameraServices m_pCameraServices; // 0xaf8
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CCSObserverPawn) == 0xdf0);
    };
};
