#include "SilentAimHook.hpp"


void * SilentAimHook::target;
SilentAimHook::Fn_SilentAim SilentAimHook::oSilentAim;
std::shared_ptr<QAngle_t> SilentAimHook::targetAngle;