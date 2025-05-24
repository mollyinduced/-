#include "CS2.hpp"
#include "PlayerHelper.hpp"
#include "hooks/CreateMove.hpp"
#include "hooks/SilentAimHook.hpp"
#include "features/Aimbot.hpp"

std::list<std::shared_ptr<IHook>> CS2::hooks;
std::shared_ptr<CS2Helper> CS2::cs2_helper;

void CS2::init() {
    cs2_helper = std::make_shared<CS2Helper>();
    
    hooks.push_back(std::make_shared<CreateMoveHook>()->addBefore(AimBot::findTarget));
    hooks.push_back(std::make_shared<SilentAimHook>());

    for (const auto & hook : hooks) {
        hook->enable();
    }



}

void CS2::free() {
    for (const auto & hook : hooks) {
        hook->free();
    }

    cs2_helper = nullptr;
}
