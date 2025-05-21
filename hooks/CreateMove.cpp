#include "CreateMove.hpp"

CreateMoveHook::Fn_CreateMove CreateMoveHook::oCreateMove;
void * CreateMoveHook::targetFn;

std::vector<CreateMoveHook::Fn_HookFunc> CreateMoveHook::before;
std::vector<CreateMoveHook::Fn_HookFunc> CreateMoveHook::after;