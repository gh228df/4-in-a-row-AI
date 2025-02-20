#include <chrono>
#include <vector>
#include <thread>
#include <fstream>
#include <string.h>
#if defined(__x86_64__)
#include <xmmintrin.h>
#include <malloc.h>
#else
#include <ankerl/unordered_dense.h>
#endif
using namespace std;
using namespace chrono;

bool cw(uint64_t curcheckw, int moveindex, uint32_t left)
{
    switch (moveindex)
    {
    case 0:
        switch (left)
        {
        case 6:
            if ((curcheckw & 14LL) == 0)
                return true;
            if ((curcheckw & 16843008LL) == 0)
                return true;
            return false;
        case 5:
            if ((curcheckw & 1792LL) == 0)
                return true;
            if ((curcheckw & 2155905024LL) == 0)
                return true;
            return false;
        case 4:
            if ((curcheckw & 229376LL) == 0)
                return true;
            if ((curcheckw & 275955843072LL) == 0)
                return true;
            return false;
        case 3:
            if ((curcheckw & 29360128LL) == 0)
                return true;
            if ((curcheckw & 16513LL) == 0)
                return true;
            if ((curcheckw & 33288LL) == 0)
                return true;
            return false;
        case 2:
            if ((curcheckw & 3758096384LL) == 0)
                return true;
            if ((curcheckw & 2113664LL) == 0)
                return true;
            if ((curcheckw & 4260864LL) == 0)
                return true;
            return false;
        case 1:
            if ((curcheckw & 481036337152LL) == 0)
                return true;
            if ((curcheckw & 270548992LL) == 0)
                return true;
            if ((curcheckw & 545390592LL) == 0)
                return true;
            return false;
        }
    case 1:
        switch (left)
        {
        case 6:
            if ((curcheckw & 13LL) == 0)
                return true;
            if ((curcheckw & 28LL) == 0)
                return true;
            if ((curcheckw & 33686016LL) == 0)
                return true;
            return false;
        case 5:
            if ((curcheckw & 1664LL) == 0)
                return true;
            if ((curcheckw & 3584LL) == 0)
                return true;
            if ((curcheckw & 16842753LL) == 0)
                return true;
            if ((curcheckw & 4311810048LL) == 0)
                return true;
            return false;
        case 4:
            if ((curcheckw & 212992LL) == 0)
                return true;
            if ((curcheckw & 458752LL) == 0)
                return true;
            if ((curcheckw & 2155872384LL) == 0)
                return true;
            if ((curcheckw & 551911686144LL) == 0)
                return true;
            if ((curcheckw & 2097672LL) == 0)
                return true;
            return false;
        case 3:
            if ((curcheckw & 27262976LL) == 0)
                return true;
            if ((curcheckw & 58720256LL) == 0)
                return true;
            if ((curcheckw & 33026LL) == 0)
                return true;
            if ((curcheckw & 275951665152LL) == 0)
                return true;
            if ((curcheckw & 66576LL) == 0)
                return true;
            if ((curcheckw & 268502016LL) == 0)
                return true;
            return false;
        case 2:
            if ((curcheckw & 3489660928LL) == 0)
                return true;
            if ((curcheckw & 7516192768LL) == 0)
                return true;
            if ((curcheckw & 4227328LL) == 0)
                return true;
            if ((curcheckw & 8521728LL) == 0)
                return true;
            if ((curcheckw & 34368258048LL) == 0)
                return true;
            return false;
        case 1:
            if ((curcheckw & 446676598784LL) == 0)
                return true;
            if ((curcheckw & 962072674304LL) == 0)
                return true;
            if ((curcheckw & 541097984LL) == 0)
                return true;
            if ((curcheckw & 1090781184LL) == 0)
                return true;
            return false;
        }
    case 2:
        switch (left)
        {
        case 6:
            if ((curcheckw & 11LL) == 0)
                return true;
            if ((curcheckw & 26LL) == 0)
                return true;
            if ((curcheckw & 56LL) == 0)
                return true;
            if ((curcheckw & 67372032LL) == 0)
                return true;
            return false;
        case 5:
            if ((curcheckw & 1408LL) == 0)
                return true;
            if ((curcheckw & 3328LL) == 0)
                return true;
            if ((curcheckw & 7168LL) == 0)
                return true;
            if ((curcheckw & 33685506LL) == 0)
                return true;
            if ((curcheckw & 8623620096LL) == 0)
                return true;
            if ((curcheckw & 2129928LL) == 0)
                return true;
            return false;
        case 4:
            if ((curcheckw & 180224LL) == 0)
                return true;
            if ((curcheckw & 425984LL) == 0)
                return true;
            if ((curcheckw & 917504LL) == 0)
                return true;
            if ((curcheckw & 16777473LL) == 0)
                return true;
            if ((curcheckw & 4311744768LL) == 0)
                return true;
            if ((curcheckw & 1103823372288LL) == 0)
                return true;
            if ((curcheckw & 4195344LL) == 0)
                return true;
            if ((curcheckw & 272630784LL) == 0)
                return true;
            return false;
        case 3:
            if ((curcheckw & 23068672LL) == 0)
                return true;
            if ((curcheckw & 54525952LL) == 0)
                return true;
            if ((curcheckw & 117440512LL) == 0)
                return true;
            if ((curcheckw & 66052LL) == 0)
                return true;
            if ((curcheckw & 2147516544LL) == 0)
                return true;
            if ((curcheckw & 551903330304LL) == 0)
                return true;
            if ((curcheckw & 133152LL) == 0)
                return true;
            if ((curcheckw & 537004032LL) == 0)
                return true;
            if ((curcheckw & 34896740352LL) == 0)
                return true;
            return false;
        case 2:
            if ((curcheckw & 2952790016LL) == 0)
                return true;
            if ((curcheckw & 6979321856LL) == 0)
                return true;
            if ((curcheckw & 15032385536LL) == 0)
                return true;
            if ((curcheckw & 8454656LL) == 0)
                return true;
            if ((curcheckw & 274882117632LL) == 0)
                return true;
            if ((curcheckw & 17043456LL) == 0)
                return true;
            if ((curcheckw & 68736516096LL) == 0)
                return true;
            return false;
        case 1:
            if ((curcheckw & 377957122048LL) == 0)
                return true;
            if ((curcheckw & 893353197568LL) == 0)
                return true;
            if ((curcheckw & 1924145348608LL) == 0)
                return true;
            if ((curcheckw & 1082195968LL) == 0)
                return true;
            if ((curcheckw & 2181562368LL) == 0)
                return true;
            return false;
        }
    case 3:
        switch (left)
        {
        case 6:
            if ((curcheckw & 7LL) == 0)
                return true;
            if ((curcheckw & 22LL) == 0)
                return true;
            if ((curcheckw & 52LL) == 0)
                return true;
            if ((curcheckw & 112LL) == 0)
                return true;
            if ((curcheckw & 134744064LL) == 0)
                return true;
            if ((curcheckw & 2130432LL) == 0)
                return true;
            return false;
        case 5:
            if ((curcheckw & 896LL) == 0)
                return true;
            if ((curcheckw & 2816LL) == 0)
                return true;
            if ((curcheckw & 6656LL) == 0)
                return true;
            if ((curcheckw & 14336LL) == 0)
                return true;
            if ((curcheckw & 67371012LL) == 0)
                return true;
            if ((curcheckw & 17247240192LL) == 0)
                return true;
            if ((curcheckw & 4259856LL) == 0)
                return true;
            if ((curcheckw & 272695296LL) == 0)
                return true;
            return false;
        case 4:
            if ((curcheckw & 114688LL) == 0)
                return true;
            if ((curcheckw & 360448LL) == 0)
                return true;
            if ((curcheckw & 851968LL) == 0)
                return true;
            if ((curcheckw & 1835008LL) == 0)
                return true;
            if ((curcheckw & 33554946LL) == 0)
                return true;
            if ((curcheckw & 8623489536LL) == 0)
                return true;
            if ((curcheckw & 2207646744576LL) == 0)
                return true;
            if ((curcheckw & 8390688LL) == 0)
                return true;
            if ((curcheckw & 545261568LL) == 0)
                return true;
            if ((curcheckw & 34904997888LL) == 0)
                return true;
            return false;
        case 3:
            if ((curcheckw & 14680064LL) == 0)
                return true;
            if ((curcheckw & 46137344LL) == 0)
                return true;
            if ((curcheckw & 109051904LL) == 0)
                return true;
            if ((curcheckw & 234881024LL) == 0)
                return true;
            if ((curcheckw & 132104LL) == 0)
                return true;
            if ((curcheckw & 65793LL) == 0)
                return true;
            if ((curcheckw & 4295033088LL) == 0)
                return true;
            if ((curcheckw & 1103806660608LL) == 0)
                return true;
            if ((curcheckw & 266304LL) == 0)
                return true;
            if ((curcheckw & 1074008064LL) == 0)
                return true;
            if ((curcheckw & 69793480704LL) == 0)
                return true;
            return false;
        case 2:
            if ((curcheckw & 1879048192LL) == 0)
                return true;
            if ((curcheckw & 5905580032LL) == 0)
                return true;
            if ((curcheckw & 13958643712LL) == 0)
                return true;
            if ((curcheckw & 30064771072LL) == 0)
                return true;
            if ((curcheckw & 16909312LL) == 0)
                return true;
            if ((curcheckw & 8421504LL) == 0)
                return true;
            if ((curcheckw & 549764235264LL) == 0)
                return true;
            if ((curcheckw & 34086912LL) == 0)
                return true;
            if ((curcheckw & 137473032192LL) == 0)
                return true;
            return false;
        case 1:
            if ((curcheckw & 240518168576LL) == 0)
                return true;
            if ((curcheckw & 755914244096LL) == 0)
                return true;
            if ((curcheckw & 1786706395136LL) == 0)
                return true;
            if ((curcheckw & 3848290697216LL) == 0)
                return true;
            if ((curcheckw & 2164391936LL) == 0)
                return true;
            if ((curcheckw & 1077952512LL) == 0)
                return true;
            if ((curcheckw & 4363124736LL) == 0)
                return true;
            return false;
        }
    case 4:
        switch (left)
        {
        case 6:
            if ((curcheckw & 14LL) == 0)
                return true;
            if ((curcheckw & 44LL) == 0)
                return true;
            if ((curcheckw & 104LL) == 0)
                return true;
            if ((curcheckw & 4260864LL) == 0)
                return true;
            return false;
        case 5:
            if ((curcheckw & 1792LL) == 0)
                return true;
            if ((curcheckw & 5632LL) == 0)
                return true;
            if ((curcheckw & 13312LL) == 0)
                return true;
            if ((curcheckw & 134742024LL) == 0)
                return true;
            if ((curcheckw & 8519712LL) == 0)
                return true;
            if ((curcheckw & 545390592LL) == 0)
                return true;
            return false;
        case 4:
            if ((curcheckw & 229376LL) == 0)
                return true;
            if ((curcheckw & 720896LL) == 0)
                return true;
            if ((curcheckw & 1703936LL) == 0)
                return true;
            if ((curcheckw & 67109892LL) == 0)
                return true;
            if ((curcheckw & 17246979072LL) == 0)
                return true;
            if ((curcheckw & 16781376LL) == 0)
                return true;
            if ((curcheckw & 1090523136LL) == 0)
                return true;
            if ((curcheckw & 69809995776LL) == 0)
                return true;
            return false;
        case 3:
            if ((curcheckw & 29360128LL) == 0)
                return true;
            if ((curcheckw & 92274688LL) == 0)
                return true;
            if ((curcheckw & 218103808LL) == 0)
                return true;
            if ((curcheckw & 264208LL) == 0)
                return true;
            if ((curcheckw & 131586LL) == 0)
                return true;
            if ((curcheckw & 8590066176LL) == 0)
                return true;
            if ((curcheckw & 2207613321216LL) == 0)
                return true;
            if ((curcheckw & 2148016128LL) == 0)
                return true;
            if ((curcheckw & 139586961408LL) == 0)
                return true;
            return false;
        case 2:
            if ((curcheckw & 3758096384LL) == 0)
                return true;
            if ((curcheckw & 11811160064LL) == 0)
                return true;
            if ((curcheckw & 27917287424LL) == 0)
                return true;
            if ((curcheckw & 33818624LL) == 0)
                return true;
            if ((curcheckw & 16843008LL) == 0)
                return true;
            if ((curcheckw & 1099528470528LL) == 0)
                return true;
            if ((curcheckw & 274946064384LL) == 0)
                return true;
            return false;
        case 1:
            if ((curcheckw & 481036337152LL) == 0)
                return true;
            if ((curcheckw & 1511828488192LL) == 0)
                return true;
            if ((curcheckw & 3573412790272LL) == 0)
                return true;
            if ((curcheckw & 4328783872LL) == 0)
                return true;
            if ((curcheckw & 2155905024LL) == 0)
                return true;
            return false;
        }
    case 5:
        switch (left)
        {
        case 6:
            if ((curcheckw & 28LL) == 0)
                return true;
            if ((curcheckw & 88LL) == 0)
                return true;
            if ((curcheckw & 8521728LL) == 0)
                return true;
            return false;
        case 5:
            if ((curcheckw & 3584LL) == 0)
                return true;
            if ((curcheckw & 11264LL) == 0)
                return true;
            if ((curcheckw & 17039424LL) == 0)
                return true;
            if ((curcheckw & 1090781184LL) == 0)
                return true;
            return false;
        case 4:
            if ((curcheckw & 458752LL) == 0)
                return true;
            if ((curcheckw & 1441792LL) == 0)
                return true;
            if ((curcheckw & 134219784LL) == 0)
                return true;
            if ((curcheckw & 2181046272LL) == 0)
                return true;
            if ((curcheckw & 139619991552LL) == 0)
                return true;
            return false;
        case 3:
            if ((curcheckw & 58720256LL) == 0)
                return true;
            if ((curcheckw & 184549376LL) == 0)
                return true;
            if ((curcheckw & 528416LL) == 0)
                return true;
            if ((curcheckw & 263172LL) == 0)
                return true;
            if ((curcheckw & 17180132352LL) == 0)
                return true;
            if ((curcheckw & 279173922816LL) == 0)
                return true;
            return false;
        case 2:
            if ((curcheckw & 7516192768LL) == 0)
                return true;
            if ((curcheckw & 23622320128LL) == 0)
                return true;
            if ((curcheckw & 67637248LL) == 0)
                return true;
            if ((curcheckw & 33686016LL) == 0)
                return true;
            if ((curcheckw & 2199056941056LL) == 0)
                return true;
            return false;
        case 1:
            if ((curcheckw & 962072674304LL) == 0)
                return true;
            if ((curcheckw & 3023656976384LL) == 0)
                return true;
            if ((curcheckw & 8657567744LL) == 0)
                return true;
            if ((curcheckw & 4311810048LL) == 0)
                return true;
            return false;
        }
    case 6:
        switch (left)
        {
        case 6:
            if ((curcheckw & 56LL) == 0)
                return true;
            if ((curcheckw & 17043456LL) == 0)
                return true;
            return false;
        case 5:
            if ((curcheckw & 7168LL) == 0)
                return true;
            if ((curcheckw & 2181562368LL) == 0)
                return true;
            return false;
        case 4:
            if ((curcheckw & 917504LL) == 0)
                return true;
            if ((curcheckw & 279239983104LL) == 0)
                return true;
            return false;
        case 3:
            if ((curcheckw & 117440512LL) == 0)
                return true;
            if ((curcheckw & 1056832LL) == 0)
                return true;
            if ((curcheckw & 526344LL) == 0)
                return true;
            return false;
        case 2:
            if ((curcheckw & 15032385536LL) == 0)
                return true;
            if ((curcheckw & 135274496LL) == 0)
                return true;
            if ((curcheckw & 67372032LL) == 0)
                return true;
            return false;
        case 1:
            if ((curcheckw & 1924145348608LL) == 0)
                return true;
            if ((curcheckw & 17315135488LL) == 0)
                return true;
            if ((curcheckw & 8623620096LL) == 0)
                return true;
            return false;
        }
    }
}

inline int scoremove(uint64_t curcheckw, uint32_t moveindex, uint32_t left)
{
    int result = 0;
    switch (left)
    {
    case 6:
        switch (moveindex)
        {
        case 0:
            if ((curcheckw & 16842752ULL) == 0)
                result++;
            if ((curcheckw & 16777472ULL) == 0)
                result++;
            return result;
        case 1:
            if ((curcheckw & 33685504ULL) == 0)
                result++;
            if ((curcheckw & 33554944ULL) == 0)
                result++;
            return result;
        case 2:
            if ((curcheckw & 67371008ULL) == 0)
                result++;
            if ((curcheckw & 67109888ULL) == 0)
                result++;
            return result;
        case 3:
            if ((curcheckw & 134742016ULL) == 0)
                result++;
            if ((curcheckw & 2129920ULL) == 0)
                result++;
            if ((curcheckw & 134219776ULL) == 0)
                result++;
            if ((curcheckw & 2097664ULL) == 0)
                result++;
            return result;
        case 4:
            if ((curcheckw & 4259840ULL) == 0)
                result++;
            if ((curcheckw & 4195328ULL) == 0)
                result++;
            return result;
        case 5:
            if ((curcheckw & 8519680ULL) == 0)
                result++;
            if ((curcheckw & 8390656ULL) == 0)
                result++;
            return result;
        case 6:
            if ((curcheckw & 17039360ULL) == 0)
                result++;
            if ((curcheckw & 16781312ULL) == 0)
                result++;
            return result;
        }
    case 5:
        switch (moveindex)
        {
        case 0:
            if ((curcheckw & 1536ULL) == 0)
                result++;
            if ((curcheckw & 2155872256ULL) == 0)
                result++;
            if ((curcheckw & 1280ULL) == 0)
                result++;
            if ((curcheckw & 2147516416ULL) == 0)
                result++;
            return result;
        case 1:
            if ((curcheckw & 3072ULL) == 0)
                result++;
            if ((curcheckw & 4311744512ULL) == 0)
                result++;
            if ((curcheckw & 1152ULL) == 0)
                result++;
            if ((curcheckw & 16777217ULL) == 0)
                result++;
            if ((curcheckw & 2560ULL) == 0)
                result++;
            if ((curcheckw & 4295032832ULL) == 0)
                result++;
            return result;
        case 2:
            if ((curcheckw & 6144ULL) == 0)
                result++;
            if ((curcheckw & 8623489024ULL) == 0)
                result++;
            if ((curcheckw & 1152ULL) == 0)
                result++;
            if ((curcheckw & 2304ULL) == 0)
                result++;
            if ((curcheckw & 2097160ULL) == 0)
                result++;
            if ((curcheckw & 33554434ULL) == 0)
                result++;
            if ((curcheckw & 5120ULL) == 0)
                result++;
            if ((curcheckw & 8590065664ULL) == 0)
                result++;
            return result;
        case 3:
            if ((curcheckw & 12288ULL) == 0)
                result++;
            if ((curcheckw & 17246978048ULL) == 0)
                result++;
            if ((curcheckw & 272629760ULL) == 0)
                result++;
            if ((curcheckw & 384ULL) == 0)
                result++;
            if ((curcheckw & 2304ULL) == 0)
                result++;
            if ((curcheckw & 4608ULL) == 0)
                result++;
            if ((curcheckw & 4194320ULL) == 0)
                result++;
            if ((curcheckw & 67108868ULL) == 0)
                result++;
            if ((curcheckw & 10240ULL) == 0)
                result++;
            if ((curcheckw & 640ULL) == 0)
                result++;
            if ((curcheckw & 17180131328ULL) == 0)
                result++;
            if ((curcheckw & 268500992ULL) == 0)
                result++;
            return result;
        case 4:
            if ((curcheckw & 545259520ULL) == 0)
                result++;
            if ((curcheckw & 768ULL) == 0)
                result++;
            if ((curcheckw & 4608ULL) == 0)
                result++;
            if ((curcheckw & 9216ULL) == 0)
                result++;
            if ((curcheckw & 8388640ULL) == 0)
                result++;
            if ((curcheckw & 134217736ULL) == 0)
                result++;
            if ((curcheckw & 1280ULL) == 0)
                result++;
            if ((curcheckw & 537001984ULL) == 0)
                result++;
            return result;
        case 5:
            if ((curcheckw & 1090519040ULL) == 0)
                result++;
            if ((curcheckw & 1536ULL) == 0)
                result++;
            if ((curcheckw & 9216ULL) == 0)
                result++;
            if ((curcheckw & 16777280ULL) == 0)
                result++;
            if ((curcheckw & 2560ULL) == 0)
                result++;
            if ((curcheckw & 1074003968ULL) == 0)
                result++;
            return result;
        case 6:
            if ((curcheckw & 2181038080ULL) == 0)
                result++;
            if ((curcheckw & 3072ULL) == 0)
                result++;
            if ((curcheckw & 5120ULL) == 0)
                result++;
            if ((curcheckw & 2148007936ULL) == 0)
                result++;
            return result;
        }
    case 4:
        switch (moveindex)
        {
        case 0:
            if ((curcheckw & 196608ULL) == 0)
                result++;
            if ((curcheckw & 275951648768ULL) == 0)
                result++;
            if ((curcheckw & 163840ULL) == 0)
                result++;
            if ((curcheckw & 274882101248ULL) == 0)
                result++;
            return result;
        case 1:
            if ((curcheckw & 393216ULL) == 0)
                result++;
            if ((curcheckw & 551903297536ULL) == 0)
                result++;
            if ((curcheckw & 147456ULL) == 0)
                result++;
            if ((curcheckw & 2097160ULL) == 0)
                result++;
            if ((curcheckw & 2147483776ULL) == 0)
                result++;
            if ((curcheckw & 327680ULL) == 0)
                result++;
            if ((curcheckw & 549764202496ULL) == 0)
                result++;
            return result;
        case 2:
            if ((curcheckw & 786432ULL) == 0)
                result++;
            if ((curcheckw & 1103806595072ULL) == 0)
                result++;
            if ((curcheckw & 147456ULL) == 0)
                result++;
            if ((curcheckw & 294912ULL) == 0)
                result++;
            if ((curcheckw & 16777217ULL) == 0)
                result++;
            if ((curcheckw & 4194320ULL) == 0)
                result++;
            if ((curcheckw & 268436480ULL) == 0)
                result++;
            if ((curcheckw & 4294967552ULL) == 0)
                result++;
            if ((curcheckw & 655360ULL) == 0)
                result++;
            if ((curcheckw & 1099528404992ULL) == 0)
                result++;
            return result;
        case 3:
            if ((curcheckw & 1572864ULL) == 0)
                result++;
            if ((curcheckw & 2207613190144ULL) == 0)
                result++;
            if ((curcheckw & 34896609280ULL) == 0)
                result++;
            if ((curcheckw & 49152ULL) == 0)
                result++;
            if ((curcheckw & 294912ULL) == 0)
                result++;
            if ((curcheckw & 589824ULL) == 0)
                result++;
            if ((curcheckw & 33554434ULL) == 0)
                result++;
            if ((curcheckw & 8388640ULL) == 0)
                result++;
            if ((curcheckw & 536872960ULL) == 0)
                result++;
            if ((curcheckw & 8589935104ULL) == 0)
                result++;
            if ((curcheckw & 1310720ULL) == 0)
                result++;
            if ((curcheckw & 81920ULL) == 0)
                result++;
            if ((curcheckw & 2199056809984ULL) == 0)
                result++;
            if ((curcheckw & 34368126976ULL) == 0)
                result++;
            return result;
        case 4:
            if ((curcheckw & 69793218560ULL) == 0)
                result++;
            if ((curcheckw & 98304ULL) == 0)
                result++;
            if ((curcheckw & 589824ULL) == 0)
                result++;
            if ((curcheckw & 1179648ULL) == 0)
                result++;
            if ((curcheckw & 67108868ULL) == 0)
                result++;
            if ((curcheckw & 16777280ULL) == 0)
                result++;
            if ((curcheckw & 1073745920ULL) == 0)
                result++;
            if ((curcheckw & 17179870208ULL) == 0)
                result++;
            if ((curcheckw & 163840ULL) == 0)
                result++;
            if ((curcheckw & 68736253952ULL) == 0)
                result++;
            return result;
        case 5:
            if ((curcheckw & 139586437120ULL) == 0)
                result++;
            if ((curcheckw & 196608ULL) == 0)
                result++;
            if ((curcheckw & 1179648ULL) == 0)
                result++;
            if ((curcheckw & 134217736ULL) == 0)
                result++;
            if ((curcheckw & 2147491840ULL) == 0)
                result++;
            if ((curcheckw & 327680ULL) == 0)
                result++;
            if ((curcheckw & 137472507904ULL) == 0)
                result++;
            return result;
        case 6:
            if ((curcheckw & 279172874240ULL) == 0)
                result++;
            if ((curcheckw & 393216ULL) == 0)
                result++;
            if ((curcheckw & 655360ULL) == 0)
                result++;
            if ((curcheckw & 274945015808ULL) == 0)
                result++;
            return result;
        }
    case 3:
        switch (moveindex)
        {
        case 0:
            if ((curcheckw & 25165824ULL) == 0)
                result++;
            if ((curcheckw & 520ULL) == 0)
                result++;
            if ((curcheckw & 20971520ULL) == 0)
                result++;
            if ((curcheckw & 32776ULL) == 0)
                result++;
            return result;
        case 1:
            if ((curcheckw & 50331648ULL) == 0)
                result++;
            if ((curcheckw & 1040ULL) == 0)
                result++;
            if ((curcheckw & 18874368ULL) == 0)
                result++;
            if ((curcheckw & 268436480ULL) == 0)
                result++;
            if ((curcheckw & 274877923328ULL) == 0)
                result++;
            if ((curcheckw & 41943040ULL) == 0)
                result++;
            if ((curcheckw & 65552ULL) == 0)
                result++;
            return result;
        case 2:
            if ((curcheckw & 100663296ULL) == 0)
                result++;
            if ((curcheckw & 2080ULL) == 0)
                result++;
            if ((curcheckw & 18874368ULL) == 0)
                result++;
            if ((curcheckw & 37748736ULL) == 0)
                result++;
            if ((curcheckw & 2147483776ULL) == 0)
                result++;
            if ((curcheckw & 536872960ULL) == 0)
                result++;
            if ((curcheckw & 34359869440ULL) == 0)
                result++;
            if ((curcheckw & 549755846656ULL) == 0)
                result++;
            if ((curcheckw & 83886080ULL) == 0)
                result++;
            if ((curcheckw & 131104ULL) == 0)
                result++;
            return result;
        case 3:
            if ((curcheckw & 201326592ULL) == 0)
                result++;
            if ((curcheckw & 6291456ULL) == 0)
                result++;
            if ((curcheckw & 4160ULL) == 0)
                result++;
            if ((curcheckw & 257ULL) == 0)
                result++;
            if ((curcheckw & 37748736ULL) == 0)
                result++;
            if ((curcheckw & 75497472ULL) == 0)
                result++;
            if ((curcheckw & 4294967552ULL) == 0)
                result++;
            if ((curcheckw & 1073745920ULL) == 0)
                result++;
            if ((curcheckw & 68719738880ULL) == 0)
                result++;
            if ((curcheckw & 1099511693312ULL) == 0)
                result++;
            if ((curcheckw & 167772160ULL) == 0)
                result++;
            if ((curcheckw & 10485760ULL) == 0)
                result++;
            if ((curcheckw & 262208ULL) == 0)
                result++;
            if ((curcheckw & 65537ULL) == 0)
                result++;
            return result;
        case 4:
            if ((curcheckw & 12582912ULL) == 0)
                result++;
            if ((curcheckw & 514ULL) == 0)
                result++;
            if ((curcheckw & 75497472ULL) == 0)
                result++;
            if ((curcheckw & 150994944ULL) == 0)
                result++;
            if ((curcheckw & 8589935104ULL) == 0)
                result++;
            if ((curcheckw & 2147491840ULL) == 0)
                result++;
            if ((curcheckw & 137439477760ULL) == 0)
                result++;
            if ((curcheckw & 2199023386624ULL) == 0)
                result++;
            if ((curcheckw & 20971520ULL) == 0)
                result++;
            if ((curcheckw & 131074ULL) == 0)
                result++;
            return result;
        case 5:
            if ((curcheckw & 25165824ULL) == 0)
                result++;
            if ((curcheckw & 1028ULL) == 0)
                result++;
            if ((curcheckw & 150994944ULL) == 0)
                result++;
            if ((curcheckw & 17179870208ULL) == 0)
                result++;
            if ((curcheckw & 274878955520ULL) == 0)
                result++;
            if ((curcheckw & 41943040ULL) == 0)
                result++;
            if ((curcheckw & 262148ULL) == 0)
                result++;
            return result;
        case 6:
            if ((curcheckw & 50331648ULL) == 0)
                result++;
            if ((curcheckw & 2056ULL) == 0)
                result++;
            if ((curcheckw & 83886080ULL) == 0)
                result++;
            if ((curcheckw & 524296ULL) == 0)
                result++;
            return result;
        }
    case 2:
        switch (moveindex)
        {
        case 0:
            if ((curcheckw & 3221225472ULL) == 0)
                result++;
            if ((curcheckw & 66560ULL) == 0)
                result++;
            if ((curcheckw & 2684354560ULL) == 0)
                result++;
            if ((curcheckw & 4195328ULL) == 0)
                result++;
            return result;
        case 1:
            if ((curcheckw & 6442450944ULL) == 0)
                result++;
            if ((curcheckw & 133120ULL) == 0)
                result++;
            if ((curcheckw & 2415919104ULL) == 0)
                result++;
            if ((curcheckw & 34359869440ULL) == 0)
                result++;
            if ((curcheckw & 5368709120ULL) == 0)
                result++;
            if ((curcheckw & 8390656ULL) == 0)
                result++;
            return result;
        case 2:
            if ((curcheckw & 12884901888ULL) == 0)
                result++;
            if ((curcheckw & 266240ULL) == 0)
                result++;
            if ((curcheckw & 2415919104ULL) == 0)
                result++;
            if ((curcheckw & 4831838208ULL) == 0)
                result++;
            if ((curcheckw & 274877923328ULL) == 0)
                result++;
            if ((curcheckw & 68719738880ULL) == 0)
                result++;
            if ((curcheckw & 10737418240ULL) == 0)
                result++;
            if ((curcheckw & 16781312ULL) == 0)
                result++;
            return result;
        case 3:
            if ((curcheckw & 25769803776ULL) == 0)
                result++;
            if ((curcheckw & 805306368ULL) == 0)
                result++;
            if ((curcheckw & 532480ULL) == 0)
                result++;
            if ((curcheckw & 32896ULL) == 0)
                result++;
            if ((curcheckw & 4831838208ULL) == 0)
                result++;
            if ((curcheckw & 9663676416ULL) == 0)
                result++;
            if ((curcheckw & 549755846656ULL) == 0)
                result++;
            if ((curcheckw & 137439477760ULL) == 0)
                result++;
            if ((curcheckw & 21474836480ULL) == 0)
                result++;
            if ((curcheckw & 1342177280ULL) == 0)
                result++;
            if ((curcheckw & 33562624ULL) == 0)
                result++;
            if ((curcheckw & 8388736ULL) == 0)
                result++;
            return result;
        case 4:
            if ((curcheckw & 1610612736ULL) == 0)
                result++;
            if ((curcheckw & 65792ULL) == 0)
                result++;
            if ((curcheckw & 9663676416ULL) == 0)
                result++;
            if ((curcheckw & 19327352832ULL) == 0)
                result++;
            if ((curcheckw & 1099511693312ULL) == 0)
                result++;
            if ((curcheckw & 274878955520ULL) == 0)
                result++;
            if ((curcheckw & 2684354560ULL) == 0)
                result++;
            if ((curcheckw & 16777472ULL) == 0)
                result++;
            return result;
        case 5:
            if ((curcheckw & 3221225472ULL) == 0)
                result++;
            if ((curcheckw & 131584ULL) == 0)
                result++;
            if ((curcheckw & 19327352832ULL) == 0)
                result++;
            if ((curcheckw & 2199023386624ULL) == 0)
                result++;
            if ((curcheckw & 5368709120ULL) == 0)
                result++;
            if ((curcheckw & 33554944ULL) == 0)
                result++;
            return result;
        case 6:
            if ((curcheckw & 6442450944ULL) == 0)
                result++;
            if ((curcheckw & 263168ULL) == 0)
                result++;
            if ((curcheckw & 10737418240ULL) == 0)
                result++;
            if ((curcheckw & 67109888ULL) == 0)
                result++;
            return result;
        }
    case 1:
        switch (moveindex)
        {
        case 0:
            if ((curcheckw & 412316860416ULL) == 0)
                result++;
            if ((curcheckw & 8519680ULL) == 0)
                result++;
            if ((curcheckw & 343597383680ULL) == 0)
                result++;
            if ((curcheckw & 537001984ULL) == 0)
                result++;
            return result;
        case 1:
            if ((curcheckw & 824633720832ULL) == 0)
                result++;
            if ((curcheckw & 17039360ULL) == 0)
                result++;
            if ((curcheckw & 309237645312ULL) == 0)
                result++;
            if ((curcheckw & 687194767360ULL) == 0)
                result++;
            if ((curcheckw & 1074003968ULL) == 0)
                result++;
            return result;
        case 2:
            if ((curcheckw & 1649267441664ULL) == 0)
                result++;
            if ((curcheckw & 34078720ULL) == 0)
                result++;
            if ((curcheckw & 309237645312ULL) == 0)
                result++;
            if ((curcheckw & 618475290624ULL) == 0)
                result++;
            if ((curcheckw & 1374389534720ULL) == 0)
                result++;
            if ((curcheckw & 2148007936ULL) == 0)
                result++;
            return result;
        case 3:
            if ((curcheckw & 3298534883328ULL) == 0)
                result++;
            if ((curcheckw & 103079215104ULL) == 0)
                result++;
            if ((curcheckw & 68157440ULL) == 0)
                result++;
            if ((curcheckw & 4210688ULL) == 0)
                result++;
            if ((curcheckw & 618475290624ULL) == 0)
                result++;
            if ((curcheckw & 1236950581248ULL) == 0)
                result++;
            if ((curcheckw & 2748779069440ULL) == 0)
                result++;
            if ((curcheckw & 171798691840ULL) == 0)
                result++;
            if ((curcheckw & 4296015872ULL) == 0)
                result++;
            if ((curcheckw & 1073758208ULL) == 0)
                result++;
            return result;
        case 4:
            if ((curcheckw & 206158430208ULL) == 0)
                result++;
            if ((curcheckw & 8421376ULL) == 0)
                result++;
            if ((curcheckw & 1236950581248ULL) == 0)
                result++;
            if ((curcheckw & 2473901162496ULL) == 0)
                result++;
            if ((curcheckw & 343597383680ULL) == 0)
                result++;
            if ((curcheckw & 2147516416ULL) == 0)
                result++;
            return result;
        case 5:
            if ((curcheckw & 412316860416ULL) == 0)
                result++;
            if ((curcheckw & 16842752ULL) == 0)
                result++;
            if ((curcheckw & 2473901162496ULL) == 0)
                result++;
            if ((curcheckw & 687194767360ULL) == 0)
                result++;
            if ((curcheckw & 4295032832ULL) == 0)
                result++;
            return result;
        case 6:
            if ((curcheckw & 824633720832ULL) == 0)
                result++;
            if ((curcheckw & 33685504ULL) == 0)
                result++;
            if ((curcheckw & 1374389534720ULL) == 0)
                result++;
            if ((curcheckw & 8590065664ULL) == 0)
                result++;
            return result;
        }
    }
}

#if defined(PRESET_MEMORY_SAVE)
#define MIN_CACHE_DEPTH 10
#elif defined(PRESET_SPEED)
#define MIN_CACHE_DEPTH 7
#else // Default preset
#define MIN_CACHE_DEPTH 9
#endif

#define MIN_SCORE_DEPTH 9

#define showstats true

void display(const uint64_t &cfir, const uint64_t &csec)
{
    for (int u = 41; u > -1; --u)
    {
        if (((csec >> u) & 1) == 0)
        {
            if ((cfir >> u) & 1)
                printf("\033[31mX \033[0m");
            else
                printf("\033[32mO \033[0m");
        }
        else
            printf(". ");
        if (u % 7 == 0)
            printf("\n");
    }
}

inline void sorter(int &index1, int &index2, int &index3, int &index4, int &index5, int &index6, int &index7, int &score1, int &score2, int &score3, int &score4, int &score5, int &score6, int &score7)
{
    int t = -1;
    if (score1 < score2)
    {
        t = score1;
        score1 = score2;
        score2 = t;
        t = index1;
        index1 = index2;
        index2 = t;
    }
    if (score2 < score3)
    {
        t = score2;
        score2 = score3;
        score3 = t;
        t = index2;
        index2 = index3;
        index3 = t;
    }
    if (score3 < score4)
    {
        t = score3;
        score3 = score4;
        score4 = t;
        t = index3;
        index3 = index4;
        index4 = t;
    }
    if (score4 < score5)
    {
        t = score4;
        score4 = score5;
        score5 = t;
        t = index4;
        index4 = index5;
        index5 = t;
    }
    if (score5 < score6)
    {
        t = score5;
        score5 = score6;
        score6 = t;
        t = index5;
        index5 = index6;
        index6 = t;
    }
    if (score6 < score7)
    {
        t = score6;
        score6 = score7;
        score7 = t;
        t = index6;
        index6 = index7;
        index7 = t;
    }
    if (t == -1)
        return;
    t = -1;
    if (score1 < score2)
    {
        t = score1;
        score1 = score2;
        score2 = t;
        t = index1;
        index1 = index2;
        index2 = t;
    }
    if (score2 < score3)
    {
        t = score2;
        score2 = score3;
        score3 = t;
        t = index2;
        index2 = index3;
        index3 = t;
    }
    if (score3 < score4)
    {
        t = score3;
        score3 = score4;
        score4 = t;
        t = index3;
        index3 = index4;
        index4 = t;
    }
    if (score4 < score5)
    {
        t = score4;
        score4 = score5;
        score5 = t;
        t = index4;
        index4 = index5;
        index5 = t;
    }
    if (score5 < score6)
    {
        t = score5;
        score5 = score6;
        score6 = t;
        t = index5;
        index5 = index6;
        index6 = t;
    }
    if (t == -1)
        return;
    t = -1;
    if (score1 < score2)
    {
        t = score1;
        score1 = score2;
        score2 = t;
        t = index1;
        index1 = index2;
        index2 = t;
    }
    if (score2 < score3)
    {
        t = score2;
        score2 = score3;
        score3 = t;
        t = index2;
        index2 = index3;
        index3 = t;
    }
    if (score3 < score4)
    {
        t = score3;
        score3 = score4;
        score4 = t;
        t = index3;
        index3 = index4;
        index4 = t;
    }
    if (score4 < score5)
    {
        t = score4;
        score4 = score5;
        score5 = t;
        t = index4;
        index4 = index5;
        index5 = t;
    }
    if (t == -1)
        return;
    t = -1;
    if (score1 < score2)
    {
        t = score1;
        score1 = score2;
        score2 = t;
        t = index1;
        index1 = index2;
        index2 = t;
    }
    if (score2 < score3)
    {
        t = score2;
        score2 = score3;
        score3 = t;
        t = index2;
        index2 = index3;
        index3 = t;
    }
    if (score3 < score4)
    {
        t = score3;
        score3 = score4;
        score4 = t;
        t = index3;
        index3 = index4;
        index4 = t;
    }
    if (t == -1)
        return;
    t = -1;
    if (score1 < score2)
    {
        t = score1;
        score1 = score2;
        score2 = t;
        t = index1;
        index1 = index2;
        index2 = t;
    }
    if (score2 < score3)
    {
        t = score2;
        score2 = score3;
        score3 = t;
        t = index2;
        index2 = index3;
        index3 = t;
    }
    if (t == -1)
        return;
    if (score1 < score2)
    {
        t = score1;
        score1 = score2;
        score2 = t;
        t = index1;
        index1 = index2;
        index2 = t;
    }
}

#if defined(__x86_64__)
#if defined(PRESET_MEMORY_SAVE)
#define SPLIT_THRESHOLD 256
#define NODES_INIT 4096
#define MIN_NODES 2
#define EXPAND_FACTOR 0
#elif defined(PRESET_SPEED)
#define SPLIT_THRESHOLD 64
#define NODES_INIT 4096
#define MIN_NODES 16
#define EXPAND_FACTOR 2
#else // Default preset
#define SPLIT_THRESHOLD 64
#define NODES_INIT 4096
#define MIN_NODES 8
#define EXPAND_FACTOR 1
#endif

#define START_ELEMENTS 2ULL
#define INVALID_RESULT 2048
#define ELEMENT_CONST ((1ULL << 49) - 1)

typedef struct
{
    //[nodes_capacity] 32 [nodes_extended] 32 [array] 64 * nodes_capacity
    void *data;
} gmap;

gmap main_gmap;
gmap cache;

void free_gmap(gmap *node)
{
    __uint32_t nodes_capacity = *(__uint32_t *)node->data;
    if (nodes_capacity)
    {
        nodes_capacity = (1 << nodes_capacity);
        gmap *t = (gmap *)node->data + 1;
        for (__uint32_t i = 0; i < nodes_capacity; ++i, ++t)
            if (t->data)
                free_gmap(t);
    }
    free(node->data);
}

void clear_gmap(gmap *node)
{
    __uint32_t nodes_capacity = *(__uint32_t *)node->data;
    if (nodes_capacity)
    {
        nodes_capacity = (1 << nodes_capacity);
        gmap *t = (gmap *)node->data + 1;
        for (__uint32_t i = 0; i < nodes_capacity; ++i, ++t)
            if (t->data)
                clear_gmap(t);
        return;
    }
    *(__uint64_t *)node->data &= (__UINT64_MAX__ << 48);
}

void clear_unload_gmap(gmap *node)
{
    __uint32_t nodes_capacity = *(__uint32_t *)node->data;
    if (nodes_capacity)
    {
        nodes_capacity = (1 << nodes_capacity);
        gmap *t = (gmap *)node->data + 1;
        for (__uint32_t i = 0; i < nodes_capacity; ++i, ++t)
            if (t->data)
            {
                if (*(__uint32_t *)t->data)
                    clear_gmap(t);
                else
                {
                    free(t->data);
                    t->data = NULL;
                }
            }
        return;
    }
}

void create_gmap_init(gmap *node, __uint32_t nodes_initialize)
{
    node->data = calloc(nodes_initialize + 1, sizeof(__uint64_t));
    *(__uint64_t *)node->data = __builtin_ctz(nodes_initialize);
}

void create_gmap(gmap *node)
{
    node->data = calloc(NODES_INIT + 1, sizeof(__uint64_t));
    *(__uint64_t *)node->data = __builtin_ctz(NODES_INIT);
}

void expand_nodes(gmap *node)
{
    // printf("expand_nodes enter\n");
    __uint32_t nodes_capacity = (1 << *(__uint32_t *)node->data);
    void *new_nodes = calloc(nodes_capacity * MIN_NODES + 1, sizeof(__uint64_t));
    *(__uint64_t *)new_nodes = __builtin_ctz(nodes_capacity * MIN_NODES);
    __uint32_t *nodes_to_expand = ((__uint32_t *)new_nodes + 1);
    for (__uint32_t i = 0; i < nodes_capacity; ++i)
    {
        gmap *m_node = ((gmap *)node->data + 1 + i);
        if (m_node->data)
        {
            __uint32_t m_node_size = (1 << *(__uint32_t *)m_node->data);
            if (m_node_size > MIN_NODES)
            {
                m_node_size /= MIN_NODES;
                *nodes_to_expand += MIN_NODES;
                for (__uint32_t copy_it = 0; copy_it < MIN_NODES; ++copy_it)
                {
                    gmap *new_node = ((gmap *)new_nodes + 1 + (i | (nodes_capacity * copy_it)));
                    new_node->data = malloc(m_node_size * sizeof(gmap *) + sizeof(__uint64_t));
                    *(__uint64_t *)new_node->data = __builtin_ctz(m_node_size);
                    for (__uint32_t t_node_n = 0; t_node_n < m_node_size; ++t_node_n)
                    {
                        ((gmap *)new_node->data + 1 + t_node_n)->data = ((gmap *)m_node->data + 1 + (t_node_n << __builtin_ctz(MIN_NODES)) + copy_it)->data;
                        if (((gmap *)new_node->data + 1 + t_node_n)->data)
                            if (*(__uint32_t *)((gmap *)new_node->data + 1 + t_node_n)->data)
                                ++*((__uint32_t *)new_node->data + 1);
                    }

                    while (*((__uint32_t *)new_node->data + 1) == (1 << (*(__uint32_t *)new_node->data - 0)))
                    {
                        expand_nodes(new_node);
                    }
                }
            }
            else
            {
                if (*(__uint32_t *)m_node->data == 0)
                {
                    __uint16_t size = *((__uint16_t *)m_node->data + 2);
                    __int16_t partition_elements[MIN_NODES] = {0};
                    __uint64_t *array = (__uint64_t *)m_node->data + 1;

                    for (int n = 0; n < size; ++n, ++array)
                        ++partition_elements[*array & (MIN_NODES - 1)];

                    for (int n = 0; n < MIN_NODES; ++n)
                    {
                        if (__builtin_expect(partition_elements[n] == size, 0))
                        {
                            array -= size;
                            for (int b = 0; b < size; ++b, ++array)
                            {
                                for (int t = 0; t < __builtin_ctz(MIN_NODES); ++t)
                                {
                                    *array >>= 1;
                                    *((__uint16_t *)array + 3) <<= 1;
                                }
                            }
                            ((gmap *)new_nodes + 1 + (i | (nodes_capacity * n)))->data = m_node->data;
                            goto lend;
                        }
                    }

                    for (int copy_it = 0; copy_it < MIN_NODES; ++copy_it)
                    {
                        if (partition_elements[copy_it])
                        {
                            ((gmap *)new_nodes + 1 + (i | (nodes_capacity * copy_it)))->data = malloc((1 << (32 - __builtin_clz(partition_elements[copy_it]))) * sizeof(__uint64_t) + sizeof(__uint64_t));
                            *(__uint64_t *)((gmap *)new_nodes + 1 + (i | (nodes_capacity * copy_it)))->data = ((1ULL << (32 - __builtin_clz(partition_elements[copy_it]))) << 48) | ((__uint64_t)partition_elements[copy_it] << 32);
                            partition_elements[copy_it] = 0;
                        }
                    }

                    array -= size;
                    for (int copy_it = 0; copy_it < size; ++copy_it, ++array)
                    {
                        __uint16_t node_uid = *array & (MIN_NODES - 1);
                        for (int t = 0; t < __builtin_ctz(MIN_NODES); ++t)
                        {
                            *array >>= 1;
                            *((__uint16_t *)array + 3) <<= 1;
                        }
                        *((__uint64_t *)((gmap *)new_nodes + 1 + (i | (nodes_capacity * node_uid)))->data + 1 + partition_elements[node_uid]++) = *array;
                    }
                }
                else
                {
                    for (__uint32_t copy_it = 0; copy_it < MIN_NODES; ++copy_it)
                    {
                        if (((gmap *)m_node->data + 1 + copy_it)->data)
                        {
                            ((gmap *)new_nodes + 1 + (i | (nodes_capacity * copy_it)))->data = ((gmap *)m_node->data + 1 + copy_it)->data;
                            if (*(__uint32_t *)((gmap *)m_node->data + 1 + copy_it)->data)
                                ++*nodes_to_expand;
                        }
                    }
                }
            }
        }
        free(m_node->data);
    lend:
    }
    free(node->data);
    node->data = new_nodes;
    // printf("expand_nodes exit\n");
}

void split_node(gmap *node);

void add_data(gmap *node, __uint64_t element, __uint64_t pair)
{
    gmap *next_node;
    __uint32_t shift_const = *(__uint32_t *)node->data;
    while (1)
    {
        __uint32_t capacity = (1 << shift_const);
        next_node = ((gmap *)node->data + 1 + (element & (capacity - 1)));
        element >>= shift_const;
        if (__builtin_expect(next_node->data == NULL, 0))
        {
            next_node->data = malloc(START_ELEMENTS * sizeof(__uint64_t) + sizeof(__uint64_t));
            *(__uint64_t *)next_node->data = (START_ELEMENTS << 48);
            *((__uint64_t *)next_node->data + 1) = (element | (pair << 49));
            ++*((__uint16_t *)next_node->data + 2);
            return;
        }
        shift_const = *(__uint32_t *)next_node->data;
        if (shift_const == 0)
            break;
        node = next_node;
    }

    __uint16_t *array_size = (__uint16_t *)next_node->data + 2; // 16bit array size, *array_size + 1 is capacity
    __uint64_t *array = (__uint64_t *)next_node->data + 1;      // array data

    __int16_t leftIdx = 0, rightIdx = *array_size - 1;

    while (leftIdx <= rightIdx)
    {
        __int16_t mid = leftIdx + ((rightIdx - leftIdx) >> 1);
        _mm_prefetch((const char *)&array[mid], _MM_HINT_NTA);
        __uint64_t mid_val = array[mid] & ELEMENT_CONST;

        if (mid_val == element)
        {
            array[mid] = (element | (pair << 49)); // update element
            return;
        }
        else if (mid_val < element)
        {
            leftIdx = mid + 1;
        }
        else
        {
            rightIdx = mid - 1;
        }
    }

    if (__builtin_expect(*array_size == *(array_size + 1), 0))
    { // out of size, resizing
        if (*array_size == SPLIT_THRESHOLD)
        { // maximum size reached, splitting
            split_node(next_node);
            __builtin_assume(*(__uint32_t *)next_node->data == __builtin_ctz(MIN_NODES));
            add_data(next_node, element, pair);
            if (++*((__uint32_t *)node->data + 1) == (1 << (*(__uint32_t *)node->data - EXPAND_FACTOR)))
            {
                expand_nodes(node);
            }
            return;
        }
        *(array_size + 1) <<= 1; // double the size
        if (__builtin_expect(*(array_size + 1) * sizeof(__uint64_t) + sizeof(__uint64_t) > malloc_usable_size(next_node->data), 1))
        {
            void *temp = malloc(*(array_size + 1) * sizeof(__uint64_t) + sizeof(__uint64_t));
            memcpy(temp, next_node->data, *array_size * sizeof(__uint64_t) + sizeof(__uint64_t));
            free(next_node->data);
            next_node->data = temp;
            array_size = (__uint16_t *)next_node->data + 2; // update size pointer
            array = (__uint64_t *)next_node->data + 1;      // update array data pointer
        }
    }
    if (leftIdx < *array_size)
    { // check if copy is needed
        memmove(&array[leftIdx + 1], &array[leftIdx], (*array_size - leftIdx) * sizeof(__uint64_t));
    }

    array[leftIdx] = (element | (pair << 49)); // set element
    ++*array_size;                             // increment size
}

void split_node(gmap *node)
{
    __int16_t partition_elements[MIN_NODES] = {0};
    __uint64_t *array = (__uint64_t *)node->data + 1;

    for (int i = 0; i < SPLIT_THRESHOLD; ++i, ++array)
        ++partition_elements[*array & (MIN_NODES - 1)];

    void *temp = calloc(MIN_NODES + 1, sizeof(__uint64_t));
    *(__uint64_t *)temp = __builtin_ctz(MIN_NODES);

    for (int n = 0; n < MIN_NODES; ++n)
    {
        if (__builtin_expect(partition_elements[n] == SPLIT_THRESHOLD, 0))
        {
            array -= SPLIT_THRESHOLD;
            for (int i = 0; i < SPLIT_THRESHOLD; ++i, ++array)
            {
                for (int t = 0; t < __builtin_ctz(MIN_NODES); ++t)
                {
                    *array >>= 1;
                    *((__uint16_t *)array + 3) <<= 1;
                }
            }
            ((gmap *)temp + n + 1)->data = node->data;
            node->data = temp;
            return;
        }
    }

    for (int i = 0; i < MIN_NODES; ++i)
    {
        if (partition_elements[i])
        {
            ((gmap *)temp + i + 1)->data = malloc((1 << (32 - __builtin_clz(partition_elements[i]))) * sizeof(__uint64_t) + sizeof(__uint64_t));
            *(__uint64_t *)((gmap *)temp + i + 1)->data = ((1ULL << (32 - __builtin_clz(partition_elements[i]))) << 48) | ((__uint64_t)partition_elements[i] << 32);
            partition_elements[i] = 0;
        }
    }

    array -= SPLIT_THRESHOLD;
    for (int i = 0; i < SPLIT_THRESHOLD; ++i, ++array)
    {
        __uint16_t node_uid = *array & (MIN_NODES - 1);
        for (int t = 0; t < __builtin_ctz(MIN_NODES); ++t)
        {
            *array >>= 1;
            *((__uint16_t *)array + 3) <<= 1;
        }
        *((__uint64_t *)((gmap *)temp + 1 + node_uid)->data + 1 + partition_elements[node_uid]++) = *array;
    }

    free(node->data);
    node->data = temp;
    return;
}

__uint16_t binary_search(gmap *node, __uint64_t lookup)
{
    __uint32_t shiftconst = *(__uint32_t *)node->data;
    while (1)
    {
        node = ((gmap *)node->data + 1 + (lookup & ((1 << shiftconst) - 1)));
        lookup >>= shiftconst;
        if (node->data == NULL)
            return INVALID_RESULT;
        shiftconst = *(__uint32_t *)node->data;
        if (shiftconst == 0)
            break;
    }

    __uint64_t min = (*((__uint64_t *)node->data + 1) & ((1ULL << 49) - 1)), max = (*((__uint64_t *)node->data + *((__uint16_t *)node->data + 2)) & ((1ULL << 49) - 1));

    if (lookup < min || lookup > max)
        return INVALID_RESULT;

    __int16_t leftIdx = 0, rightIdx = *((__uint16_t *)node->data + 2) - 1;
    while (leftIdx <= rightIdx)
    {
        __int16_t mid = leftIdx + ((rightIdx - leftIdx) >> 1);
        _mm_prefetch((const char *)&*((__uint64_t *)node->data + 1 + mid), _MM_HINT_NTA);
        __uint64_t mid_val = *((__uint64_t *)node->data + 1 + mid) & ((1ULL << 49) - 1);

        if (mid_val == lookup)
        {
            return (*((__uint64_t *)node->data + 1 + mid) >> 49);
        }
        if (mid_val < lookup)
            leftIdx = mid + 1;
        else
            rightIdx = mid - 1;
    }
    return INVALID_RESULT;
}

__uint32_t size(gmap *node)
{
    __uint32_t capacity = *(__uint32_t *)node->data;
    if (capacity)
    {
        capacity = 1 << capacity;
        __uint32_t res = 0;
        gmap *t = (gmap *)node->data + 1;
        for (__uint32_t i = 0; i < capacity; ++i)
            if (t->data)
                res += size(t);
        return res;
    }
    return *((__uint16_t *)node->data + 2);
}

#else
#if defined(PRESET_MEMORY_SAVE)
perror("PRESET CANNOT BE APPLIED ON AN UNSUPPORTED ARCHITECTURE\n");
#elif defined(PRESET_SPEED)
perror("PRESET CANNOT BE APPLIED ON AN UNSUPPORTED ARCHITECTURE\n");
#endif
ankerl::unordered_dense::map<uint64_t, uint16_t> TranspositionTable;
ankerl::unordered_dense::map<uint64_t, uint16_t> cache;
#endif

void insert(__uint64_t element, __uint64_t pair)
{
#if defined(__x86_64__)
    add_data(&main_gmap, element, pair);
#else
    TranspositionTable[element] = pair;
#endif
}

int minimax(int depth, const bool player, int beta, int alpha, const uint64_t cfir, const uint64_t csec, const uint32_t left1, const uint32_t left2, const uint32_t left3, const uint32_t left4, const uint32_t left5, const uint32_t left6, const uint32_t left7)
{
    if (player)
    {
        uint64_t tvar = ~cfir;
        if (left4)
            switch (left4)
            {
            case 6:
                if ((tvar & 7LL) == 0)
                    return depth;
                if ((tvar & 22LL) == 0)
                    return depth;
                if ((tvar & 52LL) == 0)
                    return depth;
                if ((tvar & 112LL) == 0)
                    return depth;
                if ((tvar & 134744064LL) == 0)
                    return depth;
                if ((tvar & 2130432LL) == 0)
                    return depth;
                break;
            case 5:
                if ((tvar & 896LL) == 0)
                    return depth;
                if ((tvar & 2816LL) == 0)
                    return depth;
                if ((tvar & 6656LL) == 0)
                    return depth;
                if ((tvar & 14336LL) == 0)
                    return depth;
                if ((tvar & 67371012LL) == 0)
                    return depth;
                if ((tvar & 17247240192LL) == 0)
                    return depth;
                if ((tvar & 4259856LL) == 0)
                    return depth;
                if ((tvar & 272695296LL) == 0)
                    return depth;
                break;
            case 4:
                if ((tvar & 114688LL) == 0)
                    return depth;
                if ((tvar & 360448LL) == 0)
                    return depth;
                if ((tvar & 851968LL) == 0)
                    return depth;
                if ((tvar & 1835008LL) == 0)
                    return depth;
                if ((tvar & 33554946LL) == 0)
                    return depth;
                if ((tvar & 8623489536LL) == 0)
                    return depth;
                if ((tvar & 2207646744576LL) == 0)
                    return depth;
                if ((tvar & 8390688LL) == 0)
                    return depth;
                if ((tvar & 545261568LL) == 0)
                    return depth;
                if ((tvar & 34904997888LL) == 0)
                    return depth;
                break;
            case 3:
                if ((tvar & 14680064LL) == 0)
                    return depth;
                if ((tvar & 46137344LL) == 0)
                    return depth;
                if ((tvar & 109051904LL) == 0)
                    return depth;
                if ((tvar & 234881024LL) == 0)
                    return depth;
                if ((tvar & 132104LL) == 0)
                    return depth;
                if ((tvar & 65793LL) == 0)
                    return depth;
                if ((tvar & 4295033088LL) == 0)
                    return depth;
                if ((tvar & 1103806660608LL) == 0)
                    return depth;
                if ((tvar & 266304LL) == 0)
                    return depth;
                if ((tvar & 1074008064LL) == 0)
                    return depth;
                if ((tvar & 69793480704LL) == 0)
                    return depth;
                break;
            case 2:
                if ((tvar & 1879048192LL) == 0)
                    return depth;
                if ((tvar & 5905580032LL) == 0)
                    return depth;
                if ((tvar & 13958643712LL) == 0)
                    return depth;
                if ((tvar & 30064771072LL) == 0)
                    return depth;
                if ((tvar & 16909312LL) == 0)
                    return depth;
                if ((tvar & 8421504LL) == 0)
                    return depth;
                if ((tvar & 549764235264LL) == 0)
                    return depth;
                if ((tvar & 34086912LL) == 0)
                    return depth;
                if ((tvar & 137473032192LL) == 0)
                    return depth;
                break;
            case 1:
                if ((tvar & 240518168576LL) == 0)
                    return depth;
                if ((tvar & 755914244096LL) == 0)
                    return depth;
                if ((tvar & 1786706395136LL) == 0)
                    return depth;
                if ((tvar & 3848290697216LL) == 0)
                    return depth;
                if ((tvar & 2164391936LL) == 0)
                    return depth;
                if ((tvar & 1077952512LL) == 0)
                    return depth;
                if ((tvar & 4363124736LL) == 0)
                    return depth;
                break;
            }
        if (left3)
            switch (left3)
            {
            case 6:
                if ((tvar & 11LL) == 0)
                    return depth;
                if ((tvar & 26LL) == 0)
                    return depth;
                if ((tvar & 56LL) == 0)
                    return depth;
                if ((tvar & 67372032LL) == 0)
                    return depth;
                break;
            case 5:
                if ((tvar & 1408LL) == 0)
                    return depth;
                if ((tvar & 3328LL) == 0)
                    return depth;
                if ((tvar & 7168LL) == 0)
                    return depth;
                if ((tvar & 33685506LL) == 0)
                    return depth;
                if ((tvar & 8623620096LL) == 0)
                    return depth;
                if ((tvar & 2129928LL) == 0)
                    return depth;
                break;
            case 4:
                if ((tvar & 180224LL) == 0)
                    return depth;
                if ((tvar & 425984LL) == 0)
                    return depth;
                if ((tvar & 917504LL) == 0)
                    return depth;
                if ((tvar & 16777473LL) == 0)
                    return depth;
                if ((tvar & 4311744768LL) == 0)
                    return depth;
                if ((tvar & 1103823372288LL) == 0)
                    return depth;
                if ((tvar & 4195344LL) == 0)
                    return depth;
                if ((tvar & 272630784LL) == 0)
                    return depth;
                break;
            case 3:
                if ((tvar & 23068672LL) == 0)
                    return depth;
                if ((tvar & 54525952LL) == 0)
                    return depth;
                if ((tvar & 117440512LL) == 0)
                    return depth;
                if ((tvar & 66052LL) == 0)
                    return depth;
                if ((tvar & 2147516544LL) == 0)
                    return depth;
                if ((tvar & 551903330304LL) == 0)
                    return depth;
                if ((tvar & 133152LL) == 0)
                    return depth;
                if ((tvar & 537004032LL) == 0)
                    return depth;
                if ((tvar & 34896740352LL) == 0)
                    return depth;
                break;
            case 2:
                if ((tvar & 2952790016LL) == 0)
                    return depth;
                if ((tvar & 6979321856LL) == 0)
                    return depth;
                if ((tvar & 15032385536LL) == 0)
                    return depth;
                if ((tvar & 8454656LL) == 0)
                    return depth;
                if ((tvar & 274882117632LL) == 0)
                    return depth;
                if ((tvar & 17043456LL) == 0)
                    return depth;
                if ((tvar & 68736516096LL) == 0)
                    return depth;
                break;
            case 1:
                if ((tvar & 377957122048LL) == 0)
                    return depth;
                if ((tvar & 893353197568LL) == 0)
                    return depth;
                if ((tvar & 1924145348608LL) == 0)
                    return depth;
                if ((tvar & 1082195968LL) == 0)
                    return depth;
                if ((tvar & 2181562368LL) == 0)
                    return depth;
                break;
            }
        if (left5)
            switch (left5)
            {
            case 6:
                if ((tvar & 14LL) == 0)
                    return depth;
                if ((tvar & 44LL) == 0)
                    return depth;
                if ((tvar & 104LL) == 0)
                    return depth;
                if ((tvar & 4260864LL) == 0)
                    return depth;
                break;
            case 5:
                if ((tvar & 1792LL) == 0)
                    return depth;
                if ((tvar & 5632LL) == 0)
                    return depth;
                if ((tvar & 13312LL) == 0)
                    return depth;
                if ((tvar & 134742024LL) == 0)
                    return depth;
                if ((tvar & 8519712LL) == 0)
                    return depth;
                if ((tvar & 545390592LL) == 0)
                    return depth;
                break;
            case 4:
                if ((tvar & 229376LL) == 0)
                    return depth;
                if ((tvar & 720896LL) == 0)
                    return depth;
                if ((tvar & 1703936LL) == 0)
                    return depth;
                if ((tvar & 67109892LL) == 0)
                    return depth;
                if ((tvar & 17246979072LL) == 0)
                    return depth;
                if ((tvar & 16781376LL) == 0)
                    return depth;
                if ((tvar & 1090523136LL) == 0)
                    return depth;
                if ((tvar & 69809995776LL) == 0)
                    return depth;
                break;
            case 3:
                if ((tvar & 29360128LL) == 0)
                    return depth;
                if ((tvar & 92274688LL) == 0)
                    return depth;
                if ((tvar & 218103808LL) == 0)
                    return depth;
                if ((tvar & 264208LL) == 0)
                    return depth;
                if ((tvar & 131586LL) == 0)
                    return depth;
                if ((tvar & 8590066176LL) == 0)
                    return depth;
                if ((tvar & 2207613321216LL) == 0)
                    return depth;
                if ((tvar & 2148016128LL) == 0)
                    return depth;
                if ((tvar & 139586961408LL) == 0)
                    return depth;
                break;
            case 2:
                if ((tvar & 3758096384LL) == 0)
                    return depth;
                if ((tvar & 11811160064LL) == 0)
                    return depth;
                if ((tvar & 27917287424LL) == 0)
                    return depth;
                if ((tvar & 33818624LL) == 0)
                    return depth;
                if ((tvar & 16843008LL) == 0)
                    return depth;
                if ((tvar & 1099528470528LL) == 0)
                    return depth;
                if ((tvar & 274946064384LL) == 0)
                    return depth;
                break;
            case 1:
                if ((tvar & 481036337152LL) == 0)
                    return depth;
                if ((tvar & 1511828488192LL) == 0)
                    return depth;
                if ((tvar & 3573412790272LL) == 0)
                    return depth;
                if ((tvar & 4328783872LL) == 0)
                    return depth;
                if ((tvar & 2155905024LL) == 0)
                    return depth;
                break;
            }
        switch ((left2) | (left6 << 3))
        {
        case 1:
            if ((tvar & 446676598784LL) == 0)
                return depth;
            if ((tvar & 962072674304LL) == 0)
                return depth;
            if ((tvar & 541097984LL) == 0)
                return depth;
            if ((tvar & 1090781184LL) == 0)
                return depth;
            break;
        case 2:
            if ((tvar & 3489660928LL) == 0)
                return depth;
            if ((tvar & 7516192768LL) == 0)
                return depth;
            if ((tvar & 4227328LL) == 0)
                return depth;
            if ((tvar & 8521728LL) == 0)
                return depth;
            if ((tvar & 34368258048LL) == 0)
                return depth;
            break;
        case 3:
            if ((tvar & 27262976LL) == 0)
                return depth;
            if ((tvar & 58720256LL) == 0)
                return depth;
            if ((tvar & 33026LL) == 0)
                return depth;
            if ((tvar & 275951665152LL) == 0)
                return depth;
            if ((tvar & 66576LL) == 0)
                return depth;
            if ((tvar & 268502016LL) == 0)
                return depth;
            break;
        case 4:
            if ((tvar & 212992LL) == 0)
                return depth;
            if ((tvar & 458752LL) == 0)
                return depth;
            if ((tvar & 2155872384LL) == 0)
                return depth;
            if ((tvar & 551911686144LL) == 0)
                return depth;
            if ((tvar & 2097672LL) == 0)
                return depth;
            break;
        case 5:
            if ((tvar & 1664LL) == 0)
                return depth;
            if ((tvar & 3584LL) == 0)
                return depth;
            if ((tvar & 16842753LL) == 0)
                return depth;
            if ((tvar & 4311810048LL) == 0)
                return depth;
            break;
        case 6:
            if ((tvar & 13LL) == 0)
                return depth;
            if ((tvar & 28LL) == 0)
                return depth;
            if ((tvar & 33686016LL) == 0)
                return depth;
            break;
        case 8:
            if ((tvar & 962072674304LL) == 0)
                return depth;
            if ((tvar & 3023656976384LL) == 0)
                return depth;
            if ((tvar & 8657567744LL) == 0)
                return depth;
            if ((tvar & 4311810048LL) == 0)
                return depth;
            break;
        case 9:
            if ((tvar & 446676598784LL) == 0)
                return depth;
            if ((tvar & 962072674304LL) == 0)
                return depth;
            if ((tvar & 541097984LL) == 0)
                return depth;
            if ((tvar & 1090781184LL) == 0)
                return depth;
            if ((tvar & 3023656976384LL) == 0)
                return depth;
            if ((tvar & 8657567744LL) == 0)
                return depth;
            if ((tvar & 4311810048LL) == 0)
                return depth;
            break;
        case 10:
            if ((tvar & 3489660928LL) == 0)
                return depth;
            if ((tvar & 7516192768LL) == 0)
                return depth;
            if ((tvar & 4227328LL) == 0)
                return depth;
            if ((tvar & 8521728LL) == 0)
                return depth;
            if ((tvar & 34368258048LL) == 0)
                return depth;
            if ((tvar & 962072674304LL) == 0)
                return depth;
            if ((tvar & 3023656976384LL) == 0)
                return depth;
            if ((tvar & 8657567744LL) == 0)
                return depth;
            if ((tvar & 4311810048LL) == 0)
                return depth;
            break;
        case 11:
            if ((tvar & 27262976LL) == 0)
                return depth;
            if ((tvar & 58720256LL) == 0)
                return depth;
            if ((tvar & 33026LL) == 0)
                return depth;
            if ((tvar & 275951665152LL) == 0)
                return depth;
            if ((tvar & 66576LL) == 0)
                return depth;
            if ((tvar & 268502016LL) == 0)
                return depth;
            if ((tvar & 962072674304LL) == 0)
                return depth;
            if ((tvar & 3023656976384LL) == 0)
                return depth;
            if ((tvar & 8657567744LL) == 0)
                return depth;
            if ((tvar & 4311810048LL) == 0)
                return depth;
            break;
        case 12:
            if ((tvar & 212992LL) == 0)
                return depth;
            if ((tvar & 458752LL) == 0)
                return depth;
            if ((tvar & 2155872384LL) == 0)
                return depth;
            if ((tvar & 551911686144LL) == 0)
                return depth;
            if ((tvar & 2097672LL) == 0)
                return depth;
            if ((tvar & 962072674304LL) == 0)
                return depth;
            if ((tvar & 3023656976384LL) == 0)
                return depth;
            if ((tvar & 8657567744LL) == 0)
                return depth;
            if ((tvar & 4311810048LL) == 0)
                return depth;
            break;
        case 13:
            if ((tvar & 1664LL) == 0)
                return depth;
            if ((tvar & 3584LL) == 0)
                return depth;
            if ((tvar & 16842753LL) == 0)
                return depth;
            if ((tvar & 4311810048LL) == 0)
                return depth;
            if ((tvar & 962072674304LL) == 0)
                return depth;
            if ((tvar & 3023656976384LL) == 0)
                return depth;
            if ((tvar & 8657567744LL) == 0)
                return depth;
            break;
        case 14:
            if ((tvar & 13LL) == 0)
                return depth;
            if ((tvar & 28LL) == 0)
                return depth;
            if ((tvar & 33686016LL) == 0)
                return depth;
            if ((tvar & 962072674304LL) == 0)
                return depth;
            if ((tvar & 3023656976384LL) == 0)
                return depth;
            if ((tvar & 8657567744LL) == 0)
                return depth;
            if ((tvar & 4311810048LL) == 0)
                return depth;
            break;
        case 16:
            if ((tvar & 7516192768LL) == 0)
                return depth;
            if ((tvar & 23622320128LL) == 0)
                return depth;
            if ((tvar & 67637248LL) == 0)
                return depth;
            if ((tvar & 33686016LL) == 0)
                return depth;
            if ((tvar & 2199056941056LL) == 0)
                return depth;
            break;
        case 17:
            if ((tvar & 446676598784LL) == 0)
                return depth;
            if ((tvar & 962072674304LL) == 0)
                return depth;
            if ((tvar & 541097984LL) == 0)
                return depth;
            if ((tvar & 1090781184LL) == 0)
                return depth;
            if ((tvar & 7516192768LL) == 0)
                return depth;
            if ((tvar & 23622320128LL) == 0)
                return depth;
            if ((tvar & 67637248LL) == 0)
                return depth;
            if ((tvar & 33686016LL) == 0)
                return depth;
            if ((tvar & 2199056941056LL) == 0)
                return depth;
            break;
        case 18:
            if ((tvar & 3489660928LL) == 0)
                return depth;
            if ((tvar & 7516192768LL) == 0)
                return depth;
            if ((tvar & 4227328LL) == 0)
                return depth;
            if ((tvar & 8521728LL) == 0)
                return depth;
            if ((tvar & 34368258048LL) == 0)
                return depth;
            if ((tvar & 23622320128LL) == 0)
                return depth;
            if ((tvar & 67637248LL) == 0)
                return depth;
            if ((tvar & 33686016LL) == 0)
                return depth;
            if ((tvar & 2199056941056LL) == 0)
                return depth;
            break;
        case 19:
            if ((tvar & 27262976LL) == 0)
                return depth;
            if ((tvar & 58720256LL) == 0)
                return depth;
            if ((tvar & 33026LL) == 0)
                return depth;
            if ((tvar & 275951665152LL) == 0)
                return depth;
            if ((tvar & 66576LL) == 0)
                return depth;
            if ((tvar & 268502016LL) == 0)
                return depth;
            if ((tvar & 7516192768LL) == 0)
                return depth;
            if ((tvar & 23622320128LL) == 0)
                return depth;
            if ((tvar & 67637248LL) == 0)
                return depth;
            if ((tvar & 33686016LL) == 0)
                return depth;
            if ((tvar & 2199056941056LL) == 0)
                return depth;
            break;
        case 20:
            if ((tvar & 212992LL) == 0)
                return depth;
            if ((tvar & 458752LL) == 0)
                return depth;
            if ((tvar & 2155872384LL) == 0)
                return depth;
            if ((tvar & 551911686144LL) == 0)
                return depth;
            if ((tvar & 2097672LL) == 0)
                return depth;
            if ((tvar & 7516192768LL) == 0)
                return depth;
            if ((tvar & 23622320128LL) == 0)
                return depth;
            if ((tvar & 67637248LL) == 0)
                return depth;
            if ((tvar & 33686016LL) == 0)
                return depth;
            if ((tvar & 2199056941056LL) == 0)
                return depth;
            break;
        case 21:
            if ((tvar & 1664LL) == 0)
                return depth;
            if ((tvar & 3584LL) == 0)
                return depth;
            if ((tvar & 16842753LL) == 0)
                return depth;
            if ((tvar & 4311810048LL) == 0)
                return depth;
            if ((tvar & 7516192768LL) == 0)
                return depth;
            if ((tvar & 23622320128LL) == 0)
                return depth;
            if ((tvar & 67637248LL) == 0)
                return depth;
            if ((tvar & 33686016LL) == 0)
                return depth;
            if ((tvar & 2199056941056LL) == 0)
                return depth;
            break;
        case 22:
            if ((tvar & 13LL) == 0)
                return depth;
            if ((tvar & 28LL) == 0)
                return depth;
            if ((tvar & 33686016LL) == 0)
                return depth;
            if ((tvar & 7516192768LL) == 0)
                return depth;
            if ((tvar & 23622320128LL) == 0)
                return depth;
            if ((tvar & 67637248LL) == 0)
                return depth;
            if ((tvar & 2199056941056LL) == 0)
                return depth;
            break;
        case 24:
            if ((tvar & 58720256LL) == 0)
                return depth;
            if ((tvar & 184549376LL) == 0)
                return depth;
            if ((tvar & 528416LL) == 0)
                return depth;
            if ((tvar & 263172LL) == 0)
                return depth;
            if ((tvar & 17180132352LL) == 0)
                return depth;
            if ((tvar & 279173922816LL) == 0)
                return depth;
            break;
        case 25:
            if ((tvar & 446676598784LL) == 0)
                return depth;
            if ((tvar & 962072674304LL) == 0)
                return depth;
            if ((tvar & 541097984LL) == 0)
                return depth;
            if ((tvar & 1090781184LL) == 0)
                return depth;
            if ((tvar & 58720256LL) == 0)
                return depth;
            if ((tvar & 184549376LL) == 0)
                return depth;
            if ((tvar & 528416LL) == 0)
                return depth;
            if ((tvar & 263172LL) == 0)
                return depth;
            if ((tvar & 17180132352LL) == 0)
                return depth;
            if ((tvar & 279173922816LL) == 0)
                return depth;
            break;
        case 26:
            if ((tvar & 3489660928LL) == 0)
                return depth;
            if ((tvar & 7516192768LL) == 0)
                return depth;
            if ((tvar & 4227328LL) == 0)
                return depth;
            if ((tvar & 8521728LL) == 0)
                return depth;
            if ((tvar & 34368258048LL) == 0)
                return depth;
            if ((tvar & 58720256LL) == 0)
                return depth;
            if ((tvar & 184549376LL) == 0)
                return depth;
            if ((tvar & 528416LL) == 0)
                return depth;
            if ((tvar & 263172LL) == 0)
                return depth;
            if ((tvar & 17180132352LL) == 0)
                return depth;
            if ((tvar & 279173922816LL) == 0)
                return depth;
            break;
        case 27:
            if ((tvar & 27262976LL) == 0)
                return depth;
            if ((tvar & 58720256LL) == 0)
                return depth;
            if ((tvar & 33026LL) == 0)
                return depth;
            if ((tvar & 275951665152LL) == 0)
                return depth;
            if ((tvar & 66576LL) == 0)
                return depth;
            if ((tvar & 268502016LL) == 0)
                return depth;
            if ((tvar & 184549376LL) == 0)
                return depth;
            if ((tvar & 528416LL) == 0)
                return depth;
            if ((tvar & 263172LL) == 0)
                return depth;
            if ((tvar & 17180132352LL) == 0)
                return depth;
            if ((tvar & 279173922816LL) == 0)
                return depth;
            break;
        case 28:
            if ((tvar & 212992LL) == 0)
                return depth;
            if ((tvar & 458752LL) == 0)
                return depth;
            if ((tvar & 2155872384LL) == 0)
                return depth;
            if ((tvar & 551911686144LL) == 0)
                return depth;
            if ((tvar & 2097672LL) == 0)
                return depth;
            if ((tvar & 58720256LL) == 0)
                return depth;
            if ((tvar & 184549376LL) == 0)
                return depth;
            if ((tvar & 528416LL) == 0)
                return depth;
            if ((tvar & 263172LL) == 0)
                return depth;
            if ((tvar & 17180132352LL) == 0)
                return depth;
            if ((tvar & 279173922816LL) == 0)
                return depth;
            break;
        case 29:
            if ((tvar & 1664LL) == 0)
                return depth;
            if ((tvar & 3584LL) == 0)
                return depth;
            if ((tvar & 16842753LL) == 0)
                return depth;
            if ((tvar & 4311810048LL) == 0)
                return depth;
            if ((tvar & 58720256LL) == 0)
                return depth;
            if ((tvar & 184549376LL) == 0)
                return depth;
            if ((tvar & 528416LL) == 0)
                return depth;
            if ((tvar & 263172LL) == 0)
                return depth;
            if ((tvar & 17180132352LL) == 0)
                return depth;
            if ((tvar & 279173922816LL) == 0)
                return depth;
            break;
        case 30:
            if ((tvar & 13LL) == 0)
                return depth;
            if ((tvar & 28LL) == 0)
                return depth;
            if ((tvar & 33686016LL) == 0)
                return depth;
            if ((tvar & 58720256LL) == 0)
                return depth;
            if ((tvar & 184549376LL) == 0)
                return depth;
            if ((tvar & 528416LL) == 0)
                return depth;
            if ((tvar & 263172LL) == 0)
                return depth;
            if ((tvar & 17180132352LL) == 0)
                return depth;
            if ((tvar & 279173922816LL) == 0)
                return depth;
            break;
        case 32:
            if ((tvar & 458752LL) == 0)
                return depth;
            if ((tvar & 1441792LL) == 0)
                return depth;
            if ((tvar & 134219784LL) == 0)
                return depth;
            if ((tvar & 2181046272LL) == 0)
                return depth;
            if ((tvar & 139619991552LL) == 0)
                return depth;
            break;
        case 33:
            if ((tvar & 446676598784LL) == 0)
                return depth;
            if ((tvar & 962072674304LL) == 0)
                return depth;
            if ((tvar & 541097984LL) == 0)
                return depth;
            if ((tvar & 1090781184LL) == 0)
                return depth;
            if ((tvar & 458752LL) == 0)
                return depth;
            if ((tvar & 1441792LL) == 0)
                return depth;
            if ((tvar & 134219784LL) == 0)
                return depth;
            if ((tvar & 2181046272LL) == 0)
                return depth;
            if ((tvar & 139619991552LL) == 0)
                return depth;
            break;
        case 34:
            if ((tvar & 3489660928LL) == 0)
                return depth;
            if ((tvar & 7516192768LL) == 0)
                return depth;
            if ((tvar & 4227328LL) == 0)
                return depth;
            if ((tvar & 8521728LL) == 0)
                return depth;
            if ((tvar & 34368258048LL) == 0)
                return depth;
            if ((tvar & 458752LL) == 0)
                return depth;
            if ((tvar & 1441792LL) == 0)
                return depth;
            if ((tvar & 134219784LL) == 0)
                return depth;
            if ((tvar & 2181046272LL) == 0)
                return depth;
            if ((tvar & 139619991552LL) == 0)
                return depth;
            break;
        case 35:
            if ((tvar & 27262976LL) == 0)
                return depth;
            if ((tvar & 58720256LL) == 0)
                return depth;
            if ((tvar & 33026LL) == 0)
                return depth;
            if ((tvar & 275951665152LL) == 0)
                return depth;
            if ((tvar & 66576LL) == 0)
                return depth;
            if ((tvar & 268502016LL) == 0)
                return depth;
            if ((tvar & 458752LL) == 0)
                return depth;
            if ((tvar & 1441792LL) == 0)
                return depth;
            if ((tvar & 134219784LL) == 0)
                return depth;
            if ((tvar & 2181046272LL) == 0)
                return depth;
            if ((tvar & 139619991552LL) == 0)
                return depth;
            break;
        case 36:
            if ((tvar & 212992LL) == 0)
                return depth;
            if ((tvar & 458752LL) == 0)
                return depth;
            if ((tvar & 2155872384LL) == 0)
                return depth;
            if ((tvar & 551911686144LL) == 0)
                return depth;
            if ((tvar & 2097672LL) == 0)
                return depth;
            if ((tvar & 1441792LL) == 0)
                return depth;
            if ((tvar & 134219784LL) == 0)
                return depth;
            if ((tvar & 2181046272LL) == 0)
                return depth;
            if ((tvar & 139619991552LL) == 0)
                return depth;
            break;
        case 37:
            if ((tvar & 1664LL) == 0)
                return depth;
            if ((tvar & 3584LL) == 0)
                return depth;
            if ((tvar & 16842753LL) == 0)
                return depth;
            if ((tvar & 4311810048LL) == 0)
                return depth;
            if ((tvar & 458752LL) == 0)
                return depth;
            if ((tvar & 1441792LL) == 0)
                return depth;
            if ((tvar & 134219784LL) == 0)
                return depth;
            if ((tvar & 2181046272LL) == 0)
                return depth;
            if ((tvar & 139619991552LL) == 0)
                return depth;
            break;
        case 38:
            if ((tvar & 13LL) == 0)
                return depth;
            if ((tvar & 28LL) == 0)
                return depth;
            if ((tvar & 33686016LL) == 0)
                return depth;
            if ((tvar & 458752LL) == 0)
                return depth;
            if ((tvar & 1441792LL) == 0)
                return depth;
            if ((tvar & 134219784LL) == 0)
                return depth;
            if ((tvar & 2181046272LL) == 0)
                return depth;
            if ((tvar & 139619991552LL) == 0)
                return depth;
            break;
        case 40:
            if ((tvar & 3584LL) == 0)
                return depth;
            if ((tvar & 11264LL) == 0)
                return depth;
            if ((tvar & 17039424LL) == 0)
                return depth;
            if ((tvar & 1090781184LL) == 0)
                return depth;
            break;
        case 41:
            if ((tvar & 446676598784LL) == 0)
                return depth;
            if ((tvar & 962072674304LL) == 0)
                return depth;
            if ((tvar & 541097984LL) == 0)
                return depth;
            if ((tvar & 1090781184LL) == 0)
                return depth;
            if ((tvar & 3584LL) == 0)
                return depth;
            if ((tvar & 11264LL) == 0)
                return depth;
            if ((tvar & 17039424LL) == 0)
                return depth;
            break;
        case 42:
            if ((tvar & 3489660928LL) == 0)
                return depth;
            if ((tvar & 7516192768LL) == 0)
                return depth;
            if ((tvar & 4227328LL) == 0)
                return depth;
            if ((tvar & 8521728LL) == 0)
                return depth;
            if ((tvar & 34368258048LL) == 0)
                return depth;
            if ((tvar & 3584LL) == 0)
                return depth;
            if ((tvar & 11264LL) == 0)
                return depth;
            if ((tvar & 17039424LL) == 0)
                return depth;
            if ((tvar & 1090781184LL) == 0)
                return depth;
            break;
        case 43:
            if ((tvar & 27262976LL) == 0)
                return depth;
            if ((tvar & 58720256LL) == 0)
                return depth;
            if ((tvar & 33026LL) == 0)
                return depth;
            if ((tvar & 275951665152LL) == 0)
                return depth;
            if ((tvar & 66576LL) == 0)
                return depth;
            if ((tvar & 268502016LL) == 0)
                return depth;
            if ((tvar & 3584LL) == 0)
                return depth;
            if ((tvar & 11264LL) == 0)
                return depth;
            if ((tvar & 17039424LL) == 0)
                return depth;
            if ((tvar & 1090781184LL) == 0)
                return depth;
            break;
        case 44:
            if ((tvar & 212992LL) == 0)
                return depth;
            if ((tvar & 458752LL) == 0)
                return depth;
            if ((tvar & 2155872384LL) == 0)
                return depth;
            if ((tvar & 551911686144LL) == 0)
                return depth;
            if ((tvar & 2097672LL) == 0)
                return depth;
            if ((tvar & 3584LL) == 0)
                return depth;
            if ((tvar & 11264LL) == 0)
                return depth;
            if ((tvar & 17039424LL) == 0)
                return depth;
            if ((tvar & 1090781184LL) == 0)
                return depth;
            break;
        case 45:
            if ((tvar & 1664LL) == 0)
                return depth;
            if ((tvar & 3584LL) == 0)
                return depth;
            if ((tvar & 16842753LL) == 0)
                return depth;
            if ((tvar & 4311810048LL) == 0)
                return depth;
            if ((tvar & 11264LL) == 0)
                return depth;
            if ((tvar & 17039424LL) == 0)
                return depth;
            if ((tvar & 1090781184LL) == 0)
                return depth;
            break;
        case 46:
            if ((tvar & 13LL) == 0)
                return depth;
            if ((tvar & 28LL) == 0)
                return depth;
            if ((tvar & 33686016LL) == 0)
                return depth;
            if ((tvar & 3584LL) == 0)
                return depth;
            if ((tvar & 11264LL) == 0)
                return depth;
            if ((tvar & 17039424LL) == 0)
                return depth;
            if ((tvar & 1090781184LL) == 0)
                return depth;
            break;
        case 48:
            if ((tvar & 28LL) == 0)
                return depth;
            if ((tvar & 88LL) == 0)
                return depth;
            if ((tvar & 8521728LL) == 0)
                return depth;
            break;
        case 49:
            if ((tvar & 446676598784LL) == 0)
                return depth;
            if ((tvar & 962072674304LL) == 0)
                return depth;
            if ((tvar & 541097984LL) == 0)
                return depth;
            if ((tvar & 1090781184LL) == 0)
                return depth;
            if ((tvar & 28LL) == 0)
                return depth;
            if ((tvar & 88LL) == 0)
                return depth;
            if ((tvar & 8521728LL) == 0)
                return depth;
            break;
        case 50:
            if ((tvar & 3489660928LL) == 0)
                return depth;
            if ((tvar & 7516192768LL) == 0)
                return depth;
            if ((tvar & 4227328LL) == 0)
                return depth;
            if ((tvar & 8521728LL) == 0)
                return depth;
            if ((tvar & 34368258048LL) == 0)
                return depth;
            if ((tvar & 28LL) == 0)
                return depth;
            if ((tvar & 88LL) == 0)
                return depth;
            break;
        case 51:
            if ((tvar & 27262976LL) == 0)
                return depth;
            if ((tvar & 58720256LL) == 0)
                return depth;
            if ((tvar & 33026LL) == 0)
                return depth;
            if ((tvar & 275951665152LL) == 0)
                return depth;
            if ((tvar & 66576LL) == 0)
                return depth;
            if ((tvar & 268502016LL) == 0)
                return depth;
            if ((tvar & 28LL) == 0)
                return depth;
            if ((tvar & 88LL) == 0)
                return depth;
            if ((tvar & 8521728LL) == 0)
                return depth;
            break;
        case 52:
            if ((tvar & 212992LL) == 0)
                return depth;
            if ((tvar & 458752LL) == 0)
                return depth;
            if ((tvar & 2155872384LL) == 0)
                return depth;
            if ((tvar & 551911686144LL) == 0)
                return depth;
            if ((tvar & 2097672LL) == 0)
                return depth;
            if ((tvar & 28LL) == 0)
                return depth;
            if ((tvar & 88LL) == 0)
                return depth;
            if ((tvar & 8521728LL) == 0)
                return depth;
            break;
        case 53:
            if ((tvar & 1664LL) == 0)
                return depth;
            if ((tvar & 3584LL) == 0)
                return depth;
            if ((tvar & 16842753LL) == 0)
                return depth;
            if ((tvar & 4311810048LL) == 0)
                return depth;
            if ((tvar & 28LL) == 0)
                return depth;
            if ((tvar & 88LL) == 0)
                return depth;
            if ((tvar & 8521728LL) == 0)
                return depth;
            break;
        case 54:
            if ((tvar & 13LL) == 0)
                return depth;
            if ((tvar & 28LL) == 0)
                return depth;
            if ((tvar & 33686016LL) == 0)
                return depth;
            if ((tvar & 88LL) == 0)
                return depth;
            if ((tvar & 8521728LL) == 0)
                return depth;
            break;
        }
        switch ((left1) | (left7 << 3))
        {
        case 1:
            if ((tvar & 481036337152LL) == 0)
                return depth;
            if ((tvar & 270548992LL) == 0)
                return depth;
            if ((tvar & 545390592LL) == 0)
                return depth;
            break;
        case 2:
            if ((tvar & 3758096384LL) == 0)
                return depth;
            if ((tvar & 2113664LL) == 0)
                return depth;
            if ((tvar & 4260864LL) == 0)
                return depth;
            break;
        case 3:
            if ((tvar & 29360128LL) == 0)
                return depth;
            if ((tvar & 16513LL) == 0)
                return depth;
            if ((tvar & 33288LL) == 0)
                return depth;
            break;
        case 4:
            if ((tvar & 229376LL) == 0)
                return depth;
            if ((tvar & 275955843072LL) == 0)
                return depth;
            break;
        case 5:
            if ((tvar & 1792LL) == 0)
                return depth;
            if ((tvar & 2155905024LL) == 0)
                return depth;
            break;
        case 6:
            if ((tvar & 14LL) == 0)
                return depth;
            if ((tvar & 16843008LL) == 0)
                return depth;
            break;
        case 8:
            if ((tvar & 1924145348608LL) == 0)
                return depth;
            if ((tvar & 17315135488LL) == 0)
                return depth;
            if ((tvar & 8623620096LL) == 0)
                return depth;
            break;
        case 9:
            if ((tvar & 481036337152LL) == 0)
                return depth;
            if ((tvar & 270548992LL) == 0)
                return depth;
            if ((tvar & 545390592LL) == 0)
                return depth;
            if ((tvar & 1924145348608LL) == 0)
                return depth;
            if ((tvar & 17315135488LL) == 0)
                return depth;
            if ((tvar & 8623620096LL) == 0)
                return depth;
            break;
        case 10:
            if ((tvar & 3758096384LL) == 0)
                return depth;
            if ((tvar & 2113664LL) == 0)
                return depth;
            if ((tvar & 4260864LL) == 0)
                return depth;
            if ((tvar & 1924145348608LL) == 0)
                return depth;
            if ((tvar & 17315135488LL) == 0)
                return depth;
            if ((tvar & 8623620096LL) == 0)
                return depth;
            break;
        case 11:
            if ((tvar & 29360128LL) == 0)
                return depth;
            if ((tvar & 16513LL) == 0)
                return depth;
            if ((tvar & 33288LL) == 0)
                return depth;
            if ((tvar & 1924145348608LL) == 0)
                return depth;
            if ((tvar & 17315135488LL) == 0)
                return depth;
            if ((tvar & 8623620096LL) == 0)
                return depth;
            break;
        case 12:
            if ((tvar & 229376LL) == 0)
                return depth;
            if ((tvar & 275955843072LL) == 0)
                return depth;
            if ((tvar & 1924145348608LL) == 0)
                return depth;
            if ((tvar & 17315135488LL) == 0)
                return depth;
            if ((tvar & 8623620096LL) == 0)
                return depth;
            break;
        case 13:
            if ((tvar & 1792LL) == 0)
                return depth;
            if ((tvar & 2155905024LL) == 0)
                return depth;
            if ((tvar & 1924145348608LL) == 0)
                return depth;
            if ((tvar & 17315135488LL) == 0)
                return depth;
            if ((tvar & 8623620096LL) == 0)
                return depth;
            break;
        case 14:
            if ((tvar & 14LL) == 0)
                return depth;
            if ((tvar & 16843008LL) == 0)
                return depth;
            if ((tvar & 1924145348608LL) == 0)
                return depth;
            if ((tvar & 17315135488LL) == 0)
                return depth;
            if ((tvar & 8623620096LL) == 0)
                return depth;
            break;
        case 16:
            if ((tvar & 15032385536LL) == 0)
                return depth;
            if ((tvar & 135274496LL) == 0)
                return depth;
            if ((tvar & 67372032LL) == 0)
                return depth;
            break;
        case 17:
            if ((tvar & 481036337152LL) == 0)
                return depth;
            if ((tvar & 270548992LL) == 0)
                return depth;
            if ((tvar & 545390592LL) == 0)
                return depth;
            if ((tvar & 15032385536LL) == 0)
                return depth;
            if ((tvar & 135274496LL) == 0)
                return depth;
            if ((tvar & 67372032LL) == 0)
                return depth;
            break;
        case 18:
            if ((tvar & 3758096384LL) == 0)
                return depth;
            if ((tvar & 2113664LL) == 0)
                return depth;
            if ((tvar & 4260864LL) == 0)
                return depth;
            if ((tvar & 15032385536LL) == 0)
                return depth;
            if ((tvar & 135274496LL) == 0)
                return depth;
            if ((tvar & 67372032LL) == 0)
                return depth;
            break;
        case 19:
            if ((tvar & 29360128LL) == 0)
                return depth;
            if ((tvar & 16513LL) == 0)
                return depth;
            if ((tvar & 33288LL) == 0)
                return depth;
            if ((tvar & 15032385536LL) == 0)
                return depth;
            if ((tvar & 135274496LL) == 0)
                return depth;
            if ((tvar & 67372032LL) == 0)
                return depth;
            break;
        case 20:
            if ((tvar & 229376LL) == 0)
                return depth;
            if ((tvar & 275955843072LL) == 0)
                return depth;
            if ((tvar & 15032385536LL) == 0)
                return depth;
            if ((tvar & 135274496LL) == 0)
                return depth;
            if ((tvar & 67372032LL) == 0)
                return depth;
            break;
        case 21:
            if ((tvar & 1792LL) == 0)
                return depth;
            if ((tvar & 2155905024LL) == 0)
                return depth;
            if ((tvar & 15032385536LL) == 0)
                return depth;
            if ((tvar & 135274496LL) == 0)
                return depth;
            if ((tvar & 67372032LL) == 0)
                return depth;
            break;
        case 22:
            if ((tvar & 14LL) == 0)
                return depth;
            if ((tvar & 16843008LL) == 0)
                return depth;
            if ((tvar & 15032385536LL) == 0)
                return depth;
            if ((tvar & 135274496LL) == 0)
                return depth;
            if ((tvar & 67372032LL) == 0)
                return depth;
            break;
        case 24:
            if ((tvar & 117440512LL) == 0)
                return depth;
            if ((tvar & 1056832LL) == 0)
                return depth;
            if ((tvar & 526344LL) == 0)
                return depth;
            break;
        case 25:
            if ((tvar & 481036337152LL) == 0)
                return depth;
            if ((tvar & 270548992LL) == 0)
                return depth;
            if ((tvar & 545390592LL) == 0)
                return depth;
            if ((tvar & 117440512LL) == 0)
                return depth;
            if ((tvar & 1056832LL) == 0)
                return depth;
            if ((tvar & 526344LL) == 0)
                return depth;
            break;
        case 26:
            if ((tvar & 3758096384LL) == 0)
                return depth;
            if ((tvar & 2113664LL) == 0)
                return depth;
            if ((tvar & 4260864LL) == 0)
                return depth;
            if ((tvar & 117440512LL) == 0)
                return depth;
            if ((tvar & 1056832LL) == 0)
                return depth;
            if ((tvar & 526344LL) == 0)
                return depth;
            break;
        case 27:
            if ((tvar & 29360128LL) == 0)
                return depth;
            if ((tvar & 16513LL) == 0)
                return depth;
            if ((tvar & 33288LL) == 0)
                return depth;
            if ((tvar & 117440512LL) == 0)
                return depth;
            if ((tvar & 1056832LL) == 0)
                return depth;
            if ((tvar & 526344LL) == 0)
                return depth;
            break;
        case 28:
            if ((tvar & 229376LL) == 0)
                return depth;
            if ((tvar & 275955843072LL) == 0)
                return depth;
            if ((tvar & 117440512LL) == 0)
                return depth;
            if ((tvar & 1056832LL) == 0)
                return depth;
            if ((tvar & 526344LL) == 0)
                return depth;
            break;
        case 29:
            if ((tvar & 1792LL) == 0)
                return depth;
            if ((tvar & 2155905024LL) == 0)
                return depth;
            if ((tvar & 117440512LL) == 0)
                return depth;
            if ((tvar & 1056832LL) == 0)
                return depth;
            if ((tvar & 526344LL) == 0)
                return depth;
            break;
        case 30:
            if ((tvar & 14LL) == 0)
                return depth;
            if ((tvar & 16843008LL) == 0)
                return depth;
            if ((tvar & 117440512LL) == 0)
                return depth;
            if ((tvar & 1056832LL) == 0)
                return depth;
            if ((tvar & 526344LL) == 0)
                return depth;
            break;
        case 32:
            if ((tvar & 917504LL) == 0)
                return depth;
            if ((tvar & 279239983104LL) == 0)
                return depth;
            break;
        case 33:
            if ((tvar & 481036337152LL) == 0)
                return depth;
            if ((tvar & 270548992LL) == 0)
                return depth;
            if ((tvar & 545390592LL) == 0)
                return depth;
            if ((tvar & 917504LL) == 0)
                return depth;
            if ((tvar & 279239983104LL) == 0)
                return depth;
            break;
        case 34:
            if ((tvar & 3758096384LL) == 0)
                return depth;
            if ((tvar & 2113664LL) == 0)
                return depth;
            if ((tvar & 4260864LL) == 0)
                return depth;
            if ((tvar & 917504LL) == 0)
                return depth;
            if ((tvar & 279239983104LL) == 0)
                return depth;
            break;
        case 35:
            if ((tvar & 29360128LL) == 0)
                return depth;
            if ((tvar & 16513LL) == 0)
                return depth;
            if ((tvar & 33288LL) == 0)
                return depth;
            if ((tvar & 917504LL) == 0)
                return depth;
            if ((tvar & 279239983104LL) == 0)
                return depth;
            break;
        case 36:
            if ((tvar & 229376LL) == 0)
                return depth;
            if ((tvar & 275955843072LL) == 0)
                return depth;
            if ((tvar & 917504LL) == 0)
                return depth;
            if ((tvar & 279239983104LL) == 0)
                return depth;
            break;
        case 37:
            if ((tvar & 1792LL) == 0)
                return depth;
            if ((tvar & 2155905024LL) == 0)
                return depth;
            if ((tvar & 917504LL) == 0)
                return depth;
            if ((tvar & 279239983104LL) == 0)
                return depth;
            break;
        case 38:
            if ((tvar & 14LL) == 0)
                return depth;
            if ((tvar & 16843008LL) == 0)
                return depth;
            if ((tvar & 917504LL) == 0)
                return depth;
            if ((tvar & 279239983104LL) == 0)
                return depth;
            break;
        case 40:
            if ((tvar & 7168LL) == 0)
                return depth;
            if ((tvar & 2181562368LL) == 0)
                return depth;
            break;
        case 41:
            if ((tvar & 481036337152LL) == 0)
                return depth;
            if ((tvar & 270548992LL) == 0)
                return depth;
            if ((tvar & 545390592LL) == 0)
                return depth;
            if ((tvar & 7168LL) == 0)
                return depth;
            if ((tvar & 2181562368LL) == 0)
                return depth;
            break;
        case 42:
            if ((tvar & 3758096384LL) == 0)
                return depth;
            if ((tvar & 2113664LL) == 0)
                return depth;
            if ((tvar & 4260864LL) == 0)
                return depth;
            if ((tvar & 7168LL) == 0)
                return depth;
            if ((tvar & 2181562368LL) == 0)
                return depth;
            break;
        case 43:
            if ((tvar & 29360128LL) == 0)
                return depth;
            if ((tvar & 16513LL) == 0)
                return depth;
            if ((tvar & 33288LL) == 0)
                return depth;
            if ((tvar & 7168LL) == 0)
                return depth;
            if ((tvar & 2181562368LL) == 0)
                return depth;
            break;
        case 44:
            if ((tvar & 229376LL) == 0)
                return depth;
            if ((tvar & 275955843072LL) == 0)
                return depth;
            if ((tvar & 7168LL) == 0)
                return depth;
            if ((tvar & 2181562368LL) == 0)
                return depth;
            break;
        case 45:
            if ((tvar & 1792LL) == 0)
                return depth;
            if ((tvar & 2155905024LL) == 0)
                return depth;
            if ((tvar & 7168LL) == 0)
                return depth;
            if ((tvar & 2181562368LL) == 0)
                return depth;
            break;
        case 46:
            if ((tvar & 14LL) == 0)
                return depth;
            if ((tvar & 16843008LL) == 0)
                return depth;
            if ((tvar & 7168LL) == 0)
                return depth;
            if ((tvar & 2181562368LL) == 0)
                return depth;
            break;
        case 48:
            if ((tvar & 56LL) == 0)
                return depth;
            if ((tvar & 17043456LL) == 0)
                return depth;
            break;
        case 49:
            if ((tvar & 481036337152LL) == 0)
                return depth;
            if ((tvar & 270548992LL) == 0)
                return depth;
            if ((tvar & 545390592LL) == 0)
                return depth;
            if ((tvar & 56LL) == 0)
                return depth;
            if ((tvar & 17043456LL) == 0)
                return depth;
            break;
        case 50:
            if ((tvar & 3758096384LL) == 0)
                return depth;
            if ((tvar & 2113664LL) == 0)
                return depth;
            if ((tvar & 4260864LL) == 0)
                return depth;
            if ((tvar & 56LL) == 0)
                return depth;
            if ((tvar & 17043456LL) == 0)
                return depth;
            break;
        case 51:
            if ((tvar & 29360128LL) == 0)
                return depth;
            if ((tvar & 16513LL) == 0)
                return depth;
            if ((tvar & 33288LL) == 0)
                return depth;
            if ((tvar & 56LL) == 0)
                return depth;
            if ((tvar & 17043456LL) == 0)
                return depth;
            break;
        case 52:
            if ((tvar & 229376LL) == 0)
                return depth;
            if ((tvar & 275955843072LL) == 0)
                return depth;
            if ((tvar & 56LL) == 0)
                return depth;
            if ((tvar & 17043456LL) == 0)
                return depth;
            break;
        case 53:
            if ((tvar & 1792LL) == 0)
                return depth;
            if ((tvar & 2155905024LL) == 0)
                return depth;
            if ((tvar & 56LL) == 0)
                return depth;
            if ((tvar & 17043456LL) == 0)
                return depth;
            break;
        case 54:
            if ((tvar & 14LL) == 0)
                return depth;
            if ((tvar & 16843008LL) == 0)
                return depth;
            if ((tvar & 56LL) == 0)
                return depth;
            if ((tvar & 17043456LL) == 0)
                return depth;
            break;
        }
        depth--;
        if (depth == 0)
            return 0;
        int alphabeg, maxscore = depth - 2;
        if (depth > MIN_CACHE_DEPTH)
        {
#if defined(__x86_64__)
            uint16_t it = binary_search(&main_gmap, cfir | (csec << 7));
            if (it != INVALID_RESULT)
            {
                uint8_t flag = (it >> 8);
                int8_t score = it;
                if (flag & 1)
                {
                    if (score <= alpha) // if current alpha >= cached alpha then the alpha during evaluation wont change, thus we can return the current alpha
                        return alpha;
                    if (flag > 1) // if the cached alpha is exact and it is bigger than the current alpha (because of the condition above) then we can return it
                        return score;
                    beta = min(beta, (int)score);
                    // cached alpha is lower bound
                }
                else
                {
                    if (score > alpha)
                    {
                        if (score >= beta)
                            return score;
                        alpha = score;
                    }
                }
            }
#else
            auto it = TranspositionTable.find(cfir | (csec << 7));
            if (it != TranspositionTable.end())
            {
                uint8_t flag = (it->second >> 8);
                int8_t score = it->second;
                if (flag & 1)
                {
                    if (score <= alpha) // if current alpha >= cached alpha then the alpha during evaluation wont change, thus we can return the current alpha
                        return alpha;
                    if (flag > 1) // if the cached alpha is exact and it is bigger than the current alpha (because of the condition above) then we can return it
                        return score;
                    beta = min(beta, (int)score);
                    // cached alpha is lower bound
                }
                else
                {
                    if (score > alpha)
                    {
                        if (score >= beta)
                            return score;
                        alpha = score;
                    }
                }
            }
#endif
            alphabeg = alpha;
        }
        // 888070
        if (depth > MIN_SCORE_DEPTH)
        {
            int indexes[7] = {3, 4, 2, 5, 1, 6, 0};
            int scores[7] = {0, 0, 0, 0, 0, 0, 0};
            if (left4)
                scores[0] = scoremove(tvar, 3, left4);
            if (left5)
                scores[1] = scoremove(tvar, 4, left5);
            if (left3)
                scores[2] = scoremove(tvar, 2, left3);
            if (left6)
                scores[3] = scoremove(tvar, 5, left6);
            if (left2)
                scores[4] = scoremove(tvar, 1, left2);
            if (left7)
                scores[5] = scoremove(tvar, 6, left7);
            if (left1)
                scores[6] = scoremove(tvar, 0, left1);
            sorter(indexes[0], indexes[1], indexes[2], indexes[3], indexes[4], indexes[5], indexes[6], scores[0], scores[1], scores[2], scores[3], scores[4], scores[5], scores[6]);
            for (int i = 0; i < 7; ++i)
                switch (indexes[i])
                {
                case 0:
                    if (left1)
                    {
                        int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (42 - (left1) * 7)), csec ^ (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7);
                        if (reschild > maxscore)
                            return reschild;
                        if (reschild > alpha)
                        {
                            if (beta <= reschild)
                            {
                                if (depth > MIN_CACHE_DEPTH)
                                    insert(cfir | (csec << 7), uint8_t(reschild));
                                return reschild;
                            }
                            alpha = reschild;
                        }
                    }
                    break;
                case 1:
                    if (left2)
                    {
                        int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (43 - (left2) * 7)), csec ^ (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7);
                        if (reschild > maxscore)
                            return reschild;
                        if (reschild > alpha)
                        {
                            if (beta <= reschild)
                            {
                                if (depth > MIN_CACHE_DEPTH)
                                    insert(cfir | (csec << 7), uint8_t(reschild));
                                return reschild;
                            }
                            alpha = reschild;
                        }
                    }
                    break;
                case 2:
                    if (left3)
                    {
                        int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (44 - (left3) * 7)), csec ^ (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7);
                        if (reschild > maxscore)
                            return reschild;
                        if (reschild > alpha)
                        {
                            if (beta <= reschild)
                            {
                                return reschild;
                            }
                            alpha = reschild;
                        }
                    }
                    break;
                case 3:
                    if (left4)
                    {
                        int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (45 - (left4) * 7)), csec ^ (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7);
                        if (reschild > maxscore)
                            return reschild;
                        if (reschild > alpha)
                        {
                            if (beta <= reschild)
                            {
                                return reschild;
                            }
                            alpha = reschild;
                        }
                    }
                    break;
                case 4:
                    if (left5)
                    {
                        int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (46 - (left5) * 7)), csec ^ (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7);
                        if (reschild > maxscore)
                            return reschild;
                        if (reschild > alpha)
                        {
                            if (beta <= reschild)
                            {
                                return reschild;
                            }
                            alpha = reschild;
                        }
                    }
                    break;
                case 5:
                    if (left6)
                    {
                        int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (47 - (left6) * 7)), csec ^ (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7);
                        if (reschild > maxscore)
                            return reschild;
                        if (reschild > alpha)
                        {
                            if (beta <= reschild)
                            {
                                if (depth > MIN_CACHE_DEPTH)
                                    insert(cfir | (csec << 7), uint8_t(reschild));
                                return reschild;
                            }
                            alpha = reschild;
                        }
                    }
                    break;
                case 6:
                    if (left7)
                    {
                        int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (48 - (left7) * 7)), csec ^ (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1);
                        if (reschild > maxscore)
                            return reschild;
                        if (reschild > alpha)
                        {
                            if (beta <= reschild)
                            {
                                if (depth > MIN_CACHE_DEPTH)
                                    insert(cfir | (csec << 7), uint8_t(reschild));
                                return reschild;
                            }
                            alpha = reschild;
                        }
                    }
                    break;
                }
        }
        else
        {
            if (left4)
            {
                int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (45 - (left4) * 7)), csec ^ (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7);
                if (reschild > maxscore)
                    return reschild;
                if (reschild > alpha)
                {
                    if (beta <= reschild)
                    {
                        return reschild;
                    }
                    alpha = reschild;
                }
            }
            if (left3)
            {
                int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (44 - (left3) * 7)), csec ^ (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7);
                if (reschild > maxscore)
                    return reschild;
                if (reschild > alpha)
                {
                    if (beta <= reschild)
                    {
                        return reschild;
                    }
                    alpha = reschild;
                }
            }
            if (left5)
            {
                int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (46 - (left5) * 7)), csec ^ (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7);
                if (reschild > maxscore)
                    return reschild;
                if (reschild > alpha)
                {
                    if (beta <= reschild)
                    {
                        return reschild;
                    }
                    alpha = reschild;
                }
            }
            if (left2)
            {
                int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (43 - (left2) * 7)), csec ^ (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7);
                if (reschild > maxscore)
                    return reschild;
                if (reschild > alpha)
                {
                    if (beta <= reschild)
                    {
                        if (depth > MIN_CACHE_DEPTH)
                            insert(cfir | (csec << 7), uint8_t(reschild));
                        return reschild;
                    }
                    alpha = reschild;
                }
            }
            if (left6)
            {
                int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (47 - (left6) * 7)), csec ^ (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7);
                if (reschild > maxscore)
                    return reschild;
                if (reschild > alpha)
                {
                    if (beta <= reschild)
                    {
                        if (depth > MIN_CACHE_DEPTH)
                            insert(cfir | (csec << 7), uint8_t(reschild));
                        return reschild;
                    }
                    alpha = reschild;
                }
            }
            if (left1)
            {
                int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (42 - (left1) * 7)), csec ^ (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7);
                if (reschild > maxscore)
                    return reschild;
                if (reschild > alpha)
                {
                    if (beta <= reschild)
                    {
                        if (depth > MIN_CACHE_DEPTH)
                            insert(cfir | (csec << 7), uint8_t(reschild));
                        return reschild;
                    }
                    alpha = reschild;
                }
            }
            if (left7)
            {
                int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (48 - (left7) * 7)), csec ^ (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1);
                if (reschild > maxscore)
                    return reschild;
                if (reschild > alpha)
                {
                    if (beta <= reschild)
                    {
                        if (depth > MIN_CACHE_DEPTH)
                            insert(cfir | (csec << 7), uint8_t(reschild));
                        return reschild;
                    }
                    alpha = reschild;
                }
            }
        }
        if (depth > MIN_CACHE_DEPTH)
        {
            insert(cfir | (csec << 7), static_cast<uint16_t>((uint8_t)alpha | ((alpha > alphabeg) ? uint16_t(768) : uint16_t(256))));
        }
        return alpha;
    }
    else
    {
        uint64_t tvar = cfir | csec;
        if (left4)
            switch (left4)
            {
            case 6:
                if ((tvar & 7LL) == 0)
                    return -depth;
                if ((tvar & 22LL) == 0)
                    return -depth;
                if ((tvar & 52LL) == 0)
                    return -depth;
                if ((tvar & 112LL) == 0)
                    return -depth;
                if ((tvar & 134744064LL) == 0)
                    return -depth;
                if ((tvar & 2130432LL) == 0)
                    return -depth;
                break;
            case 5:
                if ((tvar & 896LL) == 0)
                    return -depth;
                if ((tvar & 2816LL) == 0)
                    return -depth;
                if ((tvar & 6656LL) == 0)
                    return -depth;
                if ((tvar & 14336LL) == 0)
                    return -depth;
                if ((tvar & 67371012LL) == 0)
                    return -depth;
                if ((tvar & 17247240192LL) == 0)
                    return -depth;
                if ((tvar & 4259856LL) == 0)
                    return -depth;
                if ((tvar & 272695296LL) == 0)
                    return -depth;
                break;
            case 4:
                if ((tvar & 114688LL) == 0)
                    return -depth;
                if ((tvar & 360448LL) == 0)
                    return -depth;
                if ((tvar & 851968LL) == 0)
                    return -depth;
                if ((tvar & 1835008LL) == 0)
                    return -depth;
                if ((tvar & 33554946LL) == 0)
                    return -depth;
                if ((tvar & 8623489536LL) == 0)
                    return -depth;
                if ((tvar & 2207646744576LL) == 0)
                    return -depth;
                if ((tvar & 8390688LL) == 0)
                    return -depth;
                if ((tvar & 545261568LL) == 0)
                    return -depth;
                if ((tvar & 34904997888LL) == 0)
                    return -depth;
                break;
            case 3:
                if ((tvar & 14680064LL) == 0)
                    return -depth;
                if ((tvar & 46137344LL) == 0)
                    return -depth;
                if ((tvar & 109051904LL) == 0)
                    return -depth;
                if ((tvar & 234881024LL) == 0)
                    return -depth;
                if ((tvar & 132104LL) == 0)
                    return -depth;
                if ((tvar & 65793LL) == 0)
                    return -depth;
                if ((tvar & 4295033088LL) == 0)
                    return -depth;
                if ((tvar & 1103806660608LL) == 0)
                    return -depth;
                if ((tvar & 266304LL) == 0)
                    return -depth;
                if ((tvar & 1074008064LL) == 0)
                    return -depth;
                if ((tvar & 69793480704LL) == 0)
                    return -depth;
                break;
            case 2:
                if ((tvar & 1879048192LL) == 0)
                    return -depth;
                if ((tvar & 5905580032LL) == 0)
                    return -depth;
                if ((tvar & 13958643712LL) == 0)
                    return -depth;
                if ((tvar & 30064771072LL) == 0)
                    return -depth;
                if ((tvar & 16909312LL) == 0)
                    return -depth;
                if ((tvar & 8421504LL) == 0)
                    return -depth;
                if ((tvar & 549764235264LL) == 0)
                    return -depth;
                if ((tvar & 34086912LL) == 0)
                    return -depth;
                if ((tvar & 137473032192LL) == 0)
                    return -depth;
                break;
            case 1:
                if ((tvar & 240518168576LL) == 0)
                    return -depth;
                if ((tvar & 755914244096LL) == 0)
                    return -depth;
                if ((tvar & 1786706395136LL) == 0)
                    return -depth;
                if ((tvar & 3848290697216LL) == 0)
                    return -depth;
                if ((tvar & 2164391936LL) == 0)
                    return -depth;
                if ((tvar & 1077952512LL) == 0)
                    return -depth;
                if ((tvar & 4363124736LL) == 0)
                    return -depth;
                break;
            }
        if (left3)
            switch (left3)
            {
            case 6:
                if ((tvar & 11LL) == 0)
                    return -depth;
                if ((tvar & 26LL) == 0)
                    return -depth;
                if ((tvar & 56LL) == 0)
                    return -depth;
                if ((tvar & 67372032LL) == 0)
                    return -depth;
                break;
            case 5:
                if ((tvar & 1408LL) == 0)
                    return -depth;
                if ((tvar & 3328LL) == 0)
                    return -depth;
                if ((tvar & 7168LL) == 0)
                    return -depth;
                if ((tvar & 33685506LL) == 0)
                    return -depth;
                if ((tvar & 8623620096LL) == 0)
                    return -depth;
                if ((tvar & 2129928LL) == 0)
                    return -depth;
                break;
            case 4:
                if ((tvar & 180224LL) == 0)
                    return -depth;
                if ((tvar & 425984LL) == 0)
                    return -depth;
                if ((tvar & 917504LL) == 0)
                    return -depth;
                if ((tvar & 16777473LL) == 0)
                    return -depth;
                if ((tvar & 4311744768LL) == 0)
                    return -depth;
                if ((tvar & 1103823372288LL) == 0)
                    return -depth;
                if ((tvar & 4195344LL) == 0)
                    return -depth;
                if ((tvar & 272630784LL) == 0)
                    return -depth;
                break;
            case 3:
                if ((tvar & 23068672LL) == 0)
                    return -depth;
                if ((tvar & 54525952LL) == 0)
                    return -depth;
                if ((tvar & 117440512LL) == 0)
                    return -depth;
                if ((tvar & 66052LL) == 0)
                    return -depth;
                if ((tvar & 2147516544LL) == 0)
                    return -depth;
                if ((tvar & 551903330304LL) == 0)
                    return -depth;
                if ((tvar & 133152LL) == 0)
                    return -depth;
                if ((tvar & 537004032LL) == 0)
                    return -depth;
                if ((tvar & 34896740352LL) == 0)
                    return -depth;
                break;
            case 2:
                if ((tvar & 2952790016LL) == 0)
                    return -depth;
                if ((tvar & 6979321856LL) == 0)
                    return -depth;
                if ((tvar & 15032385536LL) == 0)
                    return -depth;
                if ((tvar & 8454656LL) == 0)
                    return -depth;
                if ((tvar & 274882117632LL) == 0)
                    return -depth;
                if ((tvar & 17043456LL) == 0)
                    return -depth;
                if ((tvar & 68736516096LL) == 0)
                    return -depth;
                break;
            case 1:
                if ((tvar & 377957122048LL) == 0)
                    return -depth;
                if ((tvar & 893353197568LL) == 0)
                    return -depth;
                if ((tvar & 1924145348608LL) == 0)
                    return -depth;
                if ((tvar & 1082195968LL) == 0)
                    return -depth;
                if ((tvar & 2181562368LL) == 0)
                    return -depth;
                break;
            }
        if (left5)
            switch (left5)
            {
            case 6:
                if ((tvar & 14LL) == 0)
                    return -depth;
                if ((tvar & 44LL) == 0)
                    return -depth;
                if ((tvar & 104LL) == 0)
                    return -depth;
                if ((tvar & 4260864LL) == 0)
                    return -depth;
                break;
            case 5:
                if ((tvar & 1792LL) == 0)
                    return -depth;
                if ((tvar & 5632LL) == 0)
                    return -depth;
                if ((tvar & 13312LL) == 0)
                    return -depth;
                if ((tvar & 134742024LL) == 0)
                    return -depth;
                if ((tvar & 8519712LL) == 0)
                    return -depth;
                if ((tvar & 545390592LL) == 0)
                    return -depth;
                break;
            case 4:
                if ((tvar & 229376LL) == 0)
                    return -depth;
                if ((tvar & 720896LL) == 0)
                    return -depth;
                if ((tvar & 1703936LL) == 0)
                    return -depth;
                if ((tvar & 67109892LL) == 0)
                    return -depth;
                if ((tvar & 17246979072LL) == 0)
                    return -depth;
                if ((tvar & 16781376LL) == 0)
                    return -depth;
                if ((tvar & 1090523136LL) == 0)
                    return -depth;
                if ((tvar & 69809995776LL) == 0)
                    return -depth;
                break;
            case 3:
                if ((tvar & 29360128LL) == 0)
                    return -depth;
                if ((tvar & 92274688LL) == 0)
                    return -depth;
                if ((tvar & 218103808LL) == 0)
                    return -depth;
                if ((tvar & 264208LL) == 0)
                    return -depth;
                if ((tvar & 131586LL) == 0)
                    return -depth;
                if ((tvar & 8590066176LL) == 0)
                    return -depth;
                if ((tvar & 2207613321216LL) == 0)
                    return -depth;
                if ((tvar & 2148016128LL) == 0)
                    return -depth;
                if ((tvar & 139586961408LL) == 0)
                    return -depth;
                break;
            case 2:
                if ((tvar & 3758096384LL) == 0)
                    return -depth;
                if ((tvar & 11811160064LL) == 0)
                    return -depth;
                if ((tvar & 27917287424LL) == 0)
                    return -depth;
                if ((tvar & 33818624LL) == 0)
                    return -depth;
                if ((tvar & 16843008LL) == 0)
                    return -depth;
                if ((tvar & 1099528470528LL) == 0)
                    return -depth;
                if ((tvar & 274946064384LL) == 0)
                    return -depth;
                break;
            case 1:
                if ((tvar & 481036337152LL) == 0)
                    return -depth;
                if ((tvar & 1511828488192LL) == 0)
                    return -depth;
                if ((tvar & 3573412790272LL) == 0)
                    return -depth;
                if ((tvar & 4328783872LL) == 0)
                    return -depth;
                if ((tvar & 2155905024LL) == 0)
                    return -depth;
                break;
            }
        switch ((left2) | (left6 << 3))
        {
        case 1:
            if ((tvar & 446676598784LL) == 0)
                return -depth;
            if ((tvar & 962072674304LL) == 0)
                return -depth;
            if ((tvar & 541097984LL) == 0)
                return -depth;
            if ((tvar & 1090781184LL) == 0)
                return -depth;
            break;
        case 2:
            if ((tvar & 3489660928LL) == 0)
                return -depth;
            if ((tvar & 7516192768LL) == 0)
                return -depth;
            if ((tvar & 4227328LL) == 0)
                return -depth;
            if ((tvar & 8521728LL) == 0)
                return -depth;
            if ((tvar & 34368258048LL) == 0)
                return -depth;
            break;
        case 3:
            if ((tvar & 27262976LL) == 0)
                return -depth;
            if ((tvar & 58720256LL) == 0)
                return -depth;
            if ((tvar & 33026LL) == 0)
                return -depth;
            if ((tvar & 275951665152LL) == 0)
                return -depth;
            if ((tvar & 66576LL) == 0)
                return -depth;
            if ((tvar & 268502016LL) == 0)
                return -depth;
            break;
        case 4:
            if ((tvar & 212992LL) == 0)
                return -depth;
            if ((tvar & 458752LL) == 0)
                return -depth;
            if ((tvar & 2155872384LL) == 0)
                return -depth;
            if ((tvar & 551911686144LL) == 0)
                return -depth;
            if ((tvar & 2097672LL) == 0)
                return -depth;
            break;
        case 5:
            if ((tvar & 1664LL) == 0)
                return -depth;
            if ((tvar & 3584LL) == 0)
                return -depth;
            if ((tvar & 16842753LL) == 0)
                return -depth;
            if ((tvar & 4311810048LL) == 0)
                return -depth;
            break;
        case 6:
            if ((tvar & 13LL) == 0)
                return -depth;
            if ((tvar & 28LL) == 0)
                return -depth;
            if ((tvar & 33686016LL) == 0)
                return -depth;
            break;
        case 8:
            if ((tvar & 962072674304LL) == 0)
                return -depth;
            if ((tvar & 3023656976384LL) == 0)
                return -depth;
            if ((tvar & 8657567744LL) == 0)
                return -depth;
            if ((tvar & 4311810048LL) == 0)
                return -depth;
            break;
        case 9:
            if ((tvar & 446676598784LL) == 0)
                return -depth;
            if ((tvar & 962072674304LL) == 0)
                return -depth;
            if ((tvar & 541097984LL) == 0)
                return -depth;
            if ((tvar & 1090781184LL) == 0)
                return -depth;
            if ((tvar & 3023656976384LL) == 0)
                return -depth;
            if ((tvar & 8657567744LL) == 0)
                return -depth;
            if ((tvar & 4311810048LL) == 0)
                return -depth;
            break;
        case 10:
            if ((tvar & 3489660928LL) == 0)
                return -depth;
            if ((tvar & 7516192768LL) == 0)
                return -depth;
            if ((tvar & 4227328LL) == 0)
                return -depth;
            if ((tvar & 8521728LL) == 0)
                return -depth;
            if ((tvar & 34368258048LL) == 0)
                return -depth;
            if ((tvar & 962072674304LL) == 0)
                return -depth;
            if ((tvar & 3023656976384LL) == 0)
                return -depth;
            if ((tvar & 8657567744LL) == 0)
                return -depth;
            if ((tvar & 4311810048LL) == 0)
                return -depth;
            break;
        case 11:
            if ((tvar & 27262976LL) == 0)
                return -depth;
            if ((tvar & 58720256LL) == 0)
                return -depth;
            if ((tvar & 33026LL) == 0)
                return -depth;
            if ((tvar & 275951665152LL) == 0)
                return -depth;
            if ((tvar & 66576LL) == 0)
                return -depth;
            if ((tvar & 268502016LL) == 0)
                return -depth;
            if ((tvar & 962072674304LL) == 0)
                return -depth;
            if ((tvar & 3023656976384LL) == 0)
                return -depth;
            if ((tvar & 8657567744LL) == 0)
                return -depth;
            if ((tvar & 4311810048LL) == 0)
                return -depth;
            break;
        case 12:
            if ((tvar & 212992LL) == 0)
                return -depth;
            if ((tvar & 458752LL) == 0)
                return -depth;
            if ((tvar & 2155872384LL) == 0)
                return -depth;
            if ((tvar & 551911686144LL) == 0)
                return -depth;
            if ((tvar & 2097672LL) == 0)
                return -depth;
            if ((tvar & 962072674304LL) == 0)
                return -depth;
            if ((tvar & 3023656976384LL) == 0)
                return -depth;
            if ((tvar & 8657567744LL) == 0)
                return -depth;
            if ((tvar & 4311810048LL) == 0)
                return -depth;
            break;
        case 13:
            if ((tvar & 1664LL) == 0)
                return -depth;
            if ((tvar & 3584LL) == 0)
                return -depth;
            if ((tvar & 16842753LL) == 0)
                return -depth;
            if ((tvar & 4311810048LL) == 0)
                return -depth;
            if ((tvar & 962072674304LL) == 0)
                return -depth;
            if ((tvar & 3023656976384LL) == 0)
                return -depth;
            if ((tvar & 8657567744LL) == 0)
                return -depth;
            break;
        case 14:
            if ((tvar & 13LL) == 0)
                return -depth;
            if ((tvar & 28LL) == 0)
                return -depth;
            if ((tvar & 33686016LL) == 0)
                return -depth;
            if ((tvar & 962072674304LL) == 0)
                return -depth;
            if ((tvar & 3023656976384LL) == 0)
                return -depth;
            if ((tvar & 8657567744LL) == 0)
                return -depth;
            if ((tvar & 4311810048LL) == 0)
                return -depth;
            break;
        case 16:
            if ((tvar & 7516192768LL) == 0)
                return -depth;
            if ((tvar & 23622320128LL) == 0)
                return -depth;
            if ((tvar & 67637248LL) == 0)
                return -depth;
            if ((tvar & 33686016LL) == 0)
                return -depth;
            if ((tvar & 2199056941056LL) == 0)
                return -depth;
            break;
        case 17:
            if ((tvar & 446676598784LL) == 0)
                return -depth;
            if ((tvar & 962072674304LL) == 0)
                return -depth;
            if ((tvar & 541097984LL) == 0)
                return -depth;
            if ((tvar & 1090781184LL) == 0)
                return -depth;
            if ((tvar & 7516192768LL) == 0)
                return -depth;
            if ((tvar & 23622320128LL) == 0)
                return -depth;
            if ((tvar & 67637248LL) == 0)
                return -depth;
            if ((tvar & 33686016LL) == 0)
                return -depth;
            if ((tvar & 2199056941056LL) == 0)
                return -depth;
            break;
        case 18:
            if ((tvar & 3489660928LL) == 0)
                return -depth;
            if ((tvar & 7516192768LL) == 0)
                return -depth;
            if ((tvar & 4227328LL) == 0)
                return -depth;
            if ((tvar & 8521728LL) == 0)
                return -depth;
            if ((tvar & 34368258048LL) == 0)
                return -depth;
            if ((tvar & 23622320128LL) == 0)
                return -depth;
            if ((tvar & 67637248LL) == 0)
                return -depth;
            if ((tvar & 33686016LL) == 0)
                return -depth;
            if ((tvar & 2199056941056LL) == 0)
                return -depth;
            break;
        case 19:
            if ((tvar & 27262976LL) == 0)
                return -depth;
            if ((tvar & 58720256LL) == 0)
                return -depth;
            if ((tvar & 33026LL) == 0)
                return -depth;
            if ((tvar & 275951665152LL) == 0)
                return -depth;
            if ((tvar & 66576LL) == 0)
                return -depth;
            if ((tvar & 268502016LL) == 0)
                return -depth;
            if ((tvar & 7516192768LL) == 0)
                return -depth;
            if ((tvar & 23622320128LL) == 0)
                return -depth;
            if ((tvar & 67637248LL) == 0)
                return -depth;
            if ((tvar & 33686016LL) == 0)
                return -depth;
            if ((tvar & 2199056941056LL) == 0)
                return -depth;
            break;
        case 20:
            if ((tvar & 212992LL) == 0)
                return -depth;
            if ((tvar & 458752LL) == 0)
                return -depth;
            if ((tvar & 2155872384LL) == 0)
                return -depth;
            if ((tvar & 551911686144LL) == 0)
                return -depth;
            if ((tvar & 2097672LL) == 0)
                return -depth;
            if ((tvar & 7516192768LL) == 0)
                return -depth;
            if ((tvar & 23622320128LL) == 0)
                return -depth;
            if ((tvar & 67637248LL) == 0)
                return -depth;
            if ((tvar & 33686016LL) == 0)
                return -depth;
            if ((tvar & 2199056941056LL) == 0)
                return -depth;
            break;
        case 21:
            if ((tvar & 1664LL) == 0)
                return -depth;
            if ((tvar & 3584LL) == 0)
                return -depth;
            if ((tvar & 16842753LL) == 0)
                return -depth;
            if ((tvar & 4311810048LL) == 0)
                return -depth;
            if ((tvar & 7516192768LL) == 0)
                return -depth;
            if ((tvar & 23622320128LL) == 0)
                return -depth;
            if ((tvar & 67637248LL) == 0)
                return -depth;
            if ((tvar & 33686016LL) == 0)
                return -depth;
            if ((tvar & 2199056941056LL) == 0)
                return -depth;
            break;
        case 22:
            if ((tvar & 13LL) == 0)
                return -depth;
            if ((tvar & 28LL) == 0)
                return -depth;
            if ((tvar & 33686016LL) == 0)
                return -depth;
            if ((tvar & 7516192768LL) == 0)
                return -depth;
            if ((tvar & 23622320128LL) == 0)
                return -depth;
            if ((tvar & 67637248LL) == 0)
                return -depth;
            if ((tvar & 2199056941056LL) == 0)
                return -depth;
            break;
        case 24:
            if ((tvar & 58720256LL) == 0)
                return -depth;
            if ((tvar & 184549376LL) == 0)
                return -depth;
            if ((tvar & 528416LL) == 0)
                return -depth;
            if ((tvar & 263172LL) == 0)
                return -depth;
            if ((tvar & 17180132352LL) == 0)
                return -depth;
            if ((tvar & 279173922816LL) == 0)
                return -depth;
            break;
        case 25:
            if ((tvar & 446676598784LL) == 0)
                return -depth;
            if ((tvar & 962072674304LL) == 0)
                return -depth;
            if ((tvar & 541097984LL) == 0)
                return -depth;
            if ((tvar & 1090781184LL) == 0)
                return -depth;
            if ((tvar & 58720256LL) == 0)
                return -depth;
            if ((tvar & 184549376LL) == 0)
                return -depth;
            if ((tvar & 528416LL) == 0)
                return -depth;
            if ((tvar & 263172LL) == 0)
                return -depth;
            if ((tvar & 17180132352LL) == 0)
                return -depth;
            if ((tvar & 279173922816LL) == 0)
                return -depth;
            break;
        case 26:
            if ((tvar & 3489660928LL) == 0)
                return -depth;
            if ((tvar & 7516192768LL) == 0)
                return -depth;
            if ((tvar & 4227328LL) == 0)
                return -depth;
            if ((tvar & 8521728LL) == 0)
                return -depth;
            if ((tvar & 34368258048LL) == 0)
                return -depth;
            if ((tvar & 58720256LL) == 0)
                return -depth;
            if ((tvar & 184549376LL) == 0)
                return -depth;
            if ((tvar & 528416LL) == 0)
                return -depth;
            if ((tvar & 263172LL) == 0)
                return -depth;
            if ((tvar & 17180132352LL) == 0)
                return -depth;
            if ((tvar & 279173922816LL) == 0)
                return -depth;
            break;
        case 27:
            if ((tvar & 27262976LL) == 0)
                return -depth;
            if ((tvar & 58720256LL) == 0)
                return -depth;
            if ((tvar & 33026LL) == 0)
                return -depth;
            if ((tvar & 275951665152LL) == 0)
                return -depth;
            if ((tvar & 66576LL) == 0)
                return -depth;
            if ((tvar & 268502016LL) == 0)
                return -depth;
            if ((tvar & 184549376LL) == 0)
                return -depth;
            if ((tvar & 528416LL) == 0)
                return -depth;
            if ((tvar & 263172LL) == 0)
                return -depth;
            if ((tvar & 17180132352LL) == 0)
                return -depth;
            if ((tvar & 279173922816LL) == 0)
                return -depth;
            break;
        case 28:
            if ((tvar & 212992LL) == 0)
                return -depth;
            if ((tvar & 458752LL) == 0)
                return -depth;
            if ((tvar & 2155872384LL) == 0)
                return -depth;
            if ((tvar & 551911686144LL) == 0)
                return -depth;
            if ((tvar & 2097672LL) == 0)
                return -depth;
            if ((tvar & 58720256LL) == 0)
                return -depth;
            if ((tvar & 184549376LL) == 0)
                return -depth;
            if ((tvar & 528416LL) == 0)
                return -depth;
            if ((tvar & 263172LL) == 0)
                return -depth;
            if ((tvar & 17180132352LL) == 0)
                return -depth;
            if ((tvar & 279173922816LL) == 0)
                return -depth;
            break;
        case 29:
            if ((tvar & 1664LL) == 0)
                return -depth;
            if ((tvar & 3584LL) == 0)
                return -depth;
            if ((tvar & 16842753LL) == 0)
                return -depth;
            if ((tvar & 4311810048LL) == 0)
                return -depth;
            if ((tvar & 58720256LL) == 0)
                return -depth;
            if ((tvar & 184549376LL) == 0)
                return -depth;
            if ((tvar & 528416LL) == 0)
                return -depth;
            if ((tvar & 263172LL) == 0)
                return -depth;
            if ((tvar & 17180132352LL) == 0)
                return -depth;
            if ((tvar & 279173922816LL) == 0)
                return -depth;
            break;
        case 30:
            if ((tvar & 13LL) == 0)
                return -depth;
            if ((tvar & 28LL) == 0)
                return -depth;
            if ((tvar & 33686016LL) == 0)
                return -depth;
            if ((tvar & 58720256LL) == 0)
                return -depth;
            if ((tvar & 184549376LL) == 0)
                return -depth;
            if ((tvar & 528416LL) == 0)
                return -depth;
            if ((tvar & 263172LL) == 0)
                return -depth;
            if ((tvar & 17180132352LL) == 0)
                return -depth;
            if ((tvar & 279173922816LL) == 0)
                return -depth;
            break;
        case 32:
            if ((tvar & 458752LL) == 0)
                return -depth;
            if ((tvar & 1441792LL) == 0)
                return -depth;
            if ((tvar & 134219784LL) == 0)
                return -depth;
            if ((tvar & 2181046272LL) == 0)
                return -depth;
            if ((tvar & 139619991552LL) == 0)
                return -depth;
            break;
        case 33:
            if ((tvar & 446676598784LL) == 0)
                return -depth;
            if ((tvar & 962072674304LL) == 0)
                return -depth;
            if ((tvar & 541097984LL) == 0)
                return -depth;
            if ((tvar & 1090781184LL) == 0)
                return -depth;
            if ((tvar & 458752LL) == 0)
                return -depth;
            if ((tvar & 1441792LL) == 0)
                return -depth;
            if ((tvar & 134219784LL) == 0)
                return -depth;
            if ((tvar & 2181046272LL) == 0)
                return -depth;
            if ((tvar & 139619991552LL) == 0)
                return -depth;
            break;
        case 34:
            if ((tvar & 3489660928LL) == 0)
                return -depth;
            if ((tvar & 7516192768LL) == 0)
                return -depth;
            if ((tvar & 4227328LL) == 0)
                return -depth;
            if ((tvar & 8521728LL) == 0)
                return -depth;
            if ((tvar & 34368258048LL) == 0)
                return -depth;
            if ((tvar & 458752LL) == 0)
                return -depth;
            if ((tvar & 1441792LL) == 0)
                return -depth;
            if ((tvar & 134219784LL) == 0)
                return -depth;
            if ((tvar & 2181046272LL) == 0)
                return -depth;
            if ((tvar & 139619991552LL) == 0)
                return -depth;
            break;
        case 35:
            if ((tvar & 27262976LL) == 0)
                return -depth;
            if ((tvar & 58720256LL) == 0)
                return -depth;
            if ((tvar & 33026LL) == 0)
                return -depth;
            if ((tvar & 275951665152LL) == 0)
                return -depth;
            if ((tvar & 66576LL) == 0)
                return -depth;
            if ((tvar & 268502016LL) == 0)
                return -depth;
            if ((tvar & 458752LL) == 0)
                return -depth;
            if ((tvar & 1441792LL) == 0)
                return -depth;
            if ((tvar & 134219784LL) == 0)
                return -depth;
            if ((tvar & 2181046272LL) == 0)
                return -depth;
            if ((tvar & 139619991552LL) == 0)
                return -depth;
            break;
        case 36:
            if ((tvar & 212992LL) == 0)
                return -depth;
            if ((tvar & 458752LL) == 0)
                return -depth;
            if ((tvar & 2155872384LL) == 0)
                return -depth;
            if ((tvar & 551911686144LL) == 0)
                return -depth;
            if ((tvar & 2097672LL) == 0)
                return -depth;
            if ((tvar & 1441792LL) == 0)
                return -depth;
            if ((tvar & 134219784LL) == 0)
                return -depth;
            if ((tvar & 2181046272LL) == 0)
                return -depth;
            if ((tvar & 139619991552LL) == 0)
                return -depth;
            break;
        case 37:
            if ((tvar & 1664LL) == 0)
                return -depth;
            if ((tvar & 3584LL) == 0)
                return -depth;
            if ((tvar & 16842753LL) == 0)
                return -depth;
            if ((tvar & 4311810048LL) == 0)
                return -depth;
            if ((tvar & 458752LL) == 0)
                return -depth;
            if ((tvar & 1441792LL) == 0)
                return -depth;
            if ((tvar & 134219784LL) == 0)
                return -depth;
            if ((tvar & 2181046272LL) == 0)
                return -depth;
            if ((tvar & 139619991552LL) == 0)
                return -depth;
            break;
        case 38:
            if ((tvar & 13LL) == 0)
                return -depth;
            if ((tvar & 28LL) == 0)
                return -depth;
            if ((tvar & 33686016LL) == 0)
                return -depth;
            if ((tvar & 458752LL) == 0)
                return -depth;
            if ((tvar & 1441792LL) == 0)
                return -depth;
            if ((tvar & 134219784LL) == 0)
                return -depth;
            if ((tvar & 2181046272LL) == 0)
                return -depth;
            if ((tvar & 139619991552LL) == 0)
                return -depth;
            break;
        case 40:
            if ((tvar & 3584LL) == 0)
                return -depth;
            if ((tvar & 11264LL) == 0)
                return -depth;
            if ((tvar & 17039424LL) == 0)
                return -depth;
            if ((tvar & 1090781184LL) == 0)
                return -depth;
            break;
        case 41:
            if ((tvar & 446676598784LL) == 0)
                return -depth;
            if ((tvar & 962072674304LL) == 0)
                return -depth;
            if ((tvar & 541097984LL) == 0)
                return -depth;
            if ((tvar & 1090781184LL) == 0)
                return -depth;
            if ((tvar & 3584LL) == 0)
                return -depth;
            if ((tvar & 11264LL) == 0)
                return -depth;
            if ((tvar & 17039424LL) == 0)
                return -depth;
            break;
        case 42:
            if ((tvar & 3489660928LL) == 0)
                return -depth;
            if ((tvar & 7516192768LL) == 0)
                return -depth;
            if ((tvar & 4227328LL) == 0)
                return -depth;
            if ((tvar & 8521728LL) == 0)
                return -depth;
            if ((tvar & 34368258048LL) == 0)
                return -depth;
            if ((tvar & 3584LL) == 0)
                return -depth;
            if ((tvar & 11264LL) == 0)
                return -depth;
            if ((tvar & 17039424LL) == 0)
                return -depth;
            if ((tvar & 1090781184LL) == 0)
                return -depth;
            break;
        case 43:
            if ((tvar & 27262976LL) == 0)
                return -depth;
            if ((tvar & 58720256LL) == 0)
                return -depth;
            if ((tvar & 33026LL) == 0)
                return -depth;
            if ((tvar & 275951665152LL) == 0)
                return -depth;
            if ((tvar & 66576LL) == 0)
                return -depth;
            if ((tvar & 268502016LL) == 0)
                return -depth;
            if ((tvar & 3584LL) == 0)
                return -depth;
            if ((tvar & 11264LL) == 0)
                return -depth;
            if ((tvar & 17039424LL) == 0)
                return -depth;
            if ((tvar & 1090781184LL) == 0)
                return -depth;
            break;
        case 44:
            if ((tvar & 212992LL) == 0)
                return -depth;
            if ((tvar & 458752LL) == 0)
                return -depth;
            if ((tvar & 2155872384LL) == 0)
                return -depth;
            if ((tvar & 551911686144LL) == 0)
                return -depth;
            if ((tvar & 2097672LL) == 0)
                return -depth;
            if ((tvar & 3584LL) == 0)
                return -depth;
            if ((tvar & 11264LL) == 0)
                return -depth;
            if ((tvar & 17039424LL) == 0)
                return -depth;
            if ((tvar & 1090781184LL) == 0)
                return -depth;
            break;
        case 45:
            if ((tvar & 1664LL) == 0)
                return -depth;
            if ((tvar & 3584LL) == 0)
                return -depth;
            if ((tvar & 16842753LL) == 0)
                return -depth;
            if ((tvar & 4311810048LL) == 0)
                return -depth;
            if ((tvar & 11264LL) == 0)
                return -depth;
            if ((tvar & 17039424LL) == 0)
                return -depth;
            if ((tvar & 1090781184LL) == 0)
                return -depth;
            break;
        case 46:
            if ((tvar & 13LL) == 0)
                return -depth;
            if ((tvar & 28LL) == 0)
                return -depth;
            if ((tvar & 33686016LL) == 0)
                return -depth;
            if ((tvar & 3584LL) == 0)
                return -depth;
            if ((tvar & 11264LL) == 0)
                return -depth;
            if ((tvar & 17039424LL) == 0)
                return -depth;
            if ((tvar & 1090781184LL) == 0)
                return -depth;
            break;
        case 48:
            if ((tvar & 28LL) == 0)
                return -depth;
            if ((tvar & 88LL) == 0)
                return -depth;
            if ((tvar & 8521728LL) == 0)
                return -depth;
            break;
        case 49:
            if ((tvar & 446676598784LL) == 0)
                return -depth;
            if ((tvar & 962072674304LL) == 0)
                return -depth;
            if ((tvar & 541097984LL) == 0)
                return -depth;
            if ((tvar & 1090781184LL) == 0)
                return -depth;
            if ((tvar & 28LL) == 0)
                return -depth;
            if ((tvar & 88LL) == 0)
                return -depth;
            if ((tvar & 8521728LL) == 0)
                return -depth;
            break;
        case 50:
            if ((tvar & 3489660928LL) == 0)
                return -depth;
            if ((tvar & 7516192768LL) == 0)
                return -depth;
            if ((tvar & 4227328LL) == 0)
                return -depth;
            if ((tvar & 8521728LL) == 0)
                return -depth;
            if ((tvar & 34368258048LL) == 0)
                return -depth;
            if ((tvar & 28LL) == 0)
                return -depth;
            if ((tvar & 88LL) == 0)
                return -depth;
            break;
        case 51:
            if ((tvar & 27262976LL) == 0)
                return -depth;
            if ((tvar & 58720256LL) == 0)
                return -depth;
            if ((tvar & 33026LL) == 0)
                return -depth;
            if ((tvar & 275951665152LL) == 0)
                return -depth;
            if ((tvar & 66576LL) == 0)
                return -depth;
            if ((tvar & 268502016LL) == 0)
                return -depth;
            if ((tvar & 28LL) == 0)
                return -depth;
            if ((tvar & 88LL) == 0)
                return -depth;
            if ((tvar & 8521728LL) == 0)
                return -depth;
            break;
        case 52:
            if ((tvar & 212992LL) == 0)
                return -depth;
            if ((tvar & 458752LL) == 0)
                return -depth;
            if ((tvar & 2155872384LL) == 0)
                return -depth;
            if ((tvar & 551911686144LL) == 0)
                return -depth;
            if ((tvar & 2097672LL) == 0)
                return -depth;
            if ((tvar & 28LL) == 0)
                return -depth;
            if ((tvar & 88LL) == 0)
                return -depth;
            if ((tvar & 8521728LL) == 0)
                return -depth;
            break;
        case 53:
            if ((tvar & 1664LL) == 0)
                return -depth;
            if ((tvar & 3584LL) == 0)
                return -depth;
            if ((tvar & 16842753LL) == 0)
                return -depth;
            if ((tvar & 4311810048LL) == 0)
                return -depth;
            if ((tvar & 28LL) == 0)
                return -depth;
            if ((tvar & 88LL) == 0)
                return -depth;
            if ((tvar & 8521728LL) == 0)
                return -depth;
            break;
        case 54:
            if ((tvar & 13LL) == 0)
                return -depth;
            if ((tvar & 28LL) == 0)
                return -depth;
            if ((tvar & 33686016LL) == 0)
                return -depth;
            if ((tvar & 88LL) == 0)
                return -depth;
            if ((tvar & 8521728LL) == 0)
                return -depth;
            break;
        }
        switch ((left1) | (left7 << 3))
        {
        case 1:
            if ((tvar & 481036337152LL) == 0)
                return -depth;
            if ((tvar & 270548992LL) == 0)
                return -depth;
            if ((tvar & 545390592LL) == 0)
                return -depth;
            break;
        case 2:
            if ((tvar & 3758096384LL) == 0)
                return -depth;
            if ((tvar & 2113664LL) == 0)
                return -depth;
            if ((tvar & 4260864LL) == 0)
                return -depth;
            break;
        case 3:
            if ((tvar & 29360128LL) == 0)
                return -depth;
            if ((tvar & 16513LL) == 0)
                return -depth;
            if ((tvar & 33288LL) == 0)
                return -depth;
            break;
        case 4:
            if ((tvar & 229376LL) == 0)
                return -depth;
            if ((tvar & 275955843072LL) == 0)
                return -depth;
            break;
        case 5:
            if ((tvar & 1792LL) == 0)
                return -depth;
            if ((tvar & 2155905024LL) == 0)
                return -depth;
            break;
        case 6:
            if ((tvar & 14LL) == 0)
                return -depth;
            if ((tvar & 16843008LL) == 0)
                return -depth;
            break;
        case 8:
            if ((tvar & 1924145348608LL) == 0)
                return -depth;
            if ((tvar & 17315135488LL) == 0)
                return -depth;
            if ((tvar & 8623620096LL) == 0)
                return -depth;
            break;
        case 9:
            if ((tvar & 481036337152LL) == 0)
                return -depth;
            if ((tvar & 270548992LL) == 0)
                return -depth;
            if ((tvar & 545390592LL) == 0)
                return -depth;
            if ((tvar & 1924145348608LL) == 0)
                return -depth;
            if ((tvar & 17315135488LL) == 0)
                return -depth;
            if ((tvar & 8623620096LL) == 0)
                return -depth;
            break;
        case 10:
            if ((tvar & 3758096384LL) == 0)
                return -depth;
            if ((tvar & 2113664LL) == 0)
                return -depth;
            if ((tvar & 4260864LL) == 0)
                return -depth;
            if ((tvar & 1924145348608LL) == 0)
                return -depth;
            if ((tvar & 17315135488LL) == 0)
                return -depth;
            if ((tvar & 8623620096LL) == 0)
                return -depth;
            break;
        case 11:
            if ((tvar & 29360128LL) == 0)
                return -depth;
            if ((tvar & 16513LL) == 0)
                return -depth;
            if ((tvar & 33288LL) == 0)
                return -depth;
            if ((tvar & 1924145348608LL) == 0)
                return -depth;
            if ((tvar & 17315135488LL) == 0)
                return -depth;
            if ((tvar & 8623620096LL) == 0)
                return -depth;
            break;
        case 12:
            if ((tvar & 229376LL) == 0)
                return -depth;
            if ((tvar & 275955843072LL) == 0)
                return -depth;
            if ((tvar & 1924145348608LL) == 0)
                return -depth;
            if ((tvar & 17315135488LL) == 0)
                return -depth;
            if ((tvar & 8623620096LL) == 0)
                return -depth;
            break;
        case 13:
            if ((tvar & 1792LL) == 0)
                return -depth;
            if ((tvar & 2155905024LL) == 0)
                return -depth;
            if ((tvar & 1924145348608LL) == 0)
                return -depth;
            if ((tvar & 17315135488LL) == 0)
                return -depth;
            if ((tvar & 8623620096LL) == 0)
                return -depth;
            break;
        case 14:
            if ((tvar & 14LL) == 0)
                return -depth;
            if ((tvar & 16843008LL) == 0)
                return -depth;
            if ((tvar & 1924145348608LL) == 0)
                return -depth;
            if ((tvar & 17315135488LL) == 0)
                return -depth;
            if ((tvar & 8623620096LL) == 0)
                return -depth;
            break;
        case 16:
            if ((tvar & 15032385536LL) == 0)
                return -depth;
            if ((tvar & 135274496LL) == 0)
                return -depth;
            if ((tvar & 67372032LL) == 0)
                return -depth;
            break;
        case 17:
            if ((tvar & 481036337152LL) == 0)
                return -depth;
            if ((tvar & 270548992LL) == 0)
                return -depth;
            if ((tvar & 545390592LL) == 0)
                return -depth;
            if ((tvar & 15032385536LL) == 0)
                return -depth;
            if ((tvar & 135274496LL) == 0)
                return -depth;
            if ((tvar & 67372032LL) == 0)
                return -depth;
            break;
        case 18:
            if ((tvar & 3758096384LL) == 0)
                return -depth;
            if ((tvar & 2113664LL) == 0)
                return -depth;
            if ((tvar & 4260864LL) == 0)
                return -depth;
            if ((tvar & 15032385536LL) == 0)
                return -depth;
            if ((tvar & 135274496LL) == 0)
                return -depth;
            if ((tvar & 67372032LL) == 0)
                return -depth;
            break;
        case 19:
            if ((tvar & 29360128LL) == 0)
                return -depth;
            if ((tvar & 16513LL) == 0)
                return -depth;
            if ((tvar & 33288LL) == 0)
                return -depth;
            if ((tvar & 15032385536LL) == 0)
                return -depth;
            if ((tvar & 135274496LL) == 0)
                return -depth;
            if ((tvar & 67372032LL) == 0)
                return -depth;
            break;
        case 20:
            if ((tvar & 229376LL) == 0)
                return -depth;
            if ((tvar & 275955843072LL) == 0)
                return -depth;
            if ((tvar & 15032385536LL) == 0)
                return -depth;
            if ((tvar & 135274496LL) == 0)
                return -depth;
            if ((tvar & 67372032LL) == 0)
                return -depth;
            break;
        case 21:
            if ((tvar & 1792LL) == 0)
                return -depth;
            if ((tvar & 2155905024LL) == 0)
                return -depth;
            if ((tvar & 15032385536LL) == 0)
                return -depth;
            if ((tvar & 135274496LL) == 0)
                return -depth;
            if ((tvar & 67372032LL) == 0)
                return -depth;
            break;
        case 22:
            if ((tvar & 14LL) == 0)
                return -depth;
            if ((tvar & 16843008LL) == 0)
                return -depth;
            if ((tvar & 15032385536LL) == 0)
                return -depth;
            if ((tvar & 135274496LL) == 0)
                return -depth;
            if ((tvar & 67372032LL) == 0)
                return -depth;
            break;
        case 24:
            if ((tvar & 117440512LL) == 0)
                return -depth;
            if ((tvar & 1056832LL) == 0)
                return -depth;
            if ((tvar & 526344LL) == 0)
                return -depth;
            break;
        case 25:
            if ((tvar & 481036337152LL) == 0)
                return -depth;
            if ((tvar & 270548992LL) == 0)
                return -depth;
            if ((tvar & 545390592LL) == 0)
                return -depth;
            if ((tvar & 117440512LL) == 0)
                return -depth;
            if ((tvar & 1056832LL) == 0)
                return -depth;
            if ((tvar & 526344LL) == 0)
                return -depth;
            break;
        case 26:
            if ((tvar & 3758096384LL) == 0)
                return -depth;
            if ((tvar & 2113664LL) == 0)
                return -depth;
            if ((tvar & 4260864LL) == 0)
                return -depth;
            if ((tvar & 117440512LL) == 0)
                return -depth;
            if ((tvar & 1056832LL) == 0)
                return -depth;
            if ((tvar & 526344LL) == 0)
                return -depth;
            break;
        case 27:
            if ((tvar & 29360128LL) == 0)
                return -depth;
            if ((tvar & 16513LL) == 0)
                return -depth;
            if ((tvar & 33288LL) == 0)
                return -depth;
            if ((tvar & 117440512LL) == 0)
                return -depth;
            if ((tvar & 1056832LL) == 0)
                return -depth;
            if ((tvar & 526344LL) == 0)
                return -depth;
            break;
        case 28:
            if ((tvar & 229376LL) == 0)
                return -depth;
            if ((tvar & 275955843072LL) == 0)
                return -depth;
            if ((tvar & 117440512LL) == 0)
                return -depth;
            if ((tvar & 1056832LL) == 0)
                return -depth;
            if ((tvar & 526344LL) == 0)
                return -depth;
            break;
        case 29:
            if ((tvar & 1792LL) == 0)
                return -depth;
            if ((tvar & 2155905024LL) == 0)
                return -depth;
            if ((tvar & 117440512LL) == 0)
                return -depth;
            if ((tvar & 1056832LL) == 0)
                return -depth;
            if ((tvar & 526344LL) == 0)
                return -depth;
            break;
        case 30:
            if ((tvar & 14LL) == 0)
                return -depth;
            if ((tvar & 16843008LL) == 0)
                return -depth;
            if ((tvar & 117440512LL) == 0)
                return -depth;
            if ((tvar & 1056832LL) == 0)
                return -depth;
            if ((tvar & 526344LL) == 0)
                return -depth;
            break;
        case 32:
            if ((tvar & 917504LL) == 0)
                return -depth;
            if ((tvar & 279239983104LL) == 0)
                return -depth;
            break;
        case 33:
            if ((tvar & 481036337152LL) == 0)
                return -depth;
            if ((tvar & 270548992LL) == 0)
                return -depth;
            if ((tvar & 545390592LL) == 0)
                return -depth;
            if ((tvar & 917504LL) == 0)
                return -depth;
            if ((tvar & 279239983104LL) == 0)
                return -depth;
            break;
        case 34:
            if ((tvar & 3758096384LL) == 0)
                return -depth;
            if ((tvar & 2113664LL) == 0)
                return -depth;
            if ((tvar & 4260864LL) == 0)
                return -depth;
            if ((tvar & 917504LL) == 0)
                return -depth;
            if ((tvar & 279239983104LL) == 0)
                return -depth;
            break;
        case 35:
            if ((tvar & 29360128LL) == 0)
                return -depth;
            if ((tvar & 16513LL) == 0)
                return -depth;
            if ((tvar & 33288LL) == 0)
                return -depth;
            if ((tvar & 917504LL) == 0)
                return -depth;
            if ((tvar & 279239983104LL) == 0)
                return -depth;
            break;
        case 36:
            if ((tvar & 229376LL) == 0)
                return -depth;
            if ((tvar & 275955843072LL) == 0)
                return -depth;
            if ((tvar & 917504LL) == 0)
                return -depth;
            if ((tvar & 279239983104LL) == 0)
                return -depth;
            break;
        case 37:
            if ((tvar & 1792LL) == 0)
                return -depth;
            if ((tvar & 2155905024LL) == 0)
                return -depth;
            if ((tvar & 917504LL) == 0)
                return -depth;
            if ((tvar & 279239983104LL) == 0)
                return -depth;
            break;
        case 38:
            if ((tvar & 14LL) == 0)
                return -depth;
            if ((tvar & 16843008LL) == 0)
                return -depth;
            if ((tvar & 917504LL) == 0)
                return -depth;
            if ((tvar & 279239983104LL) == 0)
                return -depth;
            break;
        case 40:
            if ((tvar & 7168LL) == 0)
                return -depth;
            if ((tvar & 2181562368LL) == 0)
                return -depth;
            break;
        case 41:
            if ((tvar & 481036337152LL) == 0)
                return -depth;
            if ((tvar & 270548992LL) == 0)
                return -depth;
            if ((tvar & 545390592LL) == 0)
                return -depth;
            if ((tvar & 7168LL) == 0)
                return -depth;
            if ((tvar & 2181562368LL) == 0)
                return -depth;
            break;
        case 42:
            if ((tvar & 3758096384LL) == 0)
                return -depth;
            if ((tvar & 2113664LL) == 0)
                return -depth;
            if ((tvar & 4260864LL) == 0)
                return -depth;
            if ((tvar & 7168LL) == 0)
                return -depth;
            if ((tvar & 2181562368LL) == 0)
                return -depth;
            break;
        case 43:
            if ((tvar & 29360128LL) == 0)
                return -depth;
            if ((tvar & 16513LL) == 0)
                return -depth;
            if ((tvar & 33288LL) == 0)
                return -depth;
            if ((tvar & 7168LL) == 0)
                return -depth;
            if ((tvar & 2181562368LL) == 0)
                return -depth;
            break;
        case 44:
            if ((tvar & 229376LL) == 0)
                return -depth;
            if ((tvar & 275955843072LL) == 0)
                return -depth;
            if ((tvar & 7168LL) == 0)
                return -depth;
            if ((tvar & 2181562368LL) == 0)
                return -depth;
            break;
        case 45:
            if ((tvar & 1792LL) == 0)
                return -depth;
            if ((tvar & 2155905024LL) == 0)
                return -depth;
            if ((tvar & 7168LL) == 0)
                return -depth;
            if ((tvar & 2181562368LL) == 0)
                return -depth;
            break;
        case 46:
            if ((tvar & 14LL) == 0)
                return -depth;
            if ((tvar & 16843008LL) == 0)
                return -depth;
            if ((tvar & 7168LL) == 0)
                return -depth;
            if ((tvar & 2181562368LL) == 0)
                return -depth;
            break;
        case 48:
            if ((tvar & 56LL) == 0)
                return -depth;
            if ((tvar & 17043456LL) == 0)
                return -depth;
            break;
        case 49:
            if ((tvar & 481036337152LL) == 0)
                return -depth;
            if ((tvar & 270548992LL) == 0)
                return -depth;
            if ((tvar & 545390592LL) == 0)
                return -depth;
            if ((tvar & 56LL) == 0)
                return -depth;
            if ((tvar & 17043456LL) == 0)
                return -depth;
            break;
        case 50:
            if ((tvar & 3758096384LL) == 0)
                return -depth;
            if ((tvar & 2113664LL) == 0)
                return -depth;
            if ((tvar & 4260864LL) == 0)
                return -depth;
            if ((tvar & 56LL) == 0)
                return -depth;
            if ((tvar & 17043456LL) == 0)
                return -depth;
            break;
        case 51:
            if ((tvar & 29360128LL) == 0)
                return -depth;
            if ((tvar & 16513LL) == 0)
                return -depth;
            if ((tvar & 33288LL) == 0)
                return -depth;
            if ((tvar & 56LL) == 0)
                return -depth;
            if ((tvar & 17043456LL) == 0)
                return -depth;
            break;
        case 52:
            if ((tvar & 229376LL) == 0)
                return -depth;
            if ((tvar & 275955843072LL) == 0)
                return -depth;
            if ((tvar & 56LL) == 0)
                return -depth;
            if ((tvar & 17043456LL) == 0)
                return -depth;
            break;
        case 53:
            if ((tvar & 1792LL) == 0)
                return -depth;
            if ((tvar & 2155905024LL) == 0)
                return -depth;
            if ((tvar & 56LL) == 0)
                return -depth;
            if ((tvar & 17043456LL) == 0)
                return -depth;
            break;
        case 54:
            if ((tvar & 14LL) == 0)
                return -depth;
            if ((tvar & 16843008LL) == 0)
                return -depth;
            if ((tvar & 56LL) == 0)
                return -depth;
            if ((tvar & 17043456LL) == 0)
                return -depth;
            break;
        }
        depth--;
        if (depth == 0)
            return 0;
        int betabeg, minscore = 2 - depth;
        if (depth > MIN_CACHE_DEPTH)
        {
#if defined(__x86_64__)
            uint16_t it = binary_search(&main_gmap, cfir | (csec << 7));
            if (it != INVALID_RESULT)
            {
                uint8_t flag = (it >> 8);
                int8_t score = it;
                if (flag & 1)
                {
                    if (score >= beta) // if current beta <= cached beta then the beta during evaluation wont change, thus we can return the current beta
                        return beta;
                    if (flag > 1) // if the cached beta is exact and it is smaller than the current beta (because of the condition above) then we can return it
                        return score;
                    alpha = max(alpha, (int)score);
                    // cached beta is upper bound
                }
                else
                {
                    if (score < beta)
                    {
                        if (score <= alpha)
                            return score;
                        beta = score;
                    }
                }
            }
#else
            auto it = TranspositionTable.find(cfir | (csec << 7));
            if (it != TranspositionTable.end())
            {
                uint8_t flag = (it->second >> 8);
                int8_t score = it->second;
                if (flag & 1)
                {
                    if (score >= beta) // if current beta <= cached beta then the beta during evaluation wont change, thus we can return the current beta
                        return beta;
                    if (flag > 1) // if the cached beta is exact and it is smaller than the current beta (because of the condition above) then we can return it
                        return score;
                    alpha = max(alpha, (int)score);
                    // cached beta is upper bound
                }
                else
                {
                    if (score < beta)
                    {
                        if (score <= alpha)
                            return score;
                        beta = score;
                    }
                }
            }
#endif
            betabeg = beta;
        }
        if (left4)
        {
            int reschild = minimax(depth, true, beta, alpha, cfir, csec ^ (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7);
            if (reschild < minscore)
                return reschild;
            if (reschild < beta)
            {
                if (reschild <= alpha)
                {
                    return reschild;
                }
                beta = reschild;
            }
        }
        if (left3)
        {
            int reschild = minimax(depth, true, beta, alpha, cfir, csec ^ (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7);
            if (reschild < minscore)
                return reschild;
            if (reschild < beta)
            {
                if (reschild <= alpha)
                {
                    return reschild;
                }
                beta = reschild;
            }
        }
        if (left5)
        {
            int reschild = minimax(depth, true, beta, alpha, cfir, csec ^ (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7);
            if (reschild < minscore)
                return reschild;
            if (reschild < beta)
            {
                if (reschild <= alpha)
                {
                    return reschild;
                }
                beta = reschild;
            }
        }
        if (left2)
        {
            int reschild = minimax(depth, true, beta, alpha, cfir, csec ^ (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7);
            if (reschild < minscore)
                return reschild;
            if (reschild < beta)
            {
                if (reschild <= alpha)
                {
                    if (depth > MIN_CACHE_DEPTH)
                        insert(cfir | (csec << 7), uint8_t(reschild));
                    return reschild;
                }
                beta = reschild;
            }
        }
        if (left6)
        {
            int reschild = minimax(depth, true, beta, alpha, cfir, csec ^ (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7);
            if (reschild < minscore)
                return reschild;
            if (reschild < beta)
            {
                if (reschild <= alpha)
                {
                    if (depth > MIN_CACHE_DEPTH)
                        insert(cfir | (csec << 7), uint8_t(reschild));
                    return reschild;
                }
                beta = reschild;
            }
        }
        if (left1)
        {
            int reschild = minimax(depth, true, beta, alpha, cfir, csec ^ (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7);
            if (reschild < minscore)
                return reschild;
            if (reschild < beta)
            {
                if (reschild <= alpha)
                {
                    if (depth > MIN_CACHE_DEPTH)
                        insert(cfir | (csec << 7), uint8_t(reschild));
                    return reschild;
                }
                beta = reschild;
            }
        }
        if (left7)
        {
            int reschild = minimax(depth, true, beta, alpha, cfir, csec ^ (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1);
            if (reschild < minscore)
                return reschild;
            if (reschild < beta)
            {
                if (reschild <= alpha)
                {
                    if (depth > MIN_CACHE_DEPTH)
                        insert(cfir | (csec << 7), uint8_t(reschild));
                    return reschild;
                }
                beta = reschild;
            }
        }
        if (depth > MIN_CACHE_DEPTH)
        {
            insert(cfir | (csec << 7), static_cast<uint16_t>((uint8_t)beta | ((beta < betabeg) ? uint16_t(768) : uint16_t(256))));
        }
        return beta;
    }
}

pair<int, int> minimaxentry(int depth, bool player, int beta, int alpha, uint64_t cfir, uint64_t csec, uint32_t left1, uint32_t left2, uint32_t left3, uint32_t left4, uint32_t left5, uint32_t left6, uint32_t left7)
{
    // res4: 1 397602
    // res3: 1 26880
    // res5: 1 39074
    // res2: 1 161362
    // res6: 1 71138
    // res1: 1 2202
    // res7: 1 879
    if (player)
    {
        if (left4)
            if (cw(~cfir, 3, left4))
                return make_pair(3, depth);
        if (left3)
            if (cw(~cfir, 2, left3))
                return make_pair(2, depth);
        if (left5)
            if (cw(~cfir, 4, left5))
                return make_pair(4, depth);
        if (left2)
            if (cw(~cfir, 1, left2))
                return make_pair(1, depth);
        if (left6)
            if (cw(~cfir, 5, left6))
                return make_pair(5, depth);
        if (left1)
            if (cw(~cfir, 0, left1))
                return make_pair(0, depth);
        if (left7)
            if (cw(~cfir, 6, left7))
                return make_pair(6, depth);
        int ret = -1;
        auto start = high_resolution_clock::now();
        if (left4)
        {
            int reschild = minimax(depth - 1, false, alpha + 1, alpha, cfir | (1LL << (45 - (left4) * 7)), csec ^ (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7);
            if (reschild > alpha)
                reschild = minimax(depth - 1, false, beta, reschild, cfir | (1LL << (45 - (left4) * 7)), csec ^ (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7);
            if (showstats)
                printf("res4 ");
            if (reschild > alpha)
            {
                if (showstats)
                    printf("\033[32m== \033[0m%d ", reschild);
                alpha = reschild;
                ret = 3;
            }
            else if (showstats)
                printf("\033[31m<= \033[0m%d ", alpha);
        }
        auto end = high_resolution_clock::now();
        if (showstats)
            printf("%lu\n", duration_cast<milliseconds>(end - start).count());
        start = high_resolution_clock::now();
        if (left3)
        {
            int reschild = minimax(depth - 1, false, alpha + 1, alpha, cfir | (1LL << (44 - (left3) * 7)), csec ^ (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7);
            if (reschild > alpha)
                reschild = minimax(depth - 1, false, beta, reschild, cfir | (1LL << (44 - (left3) * 7)), csec ^ (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7);
            if (showstats)
                printf("res3 ");
            if (reschild > alpha)
            {
                if (showstats)
                    printf("\033[32m== \033[0m%d ", reschild);
                alpha = reschild;
                ret = 2;
            }
            else if (showstats)
                printf("\033[31m<= \033[0m%d ", alpha);
        }
        end = high_resolution_clock::now();
        if (showstats)
            printf("%lu\n", duration_cast<milliseconds>(end - start).count());
        start = high_resolution_clock::now();
        if (left5)
        {
            int reschild = minimax(depth - 1, false, alpha + 1, alpha, cfir | (1LL << (46 - (left5) * 7)), csec ^ (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7);
            if (reschild > alpha)
                reschild = minimax(depth - 1, false, beta, reschild, cfir | (1LL << (46 - (left5) * 7)), csec ^ (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7);
            if (showstats)
                printf("res5 ");
            if (reschild > alpha)
            {
                if (showstats)
                    printf("\033[32m== \033[0m%d ", reschild);
                alpha = reschild;
                ret = 4;
            }
            else if (showstats)
                printf("\033[31m<= \033[0m%d ", alpha);
        }
        end = high_resolution_clock::now();
        if (showstats)
            printf("%lu\n", duration_cast<milliseconds>(end - start).count());
        start = high_resolution_clock::now();
        if (left2)
        {
            int reschild = minimax(depth - 1, false, alpha + 1, alpha, cfir | (1LL << (43 - (left2) * 7)), csec ^ (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7);
            if (reschild > alpha)
                reschild = minimax(depth - 1, false, beta, reschild, cfir | (1LL << (43 - (left2) * 7)), csec ^ (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7);
            if (showstats)
                printf("res2 ");
            if (reschild > alpha)
            {
                if (showstats)
                    printf("\033[32m== \033[0m%d ", reschild);
                alpha = reschild;
                ret = 1;
            }
            else if (showstats)
                printf("\033[31m<= \033[0m%d ", alpha);
        }
        end = high_resolution_clock::now();
        if (showstats)
            printf("%lu\n", duration_cast<milliseconds>(end - start).count());
        start = high_resolution_clock::now();
        if (left6)
        {
            int reschild = minimax(depth - 1, false, alpha + 1, alpha, cfir | (1LL << (47 - (left6) * 7)), csec ^ (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7);
            if (reschild > alpha)
                reschild = minimax(depth - 1, false, beta, reschild, cfir | (1LL << (47 - (left6) * 7)), csec ^ (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7);
            if (showstats)
                printf("res6 ");
            if (reschild > alpha)
            {
                if (showstats)
                    printf("\033[32m== \033[0m%d ", reschild);
                alpha = reschild;
                ret = 5;
            }
            else if (showstats)
                printf("\033[31m<= \033[0m%d ", alpha);
        }
        end = high_resolution_clock::now();
        if (showstats)
            printf("%lu\n", duration_cast<milliseconds>(end - start).count());
        start = high_resolution_clock::now();
        if (left1)
        {
            int reschild = minimax(depth - 1, false, alpha + 1, alpha, cfir | (1LL << (42 - (left1) * 7)), csec ^ (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7);
            if (reschild > alpha)
                reschild = minimax(depth - 1, false, beta, reschild, cfir | (1LL << (42 - (left1) * 7)), csec ^ (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7);
            if (showstats)
                printf("res1 ");
            if (reschild > alpha)
            {
                if (showstats)
                    printf("\033[32m== \033[0m%d ", reschild);
                alpha = reschild;
                ret = 0;
            }
            else if (showstats)
                printf("\033[31m<= \033[0m%d ", alpha);
        }
        end = high_resolution_clock::now();
        if (showstats)
            printf("%lu\n", duration_cast<milliseconds>(end - start).count());
        start = high_resolution_clock::now();
        if (left7)
        {
            int reschild = minimax(depth - 1, false, alpha + 1, alpha, cfir | (1LL << (48 - (left7) * 7)), csec ^ (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1);
            if (reschild > alpha)
                reschild = minimax(depth - 1, false, beta, reschild, cfir | (1LL << (48 - (left7) * 7)), csec ^ (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1);
            if (showstats)
                printf("res7 ");
            if (reschild > alpha)
            {
                if (showstats)
                    printf("\033[32m== \033[0m%d ", reschild);
                alpha = reschild;
                ret = 6;
            }
            else if (showstats)
                printf("\033[31m<= \033[0m%d ", alpha);
        }
        end = high_resolution_clock::now();
        if (showstats)
            printf("%lu\n", duration_cast<milliseconds>(end - start).count());
        return make_pair(ret, alpha);
    }
    else
    {
        if (left4)
            if (cw(cfir | csec, 3, left4))
                return make_pair(3, -depth);
        if (left3)
            if (cw(cfir | csec, 2, left3))
                return make_pair(2, -depth);
        if (left5)
            if (cw(cfir | csec, 4, left5))
                return make_pair(4, -depth);
        if (left2)
            if (cw(cfir | csec, 1, left2))
                return make_pair(1, -depth);
        if (left6)
            if (cw(cfir | csec, 5, left6))
                return make_pair(5, -depth);
        if (left1)
            if (cw(cfir | csec, 0, left1))
                return make_pair(0, -depth);
        if (left7)
            if (cw(cfir | csec, 6, left7))
                return make_pair(6, -depth);
        int ret = -1;
        auto start = high_resolution_clock::now();
        if (left4)
        {
            int reschild = minimax(depth - 1, true, beta, beta - 1, cfir, csec ^ (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7);
            if (reschild < beta)
                reschild = minimax(depth - 1, true, reschild, alpha, cfir, csec ^ (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7);
            if (showstats)
                printf("res4 ");
            if (reschild < beta)
            {
                if (showstats)
                    printf("\033[32m== \033[0m%d ", reschild);
                beta = reschild;
                ret = 3;
            }
            else if (showstats)
                printf("\033[31m>= \033[0m%d ", beta);
        }
        auto end = high_resolution_clock::now();
        if (showstats)
            printf("%lu\n", duration_cast<milliseconds>(end - start).count());
        start = high_resolution_clock::now();
        if (left3)
        {
            int reschild = minimax(depth - 1, true, beta, beta - 1, cfir, csec ^ (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7);
            if (reschild < beta)
                reschild = minimax(depth - 1, true, reschild, alpha, cfir, csec ^ (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7);
            if (showstats)
                printf("res3 ");
            if (reschild < beta)
            {
                if (showstats)
                    printf("\033[32m== \033[0m%d ", reschild);
                beta = reschild;
                ret = 2;
            }
            else if (showstats)
                printf("\033[31m>= \033[0m%d ", beta);
        }
        end = high_resolution_clock::now();
        if (showstats)
            printf("%lu\n", duration_cast<milliseconds>(end - start).count());
        start = high_resolution_clock::now();
        if (left5)
        {
            int reschild = minimax(depth - 1, true, beta, beta - 1, cfir, csec ^ (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7);
            if (reschild < beta)
                reschild = minimax(depth - 1, true, reschild, alpha, cfir, csec ^ (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7);
            if (showstats)
                printf("res5 ");
            if (reschild < beta)
            {
                if (showstats)
                    printf("\033[32m== \033[0m%d ", reschild);
                beta = reschild;
                ret = 4;
            }
            else if (showstats)
                printf("\033[31m>= \033[0m%d ", beta);
        }
        end = high_resolution_clock::now();
        if (showstats)
            printf("%lu\n", duration_cast<milliseconds>(end - start).count());
        start = high_resolution_clock::now();
        if (left2)
        {
            int reschild = minimax(depth - 1, true, beta, beta - 1, cfir, csec ^ (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7);
            if (reschild < beta)
                reschild = minimax(depth - 1, true, reschild, alpha, cfir, csec ^ (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7);
            if (showstats)
                printf("res2 ");
            if (reschild < beta)
            {
                if (showstats)
                    printf("\033[32m== \033[0m%d ", reschild);
                beta = reschild;
                ret = 1;
            }
            else if (showstats)
                printf("\033[31m>= \033[0m%d ", beta);
        }
        end = high_resolution_clock::now();
        if (showstats)
            printf("%lu\n", duration_cast<milliseconds>(end - start).count());
        start = high_resolution_clock::now();
        if (left6)
        {
            int reschild = minimax(depth - 1, true, beta, beta - 1, cfir, csec ^ (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7);
            if (reschild < beta)
                reschild = minimax(depth - 1, true, reschild, alpha, cfir, csec ^ (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7);
            if (showstats)
                printf("res6 ");
            if (reschild < beta)
            {
                if (showstats)
                    printf("\033[32m== \033[0m%d ", reschild);
                beta = reschild;
                ret = 5;
            }
            else if (showstats)
                printf("\033[31m>= \033[0m%d ", beta);
        }
        end = high_resolution_clock::now();
        if (showstats)
            printf("%lu\n", duration_cast<milliseconds>(end - start).count());
        start = high_resolution_clock::now();
        if (left1)
        {
            int reschild = minimax(depth - 1, true, beta, beta - 1, cfir, csec ^ (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7);
            if (reschild < beta)
                reschild = minimax(depth - 1, true, reschild, alpha, cfir, csec ^ (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7);
            if (showstats)
                printf("res1 ");
            if (reschild < beta)
            {
                if (showstats)
                    printf("\033[32m== \033[0m%d ", reschild);
                beta = reschild;
                ret = 0;
            }
            else if (showstats)
                printf("\033[31m>= \033[0m%d ", beta);
        }
        end = high_resolution_clock::now();
        if (showstats)
            printf("%lu\n", duration_cast<milliseconds>(end - start).count());
        start = high_resolution_clock::now();
        if (left7)
        {
            int reschild = minimax(depth - 1, true, beta, beta - 1, cfir, csec ^ (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1);
            if (reschild < beta)
                reschild = minimax(depth - 1, true, reschild, alpha, cfir, csec ^ (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1);
            if (showstats)
                printf("res7 ");
            if (reschild < beta)
            {
                if (showstats)
                    printf("\033[32m== \033[0m%d ", reschild);
                beta = reschild;
                ret = 6;
            }
            else if (showstats)
                printf("\033[31m>= \033[0m%d ", beta);
        }
        end = high_resolution_clock::now();
        if (showstats)
            printf("%lu\n", duration_cast<milliseconds>(end - start).count());
        return make_pair(ret, beta);
    }
}

void clear_input_buffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int main()
{
#if defined(__x86_64__)
    create_gmap(&main_gmap);
    create_gmap(&cache);
#endif
    srand(time(NULL));
    ifstream loadai("AIn.bin", ios::binary);
    if (loadai)
    {
        uint64_t t = 0;
        loadai.read(reinterpret_cast<char *>(&t), sizeof(uint32_t));
        for (uint64_t i = t; i; --i)
        {
            loadai.read(reinterpret_cast<char *>(&t), sizeof(uint64_t));
#if defined(__x86_64__)
            add_data(&cache, (t & 562949953421311ULL), (t >> 52));
#else
            cache[t & 562949953421311ULL] = (t >> 52);
#endif
        }
        loadai.close();
    }
    else
    {
        loadai.close();
        ofstream createai("AIn.bin", ios::binary);
        uint32_t t = 0;
        createai.write(reinterpret_cast<char *>(&t), sizeof(uint32_t));
        createai.close();
    }
    for (;;)
    {
#if defined(__x86_64__)
        clear_unload_gmap(&main_gmap);
#else
        if (TranspositionTable.size() > 0)
            TranspositionTable.clear();
#endif
        uint64_t cfir = 0, csec = 4398046511103;
        int moveindex = 0;
        int currenteval = 0;
        printf("Start first?\n");
        __uint32_t start = (rand() & 1);
        while (scanf("%d", &start) != 1 || start > 1)
            clear_input_buffer();
        uint32_t left[7] = {6, 6, 6, 6, 6, 6, 6};
        if (start == 0)
        {
            // printf("bot starts first\n");
            for (int itmain = 0;; ++itmain)
            {
#if defined(__x86_64__)
                __uint16_t res = binary_search(&cache, cfir | (csec << 7));
                if (res != INVALID_RESULT)
                {
#else
                auto it = cache.find(cfir | (csec << 7));
                if (it != cache.end())
                {
                    __uint16_t res = it->second;
#endif
                    moveindex = (res & 7);
                    currenteval = int8_t(res >> 4);
                    printf("\033[32m[D]\033[0m poseval f = %d\n", currenteval);
                }
                else
                {
                    printf("\033[32m[D]\033[0m cfir = %lu\n", cfir);
                    printf("\033[32m[D]\033[0m csec = %lu\n", csec);
                    printf("\033[32m[D]\033[0m itmain = %d\n", itmain);
                    printf("\033[32m[D]\033[0m left = %d %d %d %d %d %d %d\n", left[6], left[5], left[4], left[3], left[2], left[1], left[0]);
                    int safedepth = 41 - (itmain << 1);
                    printf("\033[32m[D]\033[0m safedepth = %d\n", safedepth + 1);
                    auto startin = high_resolution_clock::now();
                    pair<int, int> result = minimaxentry(safedepth, true, safedepth, (itmain == 0) ? 0 : currenteval - 1, cfir, csec, left[0], left[1], left[2], left[3], left[4], left[5], left[6]);
                    auto endin = high_resolution_clock::now();
                    moveindex = result.first;
                    currenteval = result.second;
                    if (showstats)
                        printf("\n");
                    printf("\033[32m[D]\033[0m poseval f = %d\n", currenteval);
                    printf("\033[31m[A]\033[0m Minimax fulldepth milliseconds: %lu\n", duration_cast<milliseconds>(endin - startin).count());
                    if (safedepth > 23)
                    {
#if defined(__x86_64__)
                        add_data(&cache, cfir | (csec << 7), (static_cast<uint16_t>(result.second) << 4) | moveindex);
                        fstream dumpai("AIn.bin", ios::in | ios::out | ios::binary);
                        uint64_t t = size(&cache);
#else
                        cache[cfir | (csec << 7)] = (static_cast<uint16_t>(result.second) << 4) | moveindex;
                        fstream dumpai("AIn.bin", ios::in | ios::out | ios::binary);
                        uint64_t t = cache.size();
#endif
                        dumpai.write(reinterpret_cast<const char *>(&t), sizeof(uint32_t));
                        dumpai.seekp(0, ios::end);
                        t = (static_cast<uint64_t>(result.second) << 56) | cfir | (csec << 7) | (static_cast<uint64_t>(moveindex) << 52);
                        dumpai.write(reinterpret_cast<const char *>(&t), sizeof(uint64_t));
                        dumpai.close();
                    }
                }
                printf("\033[35m[A]\033[0m User is losing in %d moves\n", 41 - (itmain << 1) - currenteval);
                printf("\033[32m[D]\033[0m move: %d\n", moveindex + 1);
                cfir ^= (1LL << (42 - (left[moveindex]) * 7 + moveindex));
                csec ^= (1LL << (42 - (left[moveindex]) * 7 + moveindex));
                if (cw(~cfir, moveindex, left[moveindex]))
                {
                    printf("Looks like pc won\n");
                    display(cfir, csec);
                    break;
                }
                --left[moveindex];
                display(cfir, csec);
                int p2;
                for (;;)
                {
                    printf("Your move: ");
                    // p2 = (rand() % 7) + 1;
                    if (scanf("%d", &p2) != 1)
                        clear_input_buffer();
                    else if (p2 > 0 and p2 < 8 and left[p2 - 1])
                    {
                        csec ^= (1LL << (41 - (left[p2 - 1]) * 7 + p2));
                        break;
                    }
                }
                if (cw(cfir | csec, p2 - 1, left[p2 - 1]))
                {
                    printf("Algorithm is trash...\n");
                    display(cfir, csec);
                    break;
                }
                left[p2 - 1]--;
                if (itmain == 20)
                {
                    printf("DRAW\n");
                    break;
                }
            }
        }
        else
        {
            // printf("you start first\n");
            for (int itmain = 0;; ++itmain)
            {
                display(cfir, csec);
                int p2;
                for (;;)
                {
                    printf("Your move: ");
                    // p2 = (rand() % 7) + 1;
                    if (scanf("%d", &p2) != 1)
                        clear_input_buffer();
                    else if (p2 > 0 and p2 < 8 and left[p2 - 1])
                    {
                        cfir ^= (1LL << (41 - (left[p2 - 1]) * 7 + p2));
                        csec ^= (1LL << (41 - (left[p2 - 1]) * 7 + p2));
                        break;
                    }
                }
                if (cw(~cfir, p2 - 1, left[p2 - 1]))
                {
                    printf("Algorithm is trash...\n");
                    display(cfir, csec);
                    break;
                }
                left[p2 - 1]--;
#if defined(__x86_64__)
                __uint16_t res = binary_search(&cache, cfir | (csec << 7));
                if (res != INVALID_RESULT)
                {
#else
                auto it = cache.find(cfir | (csec << 7));
                if (it != cache.end())
                {
                    __uint16_t res = it->second;
#endif
                    moveindex = (res & 7);
                    currenteval = int8_t(res >> 4);
                    printf("\033[32m[D]\033[0m poseval f = %d\n", currenteval);
                }
                else
                {
                    printf("\033[32m[D]\033[0m cfir = %lu\n", cfir);
                    printf("\033[32m[D]\033[0m csec = %lu\n", csec);
                    printf("\033[32m[D]\033[0m itmain = %d\n", itmain);
                    printf("\033[32m[D]\033[0m left = %d %d %d %d %d %d %d\n", left[6], left[5], left[4], left[3], left[2], left[1], left[0]);
                    int safedepth = 41 - (itmain << 1);
                    printf("\033[32m[D]\033[0m safedepth = %d\n", safedepth + 1);
                    auto startin = high_resolution_clock::now();
                    pair<int, int> result = minimaxentry(safedepth, false, (itmain == 0) ? 3 : currenteval + 1, -safedepth, cfir, csec, left[0], left[1], left[2], left[3], left[4], left[5], left[6]);
                    auto endin = high_resolution_clock::now();
                    moveindex = result.first;
                    currenteval = result.second;
                    if (showstats)
                        printf("\n");
                    printf("\033[32m[D]\033[0m poseval f = %d\n", currenteval);
                    printf("\033[31m[A]\033[0m Minimax fulldepth milliseconds: %lu\n", duration_cast<milliseconds>(endin - startin).count());
                    if (safedepth > 23)
                    {
#if defined(__x86_64__)
                        add_data(&cache, cfir | (csec << 7), (static_cast<uint16_t>(result.second) << 4) | moveindex);
                        fstream dumpai("AIn.bin", ios::in | ios::out | ios::binary);
                        uint64_t t = size(&cache);
#else
                        cache[cfir | (csec << 7)] = (static_cast<uint16_t>(result.second) << 4) | moveindex;
                        fstream dumpai("AIn.bin", ios::in | ios::out | ios::binary);
                        uint64_t t = cache.size();
#endif
                        dumpai.write(reinterpret_cast<const char *>(&t), sizeof(uint32_t));
                        dumpai.seekp(0, ios::end);
                        t = (static_cast<uint64_t>(result.second) << 56) | cfir | (csec << 7) | (static_cast<uint64_t>(moveindex) << 52);
                        dumpai.write(reinterpret_cast<const char *>(&t), sizeof(uint64_t));
                        dumpai.close();
                    }
                }
                if (currenteval > 0)
                    printf("\033[35m[A]\033[0m AI is losing in %d moves\n", 40 - (itmain << 1));
                else if (currenteval == 0)
                    printf("\033[35m[A]\033[0m AI is drawing in %d moves\n", 41 - (itmain << 1));
                else
                    printf("\033[35m[A]\033[0m User is losing in %d moves\n", 41 - (itmain << 1) + currenteval);
                printf("\033[32m[D]\033[0m move: %d\n", moveindex + 1);
                csec ^= (1LL << (42 - (left[moveindex]) * 7 + moveindex));
                if (cw(cfir | csec, moveindex, left[moveindex]))
                {
                    printf("Looks like pc won\n");
                    display(cfir, csec);
                    break;
                }
                --left[moveindex];
                if (itmain == 20)
                {
                    printf("DRAW\n");
                    break;
                }
            }
        }
    }
}
