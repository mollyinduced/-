#pragma once
#include "pattern_scan.hpp"

class CGameTraceManager {
public:
    static CGameTraceManager * Obj() {
        //static const auto ptr = (uint64_t *)Scanner::PatternScan("client.dll" , "10 51 82");
        static const auto ptr = (uint64_t *)((uint64_t)GetModuleHandle("client.dll") + 0x1823BA0);
        return (CGameTraceManager *)*ptr;

    }

    //bool __fastcall TraceShape(_QWORD *a1, __int64 a2, unsigned __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
    template<typename Arg1 , typename  Vec3 , typename Arg4 , typename Arg5>
    bool TraceShape(Arg1 &arg1 , const Vec3 &begin , const Vec3 &end , const Arg4 &arg4 , Arg5 &arg5) {
        static_assert(sizeof(Vec3) == 12);

        static const auto traceShape =  Scanner::PatternScan("client.dll" , "48 89 5C 24 20 48 89 4C 24 08 55 56 41 55");
        using FN = bool (__fastcall*)(void *a1, __int64 a2, unsigned __int64 *a3, __int64 a4, __int64 a5, __int64 a6);
        return ((FN)traceShape)(this , (__int64)&arg1 , (unsigned __int64 *)&begin ,  (unsigned __int64 )&end , (__int64)&arg4 , (__int64)&arg5);

    }
};