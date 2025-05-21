#pragma once


class IHook {
public:
    virtual ~IHook() = default;
    virtual void enable() = 0;
    virtual void free() = 0;
};