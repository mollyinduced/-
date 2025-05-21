#pragma once
#include "vector.h"

struct Matrix2x4_t
{
public:
    [[nodiscard]] const Vector_t GetOrigin(int nIndex)
    {
        return Vector_t(this[nIndex]._11, this[nIndex]._12, this[nIndex]._13);
    }

    const void SetOrigin(int nIndex, Vector_t vecValue)
    {
        this[nIndex]._11 = vecValue.x;
        this[nIndex]._12 = vecValue.y;
        this[nIndex]._13 = vecValue.z;
    }

    [[nodiscard]] const Vector4D_t GetRotation(int nIndex)
    {
        return Vector4D_t(this[nIndex]._21, this[nIndex]._22, this[nIndex]._23, this[nIndex]._24);
    }

    union
    {
        struct
        {
            float _11, _12, _13, _14;
            float _21, _22, _23, _24;
        };
    };
};