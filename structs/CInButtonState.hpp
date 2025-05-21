#pragma once
#include <cstdint>


class CInButtonState {
public:
    void * pad;
    uint64_t nValue;
    uint64_t nValueChanged;
    uint64_t nValueScroll;
};
