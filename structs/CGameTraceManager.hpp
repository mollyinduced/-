#pragma once
#include "../pattern_scan.hpp"
#include <iostream>
class CGameTraceManager {

    static CGameTraceManager ** getPtr() {
        uint64_t textAddr = 0;
        try {
            textAddr = (uint64_t)Scanner::PatternScan("client.dll" , "48 8B 0D ? ? ? ? 48 8D 45 B0 48 89 44 24 28");
        }catch (const std::exception &e ) {
            std::cout <<"cant find CGameTraceManager" << std::endl;
        }

        const auto codeLen = 7;

        char code[7]{};
        memcpy(code , (void *)textAddr , codeLen);
        int32_t disp32 = *(int32_t*)(code + 3);
        return (CGameTraceManager**)(textAddr + codeLen + disp32);
    }
public:
    static CGameTraceManager * Obj() {
        static CGameTraceManager* ptr{};
        if (!ptr) {
            ptr = *getPtr();
            assert(ptr);
        }


        return ptr;
    }

    //xrefs string "Physics/TraceShape (Client)" unq func
    //bool __fastcall TraceShape(_QWORD *a1, __int64 a2, unsigned __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
    template<typename Ray , typename  Vec3 , typename TraceFilter , typename GameTrace>
    bool TraceShape(Ray &ray , const Vec3 &begin , const Vec3 &end , const TraceFilter &filter , GameTrace &gameTrace) {
        static_assert(sizeof(Vec3) == 12);
        //fix manual map inj
        static void * funcAddr = nullptr;
        try {
            if (!funcAddr)
                funcAddr = Scanner::PatternScan("client.dll" , "48 89 5C 24 20 48 89 4C 24 08 55 56 41 55");
        }catch (const std::exception &e) {
            std::cout <<"cant find TraceShape func" << std::endl;
        }
        using FN = bool (__fastcall*)(void *, __int64 , unsigned __int64 *, __int64 , __int64 , __int64);
        return ((FN)funcAddr)(this , (__int64)&ray , (unsigned __int64 *)&begin ,  (unsigned __int64 )&end , (__int64)&filter , (__int64)&gameTrace);

    }
};