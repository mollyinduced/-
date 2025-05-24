#pragma once


class IHook {
public:
    virtual ~IHook() = default;
    virtual void enable() const = 0;
    virtual void free() const = 0;
};