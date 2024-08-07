#include <iostream>
#include <chrono>
#include <vector>
#include <thread>
#include <fstream>
#include <unordered_map>
#include <string>

using namespace std;
using namespace chrono;

void debug(string color, string init, string to_debug){
    cout << color << "[" << init << "] \033[0m" << to_debug << endl;
}

void debug(string color, string init, string to_debug, int64_t num){
    cout << color << "[" << init << "] \033[0m" << to_debug << " " << num << endl;
}

void debug(string color, string init, string to_debug, int64_t num, string to_debug2){
    cout << color << "[" << init << "] \033[0m" << to_debug << " " << num << " " << to_debug2 << endl;
}

void debug(string color, string init, int to_debug){
    cout << color << "[" << init << "] \033[0m" << to_debug << endl;
}

void debug(string color, string init, uint64_t to_debug){
    cout << color << "[" << init << "] \033[0m" << to_debug << endl;
}

void debug(string color, string init, uint32_t* to_debug, int size){
    cout << color << "[" << init << "] \033[0m";
    for(int i = 0; i < size; i++)
        cout << to_debug[i];
    cout << endl;
}

inline bool cw(uint64_t curcheckw, int moveindex, uint32_t left){
    switch(moveindex){
        case 0:
        switch(left){
            case 6:
            if((curcheckw & 14LL) == 0)
                    return true;
            if((curcheckw & 16843008LL) == 0)
                    return true;
            return false;
            case 5:
            if((curcheckw & 1792LL) == 0)
                    return true;
            if((curcheckw & 2155905024LL) == 0)
                    return true;
            return false;
            case 4:
            if((curcheckw & 229376LL) == 0)
                    return true;
            if((curcheckw & 275955843072LL) == 0)
                    return true;
            return false;
            case 3:
            if((curcheckw & 29360128LL) == 0)
                    return true;
            if((curcheckw & 16513LL) == 0)
                    return true;
            if((curcheckw & 33288LL) == 0)
                    return true;
            return false;
            case 2:
            if((curcheckw & 3758096384LL) == 0)
                    return true;
            if((curcheckw & 2113664LL) == 0)
                    return true;
            if((curcheckw & 4260864LL) == 0)
                    return true;
            return false;
            case 1:
            if((curcheckw & 481036337152LL) == 0)
                    return true;
            if((curcheckw & 270548992LL) == 0)
                    return true;
            if((curcheckw & 545390592LL) == 0)
                    return true;
            return false;
        }
        case 1:
        switch(left){
            case 6:
            if((curcheckw & 13LL) == 0)
                    return true;
            if((curcheckw & 28LL) == 0)
                    return true;
            if((curcheckw & 33686016LL) == 0)
                    return true;
            return false;
            case 5:
            if((curcheckw & 1664LL) == 0)
                    return true;
            if((curcheckw & 3584LL) == 0)
                    return true;
            if((curcheckw & 16842753LL) == 0)
                    return true;
            if((curcheckw & 4311810048LL) == 0)
                    return true;
            return false;
            case 4:
            if((curcheckw & 212992LL) == 0)
                    return true;
            if((curcheckw & 458752LL) == 0)
                    return true;
            if((curcheckw & 2155872384LL) == 0)
                    return true;
            if((curcheckw & 551911686144LL) == 0)
                    return true;
            if((curcheckw & 2097672LL) == 0)
                    return true;
            return false;
            case 3:
            if((curcheckw & 27262976LL) == 0)
                    return true;
            if((curcheckw & 58720256LL) == 0)
                    return true;
            if((curcheckw & 33026LL) == 0)
                    return true;
            if((curcheckw & 275951665152LL) == 0)
                    return true;
            if((curcheckw & 66576LL) == 0)
                    return true;
            if((curcheckw & 268502016LL) == 0)
                    return true;
            return false;
            case 2:
            if((curcheckw & 3489660928LL) == 0)
                    return true;
            if((curcheckw & 7516192768LL) == 0)
                    return true;
            if((curcheckw & 4227328LL) == 0)
                    return true;
            if((curcheckw & 8521728LL) == 0)
                    return true;
            if((curcheckw & 34368258048LL) == 0)
                    return true;
            return false;
            case 1:
            if((curcheckw & 446676598784LL) == 0)
                    return true;
            if((curcheckw & 962072674304LL) == 0)
                    return true;
            if((curcheckw & 541097984LL) == 0)
                    return true;
            if((curcheckw & 1090781184LL) == 0)
                    return true;
            return false;
        }
        case 2:
        switch(left){
            case 6:
            if((curcheckw & 11LL) == 0)
                    return true;
            if((curcheckw & 26LL) == 0)
                    return true;
            if((curcheckw & 56LL) == 0)
                    return true;
            if((curcheckw & 67372032LL) == 0)
                    return true;
            return false;
            case 5:
            if((curcheckw & 1408LL) == 0)
                    return true;
            if((curcheckw & 3328LL) == 0)
                    return true;
            if((curcheckw & 7168LL) == 0)
                    return true;
            if((curcheckw & 33685506LL) == 0)
                    return true;
            if((curcheckw & 8623620096LL) == 0)
                    return true;
            if((curcheckw & 2129928LL) == 0)
                    return true;
            return false;
            case 4:
            if((curcheckw & 180224LL) == 0)
                    return true;
            if((curcheckw & 425984LL) == 0)
                    return true;
            if((curcheckw & 917504LL) == 0)
                    return true;
            if((curcheckw & 16777473LL) == 0)
                    return true;
            if((curcheckw & 4311744768LL) == 0)
                    return true;
            if((curcheckw & 1103823372288LL) == 0)
                    return true;
            if((curcheckw & 4195344LL) == 0)
                    return true;
            if((curcheckw & 272630784LL) == 0)
                    return true;
            return false;
            case 3:
            if((curcheckw & 23068672LL) == 0)
                    return true;
            if((curcheckw & 54525952LL) == 0)
                    return true;
            if((curcheckw & 117440512LL) == 0)
                    return true;
            if((curcheckw & 66052LL) == 0)
                    return true;
            if((curcheckw & 2147516544LL) == 0)
                    return true;
            if((curcheckw & 551903330304LL) == 0)
                    return true;
            if((curcheckw & 133152LL) == 0)
                    return true;
            if((curcheckw & 537004032LL) == 0)
                    return true;
            if((curcheckw & 34896740352LL) == 0)
                    return true;
            return false;
            case 2:
            if((curcheckw & 2952790016LL) == 0)
                    return true;
            if((curcheckw & 6979321856LL) == 0)
                    return true;
            if((curcheckw & 15032385536LL) == 0)
                    return true;
            if((curcheckw & 8454656LL) == 0)
                    return true;
            if((curcheckw & 274882117632LL) == 0)
                    return true;
            if((curcheckw & 17043456LL) == 0)
                    return true;
            if((curcheckw & 68736516096LL) == 0)
                    return true;
            return false;
            case 1:
            if((curcheckw & 377957122048LL) == 0)
                    return true;
            if((curcheckw & 893353197568LL) == 0)
                    return true;
            if((curcheckw & 1924145348608LL) == 0)
                    return true;
            if((curcheckw & 1082195968LL) == 0)
                    return true;
            if((curcheckw & 2181562368LL) == 0)
                    return true;
            return false;
        }
        case 3:
        switch(left){
            case 6:
            if((curcheckw & 7LL) == 0)
                    return true;
            if((curcheckw & 22LL) == 0)
                    return true;
            if((curcheckw & 52LL) == 0)
                    return true;
            if((curcheckw & 112LL) == 0)
                    return true;
            if((curcheckw & 134744064LL) == 0)
                    return true;
            if((curcheckw & 2130432LL) == 0)
                    return true;
            return false;
            case 5:
            if((curcheckw & 896LL) == 0)
                    return true;
            if((curcheckw & 2816LL) == 0)
                    return true;
            if((curcheckw & 6656LL) == 0)
                    return true;
            if((curcheckw & 14336LL) == 0)
                    return true;
            if((curcheckw & 67371012LL) == 0)
                    return true;
            if((curcheckw & 17247240192LL) == 0)
                    return true;
            if((curcheckw & 4259856LL) == 0)
                    return true;
            if((curcheckw & 272695296LL) == 0)
                    return true;
            return false;
            case 4:
            if((curcheckw & 114688LL) == 0)
                    return true;
            if((curcheckw & 360448LL) == 0)
                    return true;
            if((curcheckw & 851968LL) == 0)
                    return true;
            if((curcheckw & 1835008LL) == 0)
                    return true;
            if((curcheckw & 33554946LL) == 0)
                    return true;
            if((curcheckw & 8623489536LL) == 0)
                    return true;
            if((curcheckw & 2207646744576LL) == 0)
                    return true;
            if((curcheckw & 8390688LL) == 0)
                    return true;
            if((curcheckw & 545261568LL) == 0)
                    return true;
            if((curcheckw & 34904997888LL) == 0)
                    return true;
            return false;
            case 3:
            if((curcheckw & 14680064LL) == 0)
                    return true;
            if((curcheckw & 46137344LL) == 0)
                    return true;
            if((curcheckw & 109051904LL) == 0)
                    return true;
            if((curcheckw & 234881024LL) == 0)
                    return true;
            if((curcheckw & 132104LL) == 0)
                    return true;
            if((curcheckw & 65793LL) == 0)
                    return true;
            if((curcheckw & 4295033088LL) == 0)
                    return true;
            if((curcheckw & 1103806660608LL) == 0)
                    return true;
            if((curcheckw & 266304LL) == 0)
                    return true;
            if((curcheckw & 1074008064LL) == 0)
                    return true;
            if((curcheckw & 69793480704LL) == 0)
                    return true;
            return false;
            case 2:
            if((curcheckw & 1879048192LL) == 0)
                    return true;
            if((curcheckw & 5905580032LL) == 0)
                    return true;
            if((curcheckw & 13958643712LL) == 0)
                    return true;
            if((curcheckw & 30064771072LL) == 0)
                    return true;
            if((curcheckw & 16909312LL) == 0)
                    return true;
            if((curcheckw & 8421504LL) == 0)
                    return true;
            if((curcheckw & 549764235264LL) == 0)
                    return true;
            if((curcheckw & 34086912LL) == 0)
                    return true;
            if((curcheckw & 137473032192LL) == 0)
                    return true;
            return false;
            case 1:
            if((curcheckw & 240518168576LL) == 0)
                    return true;
            if((curcheckw & 755914244096LL) == 0)
                    return true;
            if((curcheckw & 1786706395136LL) == 0)
                    return true;
            if((curcheckw & 3848290697216LL) == 0)
                    return true;
            if((curcheckw & 2164391936LL) == 0)
                    return true;
            if((curcheckw & 1077952512LL) == 0)
                    return true;
            if((curcheckw & 4363124736LL) == 0)
                    return true;
            return false;
        }
        case 4:
        switch(left){
            case 6:
            if((curcheckw & 14LL) == 0)
                    return true;
            if((curcheckw & 44LL) == 0)
                    return true;
            if((curcheckw & 104LL) == 0)
                    return true;
            if((curcheckw & 4260864LL) == 0)
                    return true;
            return false;
            case 5:
            if((curcheckw & 1792LL) == 0)
                    return true;
            if((curcheckw & 5632LL) == 0)
                    return true;
            if((curcheckw & 13312LL) == 0)
                    return true;
            if((curcheckw & 134742024LL) == 0)
                    return true;
            if((curcheckw & 8519712LL) == 0)
                    return true;
            if((curcheckw & 545390592LL) == 0)
                    return true;
            return false;
            case 4:
            if((curcheckw & 229376LL) == 0)
                    return true;
            if((curcheckw & 720896LL) == 0)
                    return true;
            if((curcheckw & 1703936LL) == 0)
                    return true;
            if((curcheckw & 67109892LL) == 0)
                    return true;
            if((curcheckw & 17246979072LL) == 0)
                    return true;
            if((curcheckw & 16781376LL) == 0)
                    return true;
            if((curcheckw & 1090523136LL) == 0)
                    return true;
            if((curcheckw & 69809995776LL) == 0)
                    return true;
            return false;
            case 3:
            if((curcheckw & 29360128LL) == 0)
                    return true;
            if((curcheckw & 92274688LL) == 0)
                    return true;
            if((curcheckw & 218103808LL) == 0)
                    return true;
            if((curcheckw & 264208LL) == 0)
                    return true;
            if((curcheckw & 131586LL) == 0)
                    return true;
            if((curcheckw & 8590066176LL) == 0)
                    return true;
            if((curcheckw & 2207613321216LL) == 0)
                    return true;
            if((curcheckw & 2148016128LL) == 0)
                    return true;
            if((curcheckw & 139586961408LL) == 0)
                    return true;
            return false;
            case 2:
            if((curcheckw & 3758096384LL) == 0)
                    return true;
            if((curcheckw & 11811160064LL) == 0)
                    return true;
            if((curcheckw & 27917287424LL) == 0)
                    return true;
            if((curcheckw & 33818624LL) == 0)
                    return true;
            if((curcheckw & 16843008LL) == 0)
                    return true;
            if((curcheckw & 1099528470528LL) == 0)
                    return true;
            if((curcheckw & 274946064384LL) == 0)
                    return true;
            return false;
            case 1:
            if((curcheckw & 481036337152LL) == 0)
                    return true;
            if((curcheckw & 1511828488192LL) == 0)
                    return true;
            if((curcheckw & 3573412790272LL) == 0)
                    return true;
            if((curcheckw & 4328783872LL) == 0)
                    return true;
            if((curcheckw & 2155905024LL) == 0)
                    return true;
            return false;
        }
        case 5:
        switch(left){
            case 6:
            if((curcheckw & 28LL) == 0)
                    return true;
            if((curcheckw & 88LL) == 0)
                    return true;
            if((curcheckw & 8521728LL) == 0)
                    return true;
            return false;
            case 5:
            if((curcheckw & 3584LL) == 0)
                    return true;
            if((curcheckw & 11264LL) == 0)
                    return true;
            if((curcheckw & 17039424LL) == 0)
                    return true;
            if((curcheckw & 1090781184LL) == 0)
                    return true;
            return false;
            case 4:
            if((curcheckw & 458752LL) == 0)
                    return true;
            if((curcheckw & 1441792LL) == 0)
                    return true;
            if((curcheckw & 134219784LL) == 0)
                    return true;
            if((curcheckw & 2181046272LL) == 0)
                    return true;
            if((curcheckw & 139619991552LL) == 0)
                    return true;
            return false;
            case 3:
            if((curcheckw & 58720256LL) == 0)
                    return true;
            if((curcheckw & 184549376LL) == 0)
                    return true;
            if((curcheckw & 528416LL) == 0)
                    return true;
            if((curcheckw & 263172LL) == 0)
                    return true;
            if((curcheckw & 17180132352LL) == 0)
                    return true;
            if((curcheckw & 279173922816LL) == 0)
                    return true;
            return false;
            case 2:
            if((curcheckw & 7516192768LL) == 0)
                    return true;
            if((curcheckw & 23622320128LL) == 0)
                    return true;
            if((curcheckw & 67637248LL) == 0)
                    return true;
            if((curcheckw & 33686016LL) == 0)
                    return true;
            if((curcheckw & 2199056941056LL) == 0)
                    return true;
            return false;
            case 1:
            if((curcheckw & 962072674304LL) == 0)
                    return true;
            if((curcheckw & 3023656976384LL) == 0)
                    return true;
            if((curcheckw & 8657567744LL) == 0)
                    return true;
            if((curcheckw & 4311810048LL) == 0)
                    return true;
            return false;
        }
        case 6:
        switch(left){
            case 6:
            if((curcheckw & 56LL) == 0)
                    return true;
            if((curcheckw & 17043456LL) == 0)
                    return true;
            return false;
            case 5:
            if((curcheckw & 7168LL) == 0)
                    return true;
            if((curcheckw & 2181562368LL) == 0)
                    return true;
            return false;
            case 4:
            if((curcheckw & 917504LL) == 0)
                    return true;
            if((curcheckw & 279239983104LL) == 0)
                    return true;
            return false;
            case 3:
            if((curcheckw & 117440512LL) == 0)
                    return true;
            if((curcheckw & 1056832LL) == 0)
                    return true;
            if((curcheckw & 526344LL) == 0)
                    return true;
            return false;
            case 2:
            if((curcheckw & 15032385536LL) == 0)
                    return true;
            if((curcheckw & 135274496LL) == 0)
                    return true;
            if((curcheckw & 67372032LL) == 0)
                    return true;
            return false;
            case 1:
            if((curcheckw & 1924145348608LL) == 0)
                    return true;
            if((curcheckw & 17315135488LL) == 0)
                    return true;
            if((curcheckw & 8623620096LL) == 0)
                    return true;
            return false;
        }
    }
}

inline int scoremove(uint64_t curcheckw, uint32_t moveindex, uint32_t left){
    int result = 0;
    switch(left){
    case 6:
        switch(moveindex){
            case 0:
                if((curcheckw & 16842752ULL) == 0)
                    result += 8;
                if((curcheckw & 16777472ULL) == 0)
                    result += 8;
            return result;
            case 1:
                if((curcheckw & 33685504ULL) == 0)
                    result += 8;
                if((curcheckw & 33554944ULL) == 0)
                    result += 8;
            return result;
            case 2:
                if((curcheckw & 67371008ULL) == 0)
                    result += 8;
                if((curcheckw & 67109888ULL) == 0)
                    result += 8;
            return result;
            case 3:
                if((curcheckw & 134742016ULL) == 0)
                    result += 8;
                if((curcheckw & 2129920ULL) == 0)
                    result += 8;
                if((curcheckw & 134219776ULL) == 0)
                    result += 8;
                if((curcheckw & 2097664ULL) == 0)
                    result += 8;
            return result;
            case 4:
                if((curcheckw & 4259840ULL) == 0)
                    result += 8;
                if((curcheckw & 4195328ULL) == 0)
                    result += 8;
            return result;
            case 5:
                if((curcheckw & 8519680ULL) == 0)
                    result += 8;
                if((curcheckw & 8390656ULL) == 0)
                    result += 8;
            return result;
            case 6:
                if((curcheckw & 17039360ULL) == 0)
                    result += 8;
                if((curcheckw & 16781312ULL) == 0)
                    result += 8;
            return result;
        }
    case 5:
        switch(moveindex){
            case 0:
                if((curcheckw & 1536ULL) == 0)
                    result += 8;
                if((curcheckw & 2155872256ULL) == 0)
                    result += 8;
                if((curcheckw & 1280ULL) == 0)
                    result += 8;
                if((curcheckw & 2147516416ULL) == 0)
                    result += 8;
            return result;
            case 1:
                if((curcheckw & 3072ULL) == 0)
                    result += 8;
                if((curcheckw & 4311744512ULL) == 0)
                    result += 8;
                if((curcheckw & 1152ULL) == 0)
                    result += 8;
                if((curcheckw & 16777217ULL) == 0)
                    result += 8;
                if((curcheckw & 2560ULL) == 0)
                    result += 8;
                if((curcheckw & 4295032832ULL) == 0)
                    result += 8;
            return result;
            case 2:
                if((curcheckw & 6144ULL) == 0)
                    result += 8;
                if((curcheckw & 8623489024ULL) == 0)
                    result += 8;
                if((curcheckw & 1152ULL) == 0)
                    result += 8;
                if((curcheckw & 2304ULL) == 0)
                    result += 8;
                if((curcheckw & 2097160ULL) == 0)
                    result += 8;
                if((curcheckw & 33554434ULL) == 0)
                    result += 8;
                if((curcheckw & 5120ULL) == 0)
                    result += 8;
                if((curcheckw & 8590065664ULL) == 0)
                    result += 8;
            return result;
            case 3:
                if((curcheckw & 12288ULL) == 0)
                    result += 8;
                if((curcheckw & 17246978048ULL) == 0)
                    result += 8;
                if((curcheckw & 272629760ULL) == 0)
                    result += 8;
                if((curcheckw & 384ULL) == 0)
                    result += 8;
                if((curcheckw & 2304ULL) == 0)
                    result += 8;
                if((curcheckw & 4608ULL) == 0)
                    result += 8;
                if((curcheckw & 4194320ULL) == 0)
                    result += 8;
                if((curcheckw & 67108868ULL) == 0)
                    result += 8;
                if((curcheckw & 10240ULL) == 0)
                    result += 8;
                if((curcheckw & 640ULL) == 0)
                    result += 8;
                if((curcheckw & 17180131328ULL) == 0)
                    result += 8;
                if((curcheckw & 268500992ULL) == 0)
                    result += 8;
            return result;
            case 4:
                if((curcheckw & 545259520ULL) == 0)
                    result += 8;
                if((curcheckw & 768ULL) == 0)
                    result += 8;
                if((curcheckw & 4608ULL) == 0)
                    result += 8;
                if((curcheckw & 9216ULL) == 0)
                    result += 8;
                if((curcheckw & 8388640ULL) == 0)
                    result += 8;
                if((curcheckw & 134217736ULL) == 0)
                    result += 8;
                if((curcheckw & 1280ULL) == 0)
                    result += 8;
                if((curcheckw & 537001984ULL) == 0)
                    result += 8;
            return result;
            case 5:
                if((curcheckw & 1090519040ULL) == 0)
                    result += 8;
                if((curcheckw & 1536ULL) == 0)
                    result += 8;
                if((curcheckw & 9216ULL) == 0)
                    result += 8;
                if((curcheckw & 16777280ULL) == 0)
                    result += 8;
                if((curcheckw & 2560ULL) == 0)
                    result += 8;
                if((curcheckw & 1074003968ULL) == 0)
                    result += 8;
            return result;
            case 6:
                if((curcheckw & 2181038080ULL) == 0)
                    result += 8;
                if((curcheckw & 3072ULL) == 0)
                    result += 8;
                if((curcheckw & 5120ULL) == 0)
                    result += 8;
                if((curcheckw & 2148007936ULL) == 0)
                    result += 8;
            return result;
        }
    case 4:
        switch(moveindex){
            case 0:
                if((curcheckw & 196608ULL) == 0)
                    result += 8;
                if((curcheckw & 275951648768ULL) == 0)
                    result += 8;
                if((curcheckw & 163840ULL) == 0)
                    result += 8;
                if((curcheckw & 274882101248ULL) == 0)
                    result += 8;
            return result;
            case 1:
                if((curcheckw & 393216ULL) == 0)
                    result += 8;
                if((curcheckw & 551903297536ULL) == 0)
                    result += 8;
                if((curcheckw & 147456ULL) == 0)
                    result += 8;
                if((curcheckw & 2097160ULL) == 0)
                    result += 8;
                if((curcheckw & 2147483776ULL) == 0)
                    result += 8;
                if((curcheckw & 327680ULL) == 0)
                    result += 8;
                if((curcheckw & 549764202496ULL) == 0)
                    result += 8;
            return result;
            case 2:
                if((curcheckw & 786432ULL) == 0)
                    result += 8;
                if((curcheckw & 1103806595072ULL) == 0)
                    result += 8;
                if((curcheckw & 147456ULL) == 0)
                    result += 8;
                if((curcheckw & 294912ULL) == 0)
                    result += 8;
                if((curcheckw & 16777217ULL) == 0)
                    result += 8;
                if((curcheckw & 4194320ULL) == 0)
                    result += 8;
                if((curcheckw & 268436480ULL) == 0)
                    result += 8;
                if((curcheckw & 4294967552ULL) == 0)
                    result += 8;
                if((curcheckw & 655360ULL) == 0)
                    result += 8;
                if((curcheckw & 1099528404992ULL) == 0)
                    result += 8;
            return result;
            case 3:
                if((curcheckw & 1572864ULL) == 0)
                    result += 8;
                if((curcheckw & 2207613190144ULL) == 0)
                    result += 8;
                if((curcheckw & 34896609280ULL) == 0)
                    result += 8;
                if((curcheckw & 49152ULL) == 0)
                    result += 8;
                if((curcheckw & 294912ULL) == 0)
                    result += 8;
                if((curcheckw & 589824ULL) == 0)
                    result += 8;
                if((curcheckw & 33554434ULL) == 0)
                    result += 8;
                if((curcheckw & 8388640ULL) == 0)
                    result += 8;
                if((curcheckw & 536872960ULL) == 0)
                    result += 8;
                if((curcheckw & 8589935104ULL) == 0)
                    result += 8;
                if((curcheckw & 1310720ULL) == 0)
                    result += 8;
                if((curcheckw & 81920ULL) == 0)
                    result += 8;
                if((curcheckw & 2199056809984ULL) == 0)
                    result += 8;
                if((curcheckw & 34368126976ULL) == 0)
                    result += 8;
            return result;
            case 4:
                if((curcheckw & 69793218560ULL) == 0)
                    result += 8;
                if((curcheckw & 98304ULL) == 0)
                    result += 8;
                if((curcheckw & 589824ULL) == 0)
                    result += 8;
                if((curcheckw & 1179648ULL) == 0)
                    result += 8;
                if((curcheckw & 67108868ULL) == 0)
                    result += 8;
                if((curcheckw & 16777280ULL) == 0)
                    result += 8;
                if((curcheckw & 1073745920ULL) == 0)
                    result += 8;
                if((curcheckw & 17179870208ULL) == 0)
                    result += 8;
                if((curcheckw & 163840ULL) == 0)
                    result += 8;
                if((curcheckw & 68736253952ULL) == 0)
                    result += 8;
            return result;
            case 5:
                if((curcheckw & 139586437120ULL) == 0)
                    result += 8;
                if((curcheckw & 196608ULL) == 0)
                    result += 8;
                if((curcheckw & 1179648ULL) == 0)
                    result += 8;
                if((curcheckw & 134217736ULL) == 0)
                    result += 8;
                if((curcheckw & 2147491840ULL) == 0)
                    result += 8;
                if((curcheckw & 327680ULL) == 0)
                    result += 8;
                if((curcheckw & 137472507904ULL) == 0)
                    result += 8;
            return result;
            case 6:
                if((curcheckw & 279172874240ULL) == 0)
                    result += 8;
                if((curcheckw & 393216ULL) == 0)
                    result += 8;
                if((curcheckw & 655360ULL) == 0)
                    result += 8;
                if((curcheckw & 274945015808ULL) == 0)
                    result += 8;
            return result;
        }
    case 3:
        switch(moveindex){
            case 0:
                if((curcheckw & 25165824ULL) == 0)
                    result += 8;
                if((curcheckw & 520ULL) == 0)
                    result += 8;
                if((curcheckw & 20971520ULL) == 0)
                    result += 8;
                if((curcheckw & 32776ULL) == 0)
                    result += 8;
            return result;
            case 1:
                if((curcheckw & 50331648ULL) == 0)
                    result += 8;
                if((curcheckw & 1040ULL) == 0)
                    result += 8;
                if((curcheckw & 18874368ULL) == 0)
                    result += 8;
                if((curcheckw & 268436480ULL) == 0)
                    result += 8;
                if((curcheckw & 274877923328ULL) == 0)
                    result += 8;
                if((curcheckw & 41943040ULL) == 0)
                    result += 8;
                if((curcheckw & 65552ULL) == 0)
                    result += 8;
            return result;
            case 2:
                if((curcheckw & 100663296ULL) == 0)
                    result += 8;
                if((curcheckw & 2080ULL) == 0)
                    result += 8;
                if((curcheckw & 18874368ULL) == 0)
                    result += 8;
                if((curcheckw & 37748736ULL) == 0)
                    result += 8;
                if((curcheckw & 2147483776ULL) == 0)
                    result += 8;
                if((curcheckw & 536872960ULL) == 0)
                    result += 8;
                if((curcheckw & 34359869440ULL) == 0)
                    result += 8;
                if((curcheckw & 549755846656ULL) == 0)
                    result += 8;
                if((curcheckw & 83886080ULL) == 0)
                    result += 8;
                if((curcheckw & 131104ULL) == 0)
                    result += 8;
            return result;
            case 3:
                if((curcheckw & 201326592ULL) == 0)
                    result += 8;
                if((curcheckw & 6291456ULL) == 0)
                    result += 8;
                if((curcheckw & 4160ULL) == 0)
                    result += 8;
                if((curcheckw & 257ULL) == 0)
                    result += 8;
                if((curcheckw & 37748736ULL) == 0)
                    result += 8;
                if((curcheckw & 75497472ULL) == 0)
                    result += 8;
                if((curcheckw & 4294967552ULL) == 0)
                    result += 8;
                if((curcheckw & 1073745920ULL) == 0)
                    result += 8;
                if((curcheckw & 68719738880ULL) == 0)
                    result += 8;
                if((curcheckw & 1099511693312ULL) == 0)
                    result += 8;
                if((curcheckw & 167772160ULL) == 0)
                    result += 8;
                if((curcheckw & 10485760ULL) == 0)
                    result += 8;
                if((curcheckw & 262208ULL) == 0)
                    result += 8;
                if((curcheckw & 65537ULL) == 0)
                    result += 8;
            return result;
            case 4:
                if((curcheckw & 12582912ULL) == 0)
                    result += 8;
                if((curcheckw & 514ULL) == 0)
                    result += 8;
                if((curcheckw & 75497472ULL) == 0)
                    result += 8;
                if((curcheckw & 150994944ULL) == 0)
                    result += 8;
                if((curcheckw & 8589935104ULL) == 0)
                    result += 8;
                if((curcheckw & 2147491840ULL) == 0)
                    result += 8;
                if((curcheckw & 137439477760ULL) == 0)
                    result += 8;
                if((curcheckw & 2199023386624ULL) == 0)
                    result += 8;
                if((curcheckw & 20971520ULL) == 0)
                    result += 8;
                if((curcheckw & 131074ULL) == 0)
                    result += 8;
            return result;
            case 5:
                if((curcheckw & 25165824ULL) == 0)
                    result += 8;
                if((curcheckw & 1028ULL) == 0)
                    result += 8;
                if((curcheckw & 150994944ULL) == 0)
                    result += 8;
                if((curcheckw & 17179870208ULL) == 0)
                    result += 8;
                if((curcheckw & 274878955520ULL) == 0)
                    result += 8;
                if((curcheckw & 41943040ULL) == 0)
                    result += 8;
                if((curcheckw & 262148ULL) == 0)
                    result += 8;
            return result;
            case 6:
                if((curcheckw & 50331648ULL) == 0)
                    result += 8;
                if((curcheckw & 2056ULL) == 0)
                    result += 8;
                if((curcheckw & 83886080ULL) == 0)
                    result += 8;
                if((curcheckw & 524296ULL) == 0)
                    result += 8;
            return result;
        }
    case 2:
        switch(moveindex){
            case 0:
                if((curcheckw & 3221225472ULL) == 0)
                    result += 8;
                if((curcheckw & 66560ULL) == 0)
                    result += 8;
                if((curcheckw & 2684354560ULL) == 0)
                    result += 8;
                if((curcheckw & 4195328ULL) == 0)
                    result += 8;
            return result;
            case 1:
                if((curcheckw & 6442450944ULL) == 0)
                    result += 8;
                if((curcheckw & 133120ULL) == 0)
                    result += 8;
                if((curcheckw & 2415919104ULL) == 0)
                    result += 8;
                if((curcheckw & 34359869440ULL) == 0)
                    result += 8;
                if((curcheckw & 5368709120ULL) == 0)
                    result += 8;
                if((curcheckw & 8390656ULL) == 0)
                    result += 8;
            return result;
            case 2:
                if((curcheckw & 12884901888ULL) == 0)
                    result += 8;
                if((curcheckw & 266240ULL) == 0)
                    result += 8;
                if((curcheckw & 2415919104ULL) == 0)
                    result += 8;
                if((curcheckw & 4831838208ULL) == 0)
                    result += 8;
                if((curcheckw & 274877923328ULL) == 0)
                    result += 8;
                if((curcheckw & 68719738880ULL) == 0)
                    result += 8;
                if((curcheckw & 10737418240ULL) == 0)
                    result += 8;
                if((curcheckw & 16781312ULL) == 0)
                    result += 8;
            return result;
            case 3:
                if((curcheckw & 25769803776ULL) == 0)
                    result += 8;
                if((curcheckw & 805306368ULL) == 0)
                    result += 8;
                if((curcheckw & 532480ULL) == 0)
                    result += 8;
                if((curcheckw & 32896ULL) == 0)
                    result += 8;
                if((curcheckw & 4831838208ULL) == 0)
                    result += 8;
                if((curcheckw & 9663676416ULL) == 0)
                    result += 8;
                if((curcheckw & 549755846656ULL) == 0)
                    result += 8;
                if((curcheckw & 137439477760ULL) == 0)
                    result += 8;
                if((curcheckw & 21474836480ULL) == 0)
                    result += 8;
                if((curcheckw & 1342177280ULL) == 0)
                    result += 8;
                if((curcheckw & 33562624ULL) == 0)
                    result += 8;
                if((curcheckw & 8388736ULL) == 0)
                    result += 8;
            return result;
            case 4:
                if((curcheckw & 1610612736ULL) == 0)
                    result += 8;
                if((curcheckw & 65792ULL) == 0)
                    result += 8;
                if((curcheckw & 9663676416ULL) == 0)
                    result += 8;
                if((curcheckw & 19327352832ULL) == 0)
                    result += 8;
                if((curcheckw & 1099511693312ULL) == 0)
                    result += 8;
                if((curcheckw & 274878955520ULL) == 0)
                    result += 8;
                if((curcheckw & 2684354560ULL) == 0)
                    result += 8;
                if((curcheckw & 16777472ULL) == 0)
                    result += 8;
            return result;
            case 5:
                if((curcheckw & 3221225472ULL) == 0)
                    result += 8;
                if((curcheckw & 131584ULL) == 0)
                    result += 8;
                if((curcheckw & 19327352832ULL) == 0)
                    result += 8;
                if((curcheckw & 2199023386624ULL) == 0)
                    result += 8;
                if((curcheckw & 5368709120ULL) == 0)
                    result += 8;
                if((curcheckw & 33554944ULL) == 0)
                    result += 8;
            return result;
            case 6:
                if((curcheckw & 6442450944ULL) == 0)
                    result += 8;
                if((curcheckw & 263168ULL) == 0)
                    result += 8;
                if((curcheckw & 10737418240ULL) == 0)
                    result += 8;
                if((curcheckw & 67109888ULL) == 0)
                    result += 8;
            return result;
        }
    case 1:
        switch(moveindex){
            case 0:
                if((curcheckw & 412316860416ULL) == 0)
                    result += 8;
                if((curcheckw & 8519680ULL) == 0)
                    result += 8;
                if((curcheckw & 343597383680ULL) == 0)
                    result += 8;
                if((curcheckw & 537001984ULL) == 0)
                    result += 8;
            return result;
            case 1:
                if((curcheckw & 824633720832ULL) == 0)
                    result += 8;
                if((curcheckw & 17039360ULL) == 0)
                    result += 8;
                if((curcheckw & 309237645312ULL) == 0)
                    result += 8;
                if((curcheckw & 687194767360ULL) == 0)
                    result += 8;
                if((curcheckw & 1074003968ULL) == 0)
                    result += 8;
            return result;
            case 2:
                if((curcheckw & 1649267441664ULL) == 0)
                    result += 8;
                if((curcheckw & 34078720ULL) == 0)
                    result += 8;
                if((curcheckw & 309237645312ULL) == 0)
                    result += 8;
                if((curcheckw & 618475290624ULL) == 0)
                    result += 8;
                if((curcheckw & 1374389534720ULL) == 0)
                    result += 8;
                if((curcheckw & 2148007936ULL) == 0)
                    result += 8;
            return result;
            case 3:
                if((curcheckw & 3298534883328ULL) == 0)
                    result += 8;
                if((curcheckw & 103079215104ULL) == 0)
                    result += 8;
                if((curcheckw & 68157440ULL) == 0)
                    result += 8;
                if((curcheckw & 4210688ULL) == 0)
                    result += 8;
                if((curcheckw & 618475290624ULL) == 0)
                    result += 8;
                if((curcheckw & 1236950581248ULL) == 0)
                    result += 8;
                if((curcheckw & 2748779069440ULL) == 0)
                    result += 8;
                if((curcheckw & 171798691840ULL) == 0)
                    result += 8;
                if((curcheckw & 4296015872ULL) == 0)
                    result += 8;
                if((curcheckw & 1073758208ULL) == 0)
                    result += 8;
            return result;
            case 4:
                if((curcheckw & 206158430208ULL) == 0)
                    result += 8;
                if((curcheckw & 8421376ULL) == 0)
                    result += 8;
                if((curcheckw & 1236950581248ULL) == 0)
                    result += 8;
                if((curcheckw & 2473901162496ULL) == 0)
                    result += 8;
                if((curcheckw & 343597383680ULL) == 0)
                    result += 8;
                if((curcheckw & 2147516416ULL) == 0)
                    result += 8;
            return result;
            case 5:
                if((curcheckw & 412316860416ULL) == 0)
                    result += 8;
                if((curcheckw & 16842752ULL) == 0)
                    result += 8;
                if((curcheckw & 2473901162496ULL) == 0)
                    result += 8;
                if((curcheckw & 687194767360ULL) == 0)
                    result += 8;
                if((curcheckw & 4295032832ULL) == 0)
                    result += 8;
            return result;
            case 6:
                if((curcheckw & 824633720832ULL) == 0)
                    result += 8;
                if((curcheckw & 33685504ULL) == 0)
                    result += 8;
                if((curcheckw & 1374389534720ULL) == 0)
                    result += 8;
                if((curcheckw & 8590065664ULL) == 0)
                    result += 8;
            return result;
        }
    }
}

struct ttentry{
	int score;
	uint8_t flag;
};

unordered_map<uint64_t, uint16_t> cache;

unordered_map<uint64_t, ttentry> TranspositionTable;

const int mincachedepth = 9;

const int minscoredepth = 9;

const bool showstats = true;

void display(const uint64_t &cfir, const uint64_t &csec){
    for (int u = 41; u > -1; --u)
    {
        if(((csec >> u) & 1) == 0){
            if((cfir >> u) & 1)
                cout << "\033[31mX \033[0m";
            else
                cout << "\033[32mO \033[0m";
        }
        else
            cout << ". ";
        if(u % 7 == 0)
            cout << endl;
    }
}

inline void sorter(int &index1, int &index2, int &index3, int &index4, int &index5, int &index6, int &index7){
    int t = -1;
    if (index1 < index2) {
        t = index1;
        index1 = index2;
        index2 = t;
    }
    if (index2 < index3) {
        t = index2;
        index2 = index3;
        index3 = t;
    }
    if (index3 < index4) {
        t = index3;
        index3 = index4;
        index4 = t;
    }
    if (index4 < index5) {
        t = index4;
        index4 = index5;
        index5 = t;
    }
    if (index5 < index6) {
        t = index5;
        index5 = index6;
        index6 = t;
    }
    if (index6 < index7) {
        t = index6;
        index6 = index7;
        index7 = t;
    }
    if(t == -1)
        return;
    t = -1;
    if (index1 < index2) {
        t = index1;
        index1 = index2;
        index2 = t;
    }
    if (index2 < index3) {
        t = index2;
        index2 = index3;
        index3 = t;
    }
    if (index3 < index4) {
        t = index3;
        index3 = index4;
        index4 = t;
    }
    if (index4 < index5) {
        t = index4;
        index4 = index5;
        index5 = t;
    }
    if (index5 < index6) {
        t = index5;
        index5 = index6;
        index6 = t;
    }
    if(t == -1)
        return;
    t = -1;
    if (index1 < index2) {
        t = index1;
        index1 = index2;
        index2 = t;
    }
    if (index2 < index3) {
        t = index2;
        index2 = index3;
        index3 = t;
    }
    if (index3 < index4) {
        t = index3;
        index3 = index4;
        index4 = t;
    }
    if (index4 < index5) {
        t = index4;
        index4 = index5;
        index5 = t;
    }
    if(t == -1)
        return;
    t = -1;
    if (index1 < index2) {
        t = index1;
        index1 = index2;
        index2 = t;
    }
    if (index2 < index3) {
        t = index2;
        index2 = index3;
        index3 = t;
    }
    if (index3 < index4) {
        t = index3;
        index3 = index4;
        index4 = t;
    }
    if(t == -1)
        return;
    t = -1;
    if (index1 < index2) {
        t = index1;
        index1 = index2;
        index2 = t;
    }
    if (index2 < index3) {
        t = index2;
        index2 = index3;
        index3 = t;
    }
    if(t == -1)
        return;
    if (index1 < index2) {
        t = index1;
        index1 = index2;
        index2 = t;
    }
}

int minimax(int depth, const bool player, int beta, int alpha, const uint64_t cfir, const uint64_t csec, const uint32_t left1, const uint32_t left2, const uint32_t left3, const uint32_t left4, const uint32_t left5, const uint32_t left6, const uint32_t left7){
    if(player){
        uint64_t tfir = ~cfir;
        if(left4 > 0)
            switch(left4){
            case 6:
            if((tfir & 7LL) == 0)
                return depth;
            if((tfir & 22LL) == 0)
                return depth;
            if((tfir & 52LL) == 0)
                return depth;
            if((tfir & 112LL) == 0)
                return depth;
            if((tfir & 134744064LL) == 0)
                return depth;
            if((tfir & 2130432LL) == 0)
                return depth;
            break;
            case 5:
            if((tfir & 896LL) == 0)
                return depth;
            if((tfir & 2816LL) == 0)
                return depth;
            if((tfir & 6656LL) == 0)
                return depth;
            if((tfir & 14336LL) == 0)
                return depth;
            if((tfir & 67371012LL) == 0)
                return depth;
            if((tfir & 17247240192LL) == 0)
                return depth;
            if((tfir & 4259856LL) == 0)
                return depth;
            if((tfir & 272695296LL) == 0)
                return depth;
            break;
            case 4:
            if((tfir & 114688LL) == 0)
                return depth;
            if((tfir & 360448LL) == 0)
                return depth;
            if((tfir & 851968LL) == 0)
                return depth;
            if((tfir & 1835008LL) == 0)
                return depth;
            if((tfir & 33554946LL) == 0)
                return depth;
            if((tfir & 8623489536LL) == 0)
                return depth;
            if((tfir & 2207646744576LL) == 0)
                return depth;
            if((tfir & 8390688LL) == 0)
                return depth;
            if((tfir & 545261568LL) == 0)
                return depth;
            if((tfir & 34904997888LL) == 0)
                return depth;
            break;
            case 3:
            if((tfir & 14680064LL) == 0)
                return depth;
            if((tfir & 46137344LL) == 0)
                return depth;
            if((tfir & 109051904LL) == 0)
                return depth;
            if((tfir & 234881024LL) == 0)
                return depth;
            if((tfir & 132104LL) == 0)
                return depth;
            if((tfir & 65793LL) == 0)
                return depth;
            if((tfir & 4295033088LL) == 0)
                return depth;
            if((tfir & 1103806660608LL) == 0)
                return depth;
            if((tfir & 266304LL) == 0)
                return depth;
            if((tfir & 1074008064LL) == 0)
                return depth;
            if((tfir & 69793480704LL) == 0)
                return depth;
            break;
            case 2:
            if((tfir & 1879048192LL) == 0)
                return depth;
            if((tfir & 5905580032LL) == 0)
                return depth;
            if((tfir & 13958643712LL) == 0)
                return depth;
            if((tfir & 30064771072LL) == 0)
                return depth;
            if((tfir & 16909312LL) == 0)
                return depth;
            if((tfir & 8421504LL) == 0)
                return depth;
            if((tfir & 549764235264LL) == 0)
                return depth;
            if((tfir & 34086912LL) == 0)
                return depth;
            if((tfir & 137473032192LL) == 0)
                return depth;
            break;
            case 1:
            if((tfir & 240518168576LL) == 0)
                return depth;
            if((tfir & 755914244096LL) == 0)
                return depth;
            if((tfir & 1786706395136LL) == 0)
                return depth;
            if((tfir & 3848290697216LL) == 0)
                return depth;
            if((tfir & 2164391936LL) == 0)
                return depth;
            if((tfir & 1077952512LL) == 0)
                return depth;
            if((tfir & 4363124736LL) == 0)
                return depth;
            break;
        }
        if(left3 > 0)
            switch(left3){
            case 6:
            if((tfir & 11LL) == 0)
                return depth;
            if((tfir & 26LL) == 0)
                return depth;
            if((tfir & 56LL) == 0)
                return depth;
            if((tfir & 67372032LL) == 0)
                return depth;
            break;
            case 5:
            if((tfir & 1408LL) == 0)
                return depth;
            if((tfir & 3328LL) == 0)
                return depth;
            if((tfir & 7168LL) == 0)
                return depth;
            if((tfir & 33685506LL) == 0)
                return depth;
            if((tfir & 8623620096LL) == 0)
                return depth;
            if((tfir & 2129928LL) == 0)
                return depth;
            break;
            case 4:
            if((tfir & 180224LL) == 0)
                return depth;
            if((tfir & 425984LL) == 0)
                return depth;
            if((tfir & 917504LL) == 0)
                return depth;
            if((tfir & 16777473LL) == 0)
                return depth;
            if((tfir & 4311744768LL) == 0)
                return depth;
            if((tfir & 1103823372288LL) == 0)
                return depth;
            if((tfir & 4195344LL) == 0)
                return depth;
            if((tfir & 272630784LL) == 0)
                return depth;
            break;
            case 3:
            if((tfir & 23068672LL) == 0)
                return depth;
            if((tfir & 54525952LL) == 0)
                return depth;
            if((tfir & 117440512LL) == 0)
                return depth;
            if((tfir & 66052LL) == 0)
                return depth;
            if((tfir & 2147516544LL) == 0)
                return depth;
            if((tfir & 551903330304LL) == 0)
                return depth;
            if((tfir & 133152LL) == 0)
                return depth;
            if((tfir & 537004032LL) == 0)
                return depth;
            if((tfir & 34896740352LL) == 0)
                return depth;
            break;
            case 2:
            if((tfir & 2952790016LL) == 0)
                return depth;
            if((tfir & 6979321856LL) == 0)
                return depth;
            if((tfir & 15032385536LL) == 0)
                return depth;
            if((tfir & 8454656LL) == 0)
                return depth;
            if((tfir & 274882117632LL) == 0)
                return depth;
            if((tfir & 17043456LL) == 0)
                return depth;
            if((tfir & 68736516096LL) == 0)
                return depth;
            break;
            case 1:
            if((tfir & 377957122048LL) == 0)
                return depth;
            if((tfir & 893353197568LL) == 0)
                return depth;
            if((tfir & 1924145348608LL) == 0)
                return depth;
            if((tfir & 1082195968LL) == 0)
                return depth;
            if((tfir & 2181562368LL) == 0)
                return depth;
            break;
        }
        if(left5 > 0)
            switch(left5){
            case 6:
            if((tfir & 14LL) == 0)
                return depth;
            if((tfir & 44LL) == 0)
                return depth;
            if((tfir & 104LL) == 0)
                return depth;
            if((tfir & 4260864LL) == 0)
                return depth;
            break;
            case 5:
            if((tfir & 1792LL) == 0)
                return depth;
            if((tfir & 5632LL) == 0)
                return depth;
            if((tfir & 13312LL) == 0)
                return depth;
            if((tfir & 134742024LL) == 0)
                return depth;
            if((tfir & 8519712LL) == 0)
                return depth;
            if((tfir & 545390592LL) == 0)
                return depth;
            break;
            case 4:
            if((tfir & 229376LL) == 0)
                return depth;
            if((tfir & 720896LL) == 0)
                return depth;
            if((tfir & 1703936LL) == 0)
                return depth;
            if((tfir & 67109892LL) == 0)
                return depth;
            if((tfir & 17246979072LL) == 0)
                return depth;
            if((tfir & 16781376LL) == 0)
                return depth;
            if((tfir & 1090523136LL) == 0)
                return depth;
            if((tfir & 69809995776LL) == 0)
                return depth;
            break;
            case 3:
            if((tfir & 29360128LL) == 0)
                return depth;
            if((tfir & 92274688LL) == 0)
                return depth;
            if((tfir & 218103808LL) == 0)
                return depth;
            if((tfir & 264208LL) == 0)
                return depth;
            if((tfir & 131586LL) == 0)
                return depth;
            if((tfir & 8590066176LL) == 0)
                return depth;
            if((tfir & 2207613321216LL) == 0)
                return depth;
            if((tfir & 2148016128LL) == 0)
                return depth;
            if((tfir & 139586961408LL) == 0)
                return depth;
            break;
            case 2:
            if((tfir & 3758096384LL) == 0)
                return depth;
            if((tfir & 11811160064LL) == 0)
                return depth;
            if((tfir & 27917287424LL) == 0)
                return depth;
            if((tfir & 33818624LL) == 0)
                return depth;
            if((tfir & 16843008LL) == 0)
                return depth;
            if((tfir & 1099528470528LL) == 0)
                return depth;
            if((tfir & 274946064384LL) == 0)
                return depth;
            break;
            case 1:
            if((tfir & 481036337152LL) == 0)
                return depth;
            if((tfir & 1511828488192LL) == 0)
                return depth;
            if((tfir & 3573412790272LL) == 0)
                return depth;
            if((tfir & 4328783872LL) == 0)
                return depth;
            if((tfir & 2155905024LL) == 0)
                return depth;
            break;
        }
        switch((left2) | (left6 << 3)){
        case 1:
            if((tfir & 446676598784LL) == 0)
                return depth;
            if((tfir & 962072674304LL) == 0)
                return depth;
            if((tfir & 541097984LL) == 0)
                return depth;
            if((tfir & 1090781184LL) == 0)
                return depth;
            break;
        case 2:
            if((tfir & 3489660928LL) == 0)
                return depth;
            if((tfir & 7516192768LL) == 0)
                return depth;
            if((tfir & 4227328LL) == 0)
                return depth;
            if((tfir & 8521728LL) == 0)
                return depth;
            if((tfir & 34368258048LL) == 0)
                return depth;
            break;
        case 3:
            if((tfir & 27262976LL) == 0)
                return depth;
            if((tfir & 58720256LL) == 0)
                return depth;
            if((tfir & 33026LL) == 0)
                return depth;
            if((tfir & 275951665152LL) == 0)
                return depth;
            if((tfir & 66576LL) == 0)
                return depth;
            if((tfir & 268502016LL) == 0)
                return depth;
            break;
        case 4:
            if((tfir & 212992LL) == 0)
                return depth;
            if((tfir & 458752LL) == 0)
                return depth;
            if((tfir & 2155872384LL) == 0)
                return depth;
            if((tfir & 551911686144LL) == 0)
                return depth;
            if((tfir & 2097672LL) == 0)
                return depth;
            break;
        case 5:
            if((tfir & 1664LL) == 0)
                return depth;
            if((tfir & 3584LL) == 0)
                return depth;
            if((tfir & 16842753LL) == 0)
                return depth;
            if((tfir & 4311810048LL) == 0)
                return depth;
            break;
        case 6:
            if((tfir & 13LL) == 0)
                return depth;
            if((tfir & 28LL) == 0)
                return depth;
            if((tfir & 33686016LL) == 0)
                return depth;
            break;
        case 8:
            if((tfir & 962072674304LL) == 0)
                return depth;
            if((tfir & 3023656976384LL) == 0)
                return depth;
            if((tfir & 8657567744LL) == 0)
                return depth;
            if((tfir & 4311810048LL) == 0)
                return depth;
            break;
        case 9:
            if((tfir & 446676598784LL) == 0)
                return depth;
            if((tfir & 962072674304LL) == 0)
                return depth;
            if((tfir & 541097984LL) == 0)
                return depth;
            if((tfir & 1090781184LL) == 0)
                return depth;
            if((tfir & 3023656976384LL) == 0)
                return depth;
            if((tfir & 8657567744LL) == 0)
                return depth;
            if((tfir & 4311810048LL) == 0)
                return depth;
            break;
        case 10:
            if((tfir & 3489660928LL) == 0)
                return depth;
            if((tfir & 7516192768LL) == 0)
                return depth;
            if((tfir & 4227328LL) == 0)
                return depth;
            if((tfir & 8521728LL) == 0)
                return depth;
            if((tfir & 34368258048LL) == 0)
                return depth;
            if((tfir & 962072674304LL) == 0)
                return depth;
            if((tfir & 3023656976384LL) == 0)
                return depth;
            if((tfir & 8657567744LL) == 0)
                return depth;
            if((tfir & 4311810048LL) == 0)
                return depth;
            break;
        case 11:
            if((tfir & 27262976LL) == 0)
                return depth;
            if((tfir & 58720256LL) == 0)
                return depth;
            if((tfir & 33026LL) == 0)
                return depth;
            if((tfir & 275951665152LL) == 0)
                return depth;
            if((tfir & 66576LL) == 0)
                return depth;
            if((tfir & 268502016LL) == 0)
                return depth;
            if((tfir & 962072674304LL) == 0)
                return depth;
            if((tfir & 3023656976384LL) == 0)
                return depth;
            if((tfir & 8657567744LL) == 0)
                return depth;
            if((tfir & 4311810048LL) == 0)
                return depth;
            break;
        case 12:
            if((tfir & 212992LL) == 0)
                return depth;
            if((tfir & 458752LL) == 0)
                return depth;
            if((tfir & 2155872384LL) == 0)
                return depth;
            if((tfir & 551911686144LL) == 0)
                return depth;
            if((tfir & 2097672LL) == 0)
                return depth;
            if((tfir & 962072674304LL) == 0)
                return depth;
            if((tfir & 3023656976384LL) == 0)
                return depth;
            if((tfir & 8657567744LL) == 0)
                return depth;
            if((tfir & 4311810048LL) == 0)
                return depth;
            break;
        case 13:
            if((tfir & 1664LL) == 0)
                return depth;
            if((tfir & 3584LL) == 0)
                return depth;
            if((tfir & 16842753LL) == 0)
                return depth;
            if((tfir & 4311810048LL) == 0)
                return depth;
            if((tfir & 962072674304LL) == 0)
                return depth;
            if((tfir & 3023656976384LL) == 0)
                return depth;
            if((tfir & 8657567744LL) == 0)
                return depth;
            break;
        case 14:
            if((tfir & 13LL) == 0)
                return depth;
            if((tfir & 28LL) == 0)
                return depth;
            if((tfir & 33686016LL) == 0)
                return depth;
            if((tfir & 962072674304LL) == 0)
                return depth;
            if((tfir & 3023656976384LL) == 0)
                return depth;
            if((tfir & 8657567744LL) == 0)
                return depth;
            if((tfir & 4311810048LL) == 0)
                return depth;
            break;
        case 16:
            if((tfir & 7516192768LL) == 0)
                return depth;
            if((tfir & 23622320128LL) == 0)
                return depth;
            if((tfir & 67637248LL) == 0)
                return depth;
            if((tfir & 33686016LL) == 0)
                return depth;
            if((tfir & 2199056941056LL) == 0)
                return depth;
            break;
        case 17:
            if((tfir & 446676598784LL) == 0)
                return depth;
            if((tfir & 962072674304LL) == 0)
                return depth;
            if((tfir & 541097984LL) == 0)
                return depth;
            if((tfir & 1090781184LL) == 0)
                return depth;
            if((tfir & 7516192768LL) == 0)
                return depth;
            if((tfir & 23622320128LL) == 0)
                return depth;
            if((tfir & 67637248LL) == 0)
                return depth;
            if((tfir & 33686016LL) == 0)
                return depth;
            if((tfir & 2199056941056LL) == 0)
                return depth;
            break;
        case 18:
            if((tfir & 3489660928LL) == 0)
                return depth;
            if((tfir & 7516192768LL) == 0)
                return depth;
            if((tfir & 4227328LL) == 0)
                return depth;
            if((tfir & 8521728LL) == 0)
                return depth;
            if((tfir & 34368258048LL) == 0)
                return depth;
            if((tfir & 23622320128LL) == 0)
                return depth;
            if((tfir & 67637248LL) == 0)
                return depth;
            if((tfir & 33686016LL) == 0)
                return depth;
            if((tfir & 2199056941056LL) == 0)
                return depth;
            break;
        case 19:
            if((tfir & 27262976LL) == 0)
                return depth;
            if((tfir & 58720256LL) == 0)
                return depth;
            if((tfir & 33026LL) == 0)
                return depth;
            if((tfir & 275951665152LL) == 0)
                return depth;
            if((tfir & 66576LL) == 0)
                return depth;
            if((tfir & 268502016LL) == 0)
                return depth;
            if((tfir & 7516192768LL) == 0)
                return depth;
            if((tfir & 23622320128LL) == 0)
                return depth;
            if((tfir & 67637248LL) == 0)
                return depth;
            if((tfir & 33686016LL) == 0)
                return depth;
            if((tfir & 2199056941056LL) == 0)
                return depth;
            break;
        case 20:
            if((tfir & 212992LL) == 0)
                return depth;
            if((tfir & 458752LL) == 0)
                return depth;
            if((tfir & 2155872384LL) == 0)
                return depth;
            if((tfir & 551911686144LL) == 0)
                return depth;
            if((tfir & 2097672LL) == 0)
                return depth;
            if((tfir & 7516192768LL) == 0)
                return depth;
            if((tfir & 23622320128LL) == 0)
                return depth;
            if((tfir & 67637248LL) == 0)
                return depth;
            if((tfir & 33686016LL) == 0)
                return depth;
            if((tfir & 2199056941056LL) == 0)
                return depth;
            break;
        case 21:
            if((tfir & 1664LL) == 0)
                return depth;
            if((tfir & 3584LL) == 0)
                return depth;
            if((tfir & 16842753LL) == 0)
                return depth;
            if((tfir & 4311810048LL) == 0)
                return depth;
            if((tfir & 7516192768LL) == 0)
                return depth;
            if((tfir & 23622320128LL) == 0)
                return depth;
            if((tfir & 67637248LL) == 0)
                return depth;
            if((tfir & 33686016LL) == 0)
                return depth;
            if((tfir & 2199056941056LL) == 0)
                return depth;
            break;
        case 22:
            if((tfir & 13LL) == 0)
                return depth;
            if((tfir & 28LL) == 0)
                return depth;
            if((tfir & 33686016LL) == 0)
                return depth;
            if((tfir & 7516192768LL) == 0)
                return depth;
            if((tfir & 23622320128LL) == 0)
                return depth;
            if((tfir & 67637248LL) == 0)
                return depth;
            if((tfir & 2199056941056LL) == 0)
                return depth;
            break;
        case 24:
            if((tfir & 58720256LL) == 0)
                return depth;
            if((tfir & 184549376LL) == 0)
                return depth;
            if((tfir & 528416LL) == 0)
                return depth;
            if((tfir & 263172LL) == 0)
                return depth;
            if((tfir & 17180132352LL) == 0)
                return depth;
            if((tfir & 279173922816LL) == 0)
                return depth;
            break;
        case 25:
            if((tfir & 446676598784LL) == 0)
                return depth;
            if((tfir & 962072674304LL) == 0)
                return depth;
            if((tfir & 541097984LL) == 0)
                return depth;
            if((tfir & 1090781184LL) == 0)
                return depth;
            if((tfir & 58720256LL) == 0)
                return depth;
            if((tfir & 184549376LL) == 0)
                return depth;
            if((tfir & 528416LL) == 0)
                return depth;
            if((tfir & 263172LL) == 0)
                return depth;
            if((tfir & 17180132352LL) == 0)
                return depth;
            if((tfir & 279173922816LL) == 0)
                return depth;
            break;
        case 26:
            if((tfir & 3489660928LL) == 0)
                return depth;
            if((tfir & 7516192768LL) == 0)
                return depth;
            if((tfir & 4227328LL) == 0)
                return depth;
            if((tfir & 8521728LL) == 0)
                return depth;
            if((tfir & 34368258048LL) == 0)
                return depth;
            if((tfir & 58720256LL) == 0)
                return depth;
            if((tfir & 184549376LL) == 0)
                return depth;
            if((tfir & 528416LL) == 0)
                return depth;
            if((tfir & 263172LL) == 0)
                return depth;
            if((tfir & 17180132352LL) == 0)
                return depth;
            if((tfir & 279173922816LL) == 0)
                return depth;
            break;
        case 27:
            if((tfir & 27262976LL) == 0)
                return depth;
            if((tfir & 58720256LL) == 0)
                return depth;
            if((tfir & 33026LL) == 0)
                return depth;
            if((tfir & 275951665152LL) == 0)
                return depth;
            if((tfir & 66576LL) == 0)
                return depth;
            if((tfir & 268502016LL) == 0)
                return depth;
            if((tfir & 184549376LL) == 0)
                return depth;
            if((tfir & 528416LL) == 0)
                return depth;
            if((tfir & 263172LL) == 0)
                return depth;
            if((tfir & 17180132352LL) == 0)
                return depth;
            if((tfir & 279173922816LL) == 0)
                return depth;
            break;
        case 28:
            if((tfir & 212992LL) == 0)
                return depth;
            if((tfir & 458752LL) == 0)
                return depth;
            if((tfir & 2155872384LL) == 0)
                return depth;
            if((tfir & 551911686144LL) == 0)
                return depth;
            if((tfir & 2097672LL) == 0)
                return depth;
            if((tfir & 58720256LL) == 0)
                return depth;
            if((tfir & 184549376LL) == 0)
                return depth;
            if((tfir & 528416LL) == 0)
                return depth;
            if((tfir & 263172LL) == 0)
                return depth;
            if((tfir & 17180132352LL) == 0)
                return depth;
            if((tfir & 279173922816LL) == 0)
                return depth;
            break;
        case 29:
            if((tfir & 1664LL) == 0)
                return depth;
            if((tfir & 3584LL) == 0)
                return depth;
            if((tfir & 16842753LL) == 0)
                return depth;
            if((tfir & 4311810048LL) == 0)
                return depth;
            if((tfir & 58720256LL) == 0)
                return depth;
            if((tfir & 184549376LL) == 0)
                return depth;
            if((tfir & 528416LL) == 0)
                return depth;
            if((tfir & 263172LL) == 0)
                return depth;
            if((tfir & 17180132352LL) == 0)
                return depth;
            if((tfir & 279173922816LL) == 0)
                return depth;
            break;
        case 30:
            if((tfir & 13LL) == 0)
                return depth;
            if((tfir & 28LL) == 0)
                return depth;
            if((tfir & 33686016LL) == 0)
                return depth;
            if((tfir & 58720256LL) == 0)
                return depth;
            if((tfir & 184549376LL) == 0)
                return depth;
            if((tfir & 528416LL) == 0)
                return depth;
            if((tfir & 263172LL) == 0)
                return depth;
            if((tfir & 17180132352LL) == 0)
                return depth;
            if((tfir & 279173922816LL) == 0)
                return depth;
            break;
        case 32:
            if((tfir & 458752LL) == 0)
                return depth;
            if((tfir & 1441792LL) == 0)
                return depth;
            if((tfir & 134219784LL) == 0)
                return depth;
            if((tfir & 2181046272LL) == 0)
                return depth;
            if((tfir & 139619991552LL) == 0)
                return depth;
            break;
        case 33:
            if((tfir & 446676598784LL) == 0)
                return depth;
            if((tfir & 962072674304LL) == 0)
                return depth;
            if((tfir & 541097984LL) == 0)
                return depth;
            if((tfir & 1090781184LL) == 0)
                return depth;
            if((tfir & 458752LL) == 0)
                return depth;
            if((tfir & 1441792LL) == 0)
                return depth;
            if((tfir & 134219784LL) == 0)
                return depth;
            if((tfir & 2181046272LL) == 0)
                return depth;
            if((tfir & 139619991552LL) == 0)
                return depth;
            break;
        case 34:
            if((tfir & 3489660928LL) == 0)
                return depth;
            if((tfir & 7516192768LL) == 0)
                return depth;
            if((tfir & 4227328LL) == 0)
                return depth;
            if((tfir & 8521728LL) == 0)
                return depth;
            if((tfir & 34368258048LL) == 0)
                return depth;
            if((tfir & 458752LL) == 0)
                return depth;
            if((tfir & 1441792LL) == 0)
                return depth;
            if((tfir & 134219784LL) == 0)
                return depth;
            if((tfir & 2181046272LL) == 0)
                return depth;
            if((tfir & 139619991552LL) == 0)
                return depth;
            break;
        case 35:
            if((tfir & 27262976LL) == 0)
                return depth;
            if((tfir & 58720256LL) == 0)
                return depth;
            if((tfir & 33026LL) == 0)
                return depth;
            if((tfir & 275951665152LL) == 0)
                return depth;
            if((tfir & 66576LL) == 0)
                return depth;
            if((tfir & 268502016LL) == 0)
                return depth;
            if((tfir & 458752LL) == 0)
                return depth;
            if((tfir & 1441792LL) == 0)
                return depth;
            if((tfir & 134219784LL) == 0)
                return depth;
            if((tfir & 2181046272LL) == 0)
                return depth;
            if((tfir & 139619991552LL) == 0)
                return depth;
            break;
        case 36:
            if((tfir & 212992LL) == 0)
                return depth;
            if((tfir & 458752LL) == 0)
                return depth;
            if((tfir & 2155872384LL) == 0)
                return depth;
            if((tfir & 551911686144LL) == 0)
                return depth;
            if((tfir & 2097672LL) == 0)
                return depth;
            if((tfir & 1441792LL) == 0)
                return depth;
            if((tfir & 134219784LL) == 0)
                return depth;
            if((tfir & 2181046272LL) == 0)
                return depth;
            if((tfir & 139619991552LL) == 0)
                return depth;
            break;
        case 37:
            if((tfir & 1664LL) == 0)
                return depth;
            if((tfir & 3584LL) == 0)
                return depth;
            if((tfir & 16842753LL) == 0)
                return depth;
            if((tfir & 4311810048LL) == 0)
                return depth;
            if((tfir & 458752LL) == 0)
                return depth;
            if((tfir & 1441792LL) == 0)
                return depth;
            if((tfir & 134219784LL) == 0)
                return depth;
            if((tfir & 2181046272LL) == 0)
                return depth;
            if((tfir & 139619991552LL) == 0)
                return depth;
            break;
        case 38:
            if((tfir & 13LL) == 0)
                return depth;
            if((tfir & 28LL) == 0)
                return depth;
            if((tfir & 33686016LL) == 0)
                return depth;
            if((tfir & 458752LL) == 0)
                return depth;
            if((tfir & 1441792LL) == 0)
                return depth;
            if((tfir & 134219784LL) == 0)
                return depth;
            if((tfir & 2181046272LL) == 0)
                return depth;
            if((tfir & 139619991552LL) == 0)
                return depth;
            break;
        case 40:
            if((tfir & 3584LL) == 0)
                return depth;
            if((tfir & 11264LL) == 0)
                return depth;
            if((tfir & 17039424LL) == 0)
                return depth;
            if((tfir & 1090781184LL) == 0)
                return depth;
            break;
        case 41:
            if((tfir & 446676598784LL) == 0)
                return depth;
            if((tfir & 962072674304LL) == 0)
                return depth;
            if((tfir & 541097984LL) == 0)
                return depth;
            if((tfir & 1090781184LL) == 0)
                return depth;
            if((tfir & 3584LL) == 0)
                return depth;
            if((tfir & 11264LL) == 0)
                return depth;
            if((tfir & 17039424LL) == 0)
                return depth;
            break;
        case 42:
            if((tfir & 3489660928LL) == 0)
                return depth;
            if((tfir & 7516192768LL) == 0)
                return depth;
            if((tfir & 4227328LL) == 0)
                return depth;
            if((tfir & 8521728LL) == 0)
                return depth;
            if((tfir & 34368258048LL) == 0)
                return depth;
            if((tfir & 3584LL) == 0)
                return depth;
            if((tfir & 11264LL) == 0)
                return depth;
            if((tfir & 17039424LL) == 0)
                return depth;
            if((tfir & 1090781184LL) == 0)
                return depth;
            break;
        case 43:
            if((tfir & 27262976LL) == 0)
                return depth;
            if((tfir & 58720256LL) == 0)
                return depth;
            if((tfir & 33026LL) == 0)
                return depth;
            if((tfir & 275951665152LL) == 0)
                return depth;
            if((tfir & 66576LL) == 0)
                return depth;
            if((tfir & 268502016LL) == 0)
                return depth;
            if((tfir & 3584LL) == 0)
                return depth;
            if((tfir & 11264LL) == 0)
                return depth;
            if((tfir & 17039424LL) == 0)
                return depth;
            if((tfir & 1090781184LL) == 0)
                return depth;
            break;
        case 44:
            if((tfir & 212992LL) == 0)
                return depth;
            if((tfir & 458752LL) == 0)
                return depth;
            if((tfir & 2155872384LL) == 0)
                return depth;
            if((tfir & 551911686144LL) == 0)
                return depth;
            if((tfir & 2097672LL) == 0)
                return depth;
            if((tfir & 3584LL) == 0)
                return depth;
            if((tfir & 11264LL) == 0)
                return depth;
            if((tfir & 17039424LL) == 0)
                return depth;
            if((tfir & 1090781184LL) == 0)
                return depth;
            break;
        case 45:
            if((tfir & 1664LL) == 0)
                return depth;
            if((tfir & 3584LL) == 0)
                return depth;
            if((tfir & 16842753LL) == 0)
                return depth;
            if((tfir & 4311810048LL) == 0)
                return depth;
            if((tfir & 11264LL) == 0)
                return depth;
            if((tfir & 17039424LL) == 0)
                return depth;
            if((tfir & 1090781184LL) == 0)
                return depth;
            break;
        case 46:
            if((tfir & 13LL) == 0)
                return depth;
            if((tfir & 28LL) == 0)
                return depth;
            if((tfir & 33686016LL) == 0)
                return depth;
            if((tfir & 3584LL) == 0)
                return depth;
            if((tfir & 11264LL) == 0)
                return depth;
            if((tfir & 17039424LL) == 0)
                return depth;
            if((tfir & 1090781184LL) == 0)
                return depth;
            break;
        case 48:
            if((tfir & 28LL) == 0)
                return depth;
            if((tfir & 88LL) == 0)
                return depth;
            if((tfir & 8521728LL) == 0)
                return depth;
            break;
        case 49:
            if((tfir & 446676598784LL) == 0)
                return depth;
            if((tfir & 962072674304LL) == 0)
                return depth;
            if((tfir & 541097984LL) == 0)
                return depth;
            if((tfir & 1090781184LL) == 0)
                return depth;
            if((tfir & 28LL) == 0)
                return depth;
            if((tfir & 88LL) == 0)
                return depth;
            if((tfir & 8521728LL) == 0)
                return depth;
            break;
        case 50:
            if((tfir & 3489660928LL) == 0)
                return depth;
            if((tfir & 7516192768LL) == 0)
                return depth;
            if((tfir & 4227328LL) == 0)
                return depth;
            if((tfir & 8521728LL) == 0)
                return depth;
            if((tfir & 34368258048LL) == 0)
                return depth;
            if((tfir & 28LL) == 0)
                return depth;
            if((tfir & 88LL) == 0)
                return depth;
            break;
        case 51:
            if((tfir & 27262976LL) == 0)
                return depth;
            if((tfir & 58720256LL) == 0)
                return depth;
            if((tfir & 33026LL) == 0)
                return depth;
            if((tfir & 275951665152LL) == 0)
                return depth;
            if((tfir & 66576LL) == 0)
                return depth;
            if((tfir & 268502016LL) == 0)
                return depth;
            if((tfir & 28LL) == 0)
                return depth;
            if((tfir & 88LL) == 0)
                return depth;
            if((tfir & 8521728LL) == 0)
                return depth;
            break;
        case 52:
            if((tfir & 212992LL) == 0)
                return depth;
            if((tfir & 458752LL) == 0)
                return depth;
            if((tfir & 2155872384LL) == 0)
                return depth;
            if((tfir & 551911686144LL) == 0)
                return depth;
            if((tfir & 2097672LL) == 0)
                return depth;
            if((tfir & 28LL) == 0)
                return depth;
            if((tfir & 88LL) == 0)
                return depth;
            if((tfir & 8521728LL) == 0)
                return depth;
            break;
        case 53:
            if((tfir & 1664LL) == 0)
                return depth;
            if((tfir & 3584LL) == 0)
                return depth;
            if((tfir & 16842753LL) == 0)
                return depth;
            if((tfir & 4311810048LL) == 0)
                return depth;
            if((tfir & 28LL) == 0)
                return depth;
            if((tfir & 88LL) == 0)
                return depth;
            if((tfir & 8521728LL) == 0)
                return depth;
            break;
        case 54:
            if((tfir & 13LL) == 0)
                return depth;
            if((tfir & 28LL) == 0)
                return depth;
            if((tfir & 33686016LL) == 0)
                return depth;
            if((tfir & 88LL) == 0)
                return depth;
            if((tfir & 8521728LL) == 0)
                return depth;
            break;
        }
        switch((left1) | (left7 << 3)){
        case 1:
            if((tfir & 481036337152LL) == 0)
                return depth;
            if((tfir & 270548992LL) == 0)
                return depth;
            if((tfir & 545390592LL) == 0)
                return depth;
            break;
        case 2:
            if((tfir & 3758096384LL) == 0)
                return depth;
            if((tfir & 2113664LL) == 0)
                return depth;
            if((tfir & 4260864LL) == 0)
                return depth;
            break;
        case 3:
            if((tfir & 29360128LL) == 0)
                return depth;
            if((tfir & 16513LL) == 0)
                return depth;
            if((tfir & 33288LL) == 0)
                return depth;
            break;
        case 4:
            if((tfir & 229376LL) == 0)
                return depth;
            if((tfir & 275955843072LL) == 0)
                return depth;
            break;
        case 5:
            if((tfir & 1792LL) == 0)
                return depth;
            if((tfir & 2155905024LL) == 0)
                return depth;
            break;
        case 6:
            if((tfir & 14LL) == 0)
                return depth;
            if((tfir & 16843008LL) == 0)
                return depth;
            break;
        case 8:
            if((tfir & 1924145348608LL) == 0)
                return depth;
            if((tfir & 17315135488LL) == 0)
                return depth;
            if((tfir & 8623620096LL) == 0)
                return depth;
            break;
        case 9:
            if((tfir & 481036337152LL) == 0)
                return depth;
            if((tfir & 270548992LL) == 0)
                return depth;
            if((tfir & 545390592LL) == 0)
                return depth;
            if((tfir & 1924145348608LL) == 0)
                return depth;
            if((tfir & 17315135488LL) == 0)
                return depth;
            if((tfir & 8623620096LL) == 0)
                return depth;
            break;
        case 10:
            if((tfir & 3758096384LL) == 0)
                return depth;
            if((tfir & 2113664LL) == 0)
                return depth;
            if((tfir & 4260864LL) == 0)
                return depth;
            if((tfir & 1924145348608LL) == 0)
                return depth;
            if((tfir & 17315135488LL) == 0)
                return depth;
            if((tfir & 8623620096LL) == 0)
                return depth;
            break;
        case 11:
            if((tfir & 29360128LL) == 0)
                return depth;
            if((tfir & 16513LL) == 0)
                return depth;
            if((tfir & 33288LL) == 0)
                return depth;
            if((tfir & 1924145348608LL) == 0)
                return depth;
            if((tfir & 17315135488LL) == 0)
                return depth;
            if((tfir & 8623620096LL) == 0)
                return depth;
            break;
        case 12:
            if((tfir & 229376LL) == 0)
                return depth;
            if((tfir & 275955843072LL) == 0)
                return depth;
            if((tfir & 1924145348608LL) == 0)
                return depth;
            if((tfir & 17315135488LL) == 0)
                return depth;
            if((tfir & 8623620096LL) == 0)
                return depth;
            break;
        case 13:
            if((tfir & 1792LL) == 0)
                return depth;
            if((tfir & 2155905024LL) == 0)
                return depth;
            if((tfir & 1924145348608LL) == 0)
                return depth;
            if((tfir & 17315135488LL) == 0)
                return depth;
            if((tfir & 8623620096LL) == 0)
                return depth;
            break;
        case 14:
            if((tfir & 14LL) == 0)
                return depth;
            if((tfir & 16843008LL) == 0)
                return depth;
            if((tfir & 1924145348608LL) == 0)
                return depth;
            if((tfir & 17315135488LL) == 0)
                return depth;
            if((tfir & 8623620096LL) == 0)
                return depth;
            break;
        case 16:
            if((tfir & 15032385536LL) == 0)
                return depth;
            if((tfir & 135274496LL) == 0)
                return depth;
            if((tfir & 67372032LL) == 0)
                return depth;
            break;
        case 17:
            if((tfir & 481036337152LL) == 0)
                return depth;
            if((tfir & 270548992LL) == 0)
                return depth;
            if((tfir & 545390592LL) == 0)
                return depth;
            if((tfir & 15032385536LL) == 0)
                return depth;
            if((tfir & 135274496LL) == 0)
                return depth;
            if((tfir & 67372032LL) == 0)
                return depth;
            break;
        case 18:
            if((tfir & 3758096384LL) == 0)
                return depth;
            if((tfir & 2113664LL) == 0)
                return depth;
            if((tfir & 4260864LL) == 0)
                return depth;
            if((tfir & 15032385536LL) == 0)
                return depth;
            if((tfir & 135274496LL) == 0)
                return depth;
            if((tfir & 67372032LL) == 0)
                return depth;
            break;
        case 19:
            if((tfir & 29360128LL) == 0)
                return depth;
            if((tfir & 16513LL) == 0)
                return depth;
            if((tfir & 33288LL) == 0)
                return depth;
            if((tfir & 15032385536LL) == 0)
                return depth;
            if((tfir & 135274496LL) == 0)
                return depth;
            if((tfir & 67372032LL) == 0)
                return depth;
            break;
        case 20:
            if((tfir & 229376LL) == 0)
                return depth;
            if((tfir & 275955843072LL) == 0)
                return depth;
            if((tfir & 15032385536LL) == 0)
                return depth;
            if((tfir & 135274496LL) == 0)
                return depth;
            if((tfir & 67372032LL) == 0)
                return depth;
            break;
        case 21:
            if((tfir & 1792LL) == 0)
                return depth;
            if((tfir & 2155905024LL) == 0)
                return depth;
            if((tfir & 15032385536LL) == 0)
                return depth;
            if((tfir & 135274496LL) == 0)
                return depth;
            if((tfir & 67372032LL) == 0)
                return depth;
            break;
        case 22:
            if((tfir & 14LL) == 0)
                return depth;
            if((tfir & 16843008LL) == 0)
                return depth;
            if((tfir & 15032385536LL) == 0)
                return depth;
            if((tfir & 135274496LL) == 0)
                return depth;
            if((tfir & 67372032LL) == 0)
                return depth;
            break;
        case 24:
            if((tfir & 117440512LL) == 0)
                return depth;
            if((tfir & 1056832LL) == 0)
                return depth;
            if((tfir & 526344LL) == 0)
                return depth;
            break;
        case 25:
            if((tfir & 481036337152LL) == 0)
                return depth;
            if((tfir & 270548992LL) == 0)
                return depth;
            if((tfir & 545390592LL) == 0)
                return depth;
            if((tfir & 117440512LL) == 0)
                return depth;
            if((tfir & 1056832LL) == 0)
                return depth;
            if((tfir & 526344LL) == 0)
                return depth;
            break;
        case 26:
            if((tfir & 3758096384LL) == 0)
                return depth;
            if((tfir & 2113664LL) == 0)
                return depth;
            if((tfir & 4260864LL) == 0)
                return depth;
            if((tfir & 117440512LL) == 0)
                return depth;
            if((tfir & 1056832LL) == 0)
                return depth;
            if((tfir & 526344LL) == 0)
                return depth;
            break;
        case 27:
            if((tfir & 29360128LL) == 0)
                return depth;
            if((tfir & 16513LL) == 0)
                return depth;
            if((tfir & 33288LL) == 0)
                return depth;
            if((tfir & 117440512LL) == 0)
                return depth;
            if((tfir & 1056832LL) == 0)
                return depth;
            if((tfir & 526344LL) == 0)
                return depth;
            break;
        case 28:
            if((tfir & 229376LL) == 0)
                return depth;
            if((tfir & 275955843072LL) == 0)
                return depth;
            if((tfir & 117440512LL) == 0)
                return depth;
            if((tfir & 1056832LL) == 0)
                return depth;
            if((tfir & 526344LL) == 0)
                return depth;
            break;
        case 29:
            if((tfir & 1792LL) == 0)
                return depth;
            if((tfir & 2155905024LL) == 0)
                return depth;
            if((tfir & 117440512LL) == 0)
                return depth;
            if((tfir & 1056832LL) == 0)
                return depth;
            if((tfir & 526344LL) == 0)
                return depth;
            break;
        case 30:
            if((tfir & 14LL) == 0)
                return depth;
            if((tfir & 16843008LL) == 0)
                return depth;
            if((tfir & 117440512LL) == 0)
                return depth;
            if((tfir & 1056832LL) == 0)
                return depth;
            if((tfir & 526344LL) == 0)
                return depth;
            break;
        case 32:
            if((tfir & 917504LL) == 0)
                return depth;
            if((tfir & 279239983104LL) == 0)
                return depth;
            break;
        case 33:
            if((tfir & 481036337152LL) == 0)
                return depth;
            if((tfir & 270548992LL) == 0)
                return depth;
            if((tfir & 545390592LL) == 0)
                return depth;
            if((tfir & 917504LL) == 0)
                return depth;
            if((tfir & 279239983104LL) == 0)
                return depth;
            break;
        case 34:
            if((tfir & 3758096384LL) == 0)
                return depth;
            if((tfir & 2113664LL) == 0)
                return depth;
            if((tfir & 4260864LL) == 0)
                return depth;
            if((tfir & 917504LL) == 0)
                return depth;
            if((tfir & 279239983104LL) == 0)
                return depth;
            break;
        case 35:
            if((tfir & 29360128LL) == 0)
                return depth;
            if((tfir & 16513LL) == 0)
                return depth;
            if((tfir & 33288LL) == 0)
                return depth;
            if((tfir & 917504LL) == 0)
                return depth;
            if((tfir & 279239983104LL) == 0)
                return depth;
            break;
        case 36:
            if((tfir & 229376LL) == 0)
                return depth;
            if((tfir & 275955843072LL) == 0)
                return depth;
            if((tfir & 917504LL) == 0)
                return depth;
            if((tfir & 279239983104LL) == 0)
                return depth;
            break;
        case 37:
            if((tfir & 1792LL) == 0)
                return depth;
            if((tfir & 2155905024LL) == 0)
                return depth;
            if((tfir & 917504LL) == 0)
                return depth;
            if((tfir & 279239983104LL) == 0)
                return depth;
            break;
        case 38:
            if((tfir & 14LL) == 0)
                return depth;
            if((tfir & 16843008LL) == 0)
                return depth;
            if((tfir & 917504LL) == 0)
                return depth;
            if((tfir & 279239983104LL) == 0)
                return depth;
            break;
        case 40:
            if((tfir & 7168LL) == 0)
                return depth;
            if((tfir & 2181562368LL) == 0)
                return depth;
            break;
        case 41:
            if((tfir & 481036337152LL) == 0)
                return depth;
            if((tfir & 270548992LL) == 0)
                return depth;
            if((tfir & 545390592LL) == 0)
                return depth;
            if((tfir & 7168LL) == 0)
                return depth;
            if((tfir & 2181562368LL) == 0)
                return depth;
            break;
        case 42:
            if((tfir & 3758096384LL) == 0)
                return depth;
            if((tfir & 2113664LL) == 0)
                return depth;
            if((tfir & 4260864LL) == 0)
                return depth;
            if((tfir & 7168LL) == 0)
                return depth;
            if((tfir & 2181562368LL) == 0)
                return depth;
            break;
        case 43:
            if((tfir & 29360128LL) == 0)
                return depth;
            if((tfir & 16513LL) == 0)
                return depth;
            if((tfir & 33288LL) == 0)
                return depth;
            if((tfir & 7168LL) == 0)
                return depth;
            if((tfir & 2181562368LL) == 0)
                return depth;
            break;
        case 44:
            if((tfir & 229376LL) == 0)
                return depth;
            if((tfir & 275955843072LL) == 0)
                return depth;
            if((tfir & 7168LL) == 0)
                return depth;
            if((tfir & 2181562368LL) == 0)
                return depth;
            break;
        case 45:
            if((tfir & 1792LL) == 0)
                return depth;
            if((tfir & 2155905024LL) == 0)
                return depth;
            if((tfir & 7168LL) == 0)
                return depth;
            if((tfir & 2181562368LL) == 0)
                return depth;
            break;
        case 46:
            if((tfir & 14LL) == 0)
                return depth;
            if((tfir & 16843008LL) == 0)
                return depth;
            if((tfir & 7168LL) == 0)
                return depth;
            if((tfir & 2181562368LL) == 0)
                return depth;
            break;
        case 48:
            if((tfir & 56LL) == 0)
                return depth;
            if((tfir & 17043456LL) == 0)
                return depth;
            break;
        case 49:
            if((tfir & 481036337152LL) == 0)
                return depth;
            if((tfir & 270548992LL) == 0)
                return depth;
            if((tfir & 545390592LL) == 0)
                return depth;
            if((tfir & 56LL) == 0)
                return depth;
            if((tfir & 17043456LL) == 0)
                return depth;
            break;
        case 50:
            if((tfir & 3758096384LL) == 0)
                return depth;
            if((tfir & 2113664LL) == 0)
                return depth;
            if((tfir & 4260864LL) == 0)
                return depth;
            if((tfir & 56LL) == 0)
                return depth;
            if((tfir & 17043456LL) == 0)
                return depth;
            break;
        case 51:
            if((tfir & 29360128LL) == 0)
                return depth;
            if((tfir & 16513LL) == 0)
                return depth;
            if((tfir & 33288LL) == 0)
                return depth;
            if((tfir & 56LL) == 0)
                return depth;
            if((tfir & 17043456LL) == 0)
                return depth;
            break;
        case 52:
            if((tfir & 229376LL) == 0)
                return depth;
            if((tfir & 275955843072LL) == 0)
                return depth;
            if((tfir & 56LL) == 0)
                return depth;
            if((tfir & 17043456LL) == 0)
                return depth;
            break;
        case 53:
            if((tfir & 1792LL) == 0)
                return depth;
            if((tfir & 2155905024LL) == 0)
                return depth;
            if((tfir & 56LL) == 0)
                return depth;
            if((tfir & 17043456LL) == 0)
                return depth;
            break;
        case 54:
            if((tfir & 14LL) == 0)
                return depth;
            if((tfir & 16843008LL) == 0)
                return depth;
            if((tfir & 56LL) == 0)
                return depth;
            if((tfir & 17043456LL) == 0)
                return depth;
            break;
        }
        depth--;
        if(depth == 0)
            return 0;
        int alphabeg, maxscore = depth - 2;
        if(depth > mincachedepth){
            auto it = TranspositionTable.find(cfir | (csec << 7));
            if (it != TranspositionTable.end()){
                ttentry entry = it->second;
                if(entry.flag & 1){
                    if(entry.score <= alpha) //if current alpha >= cached alpha then the alpha during evaluation wont change, thus we can return the current alpha
                        return alpha;
                    if(entry.flag > 1) //if the cached alpha is exact and it is bigger than the current alpha (because of the condition above) then we can return it
                        return entry.score;
                    beta = min(beta, entry.score);
                    //cached alpha is lower bound
                }
                else
                {
                    if(entry.score > alpha){
                        if(entry.score >= beta)
                            return entry.score;
                        alpha = entry.score;
                    }
                }
            }
            alphabeg = alpha;
        }
        //888070
        if(depth > minscoredepth){
            int index1 = 6, index2 = 5, index3 = 4, index4 = 3, index5 = 2, index6 = 1, index7 = 0;
            if(left4 > 0)
                index1 |= scoremove(tfir, 3, left4);
            if(left5 > 0)
                index2 |= scoremove(tfir, 4, left5);
            if(left3 > 0)
                index3 |= scoremove(tfir, 2, left3);
            if(left6 > 0)
                index4 |= scoremove(tfir, 5, left6);
            if(left2 > 0)
                index5 |= scoremove(tfir, 1, left2);
            if(left7 > 0)
                index6 |= scoremove(tfir, 6, left7);
            if(left1 > 0)
                index7 |= scoremove(tfir, 0, left1);
            sorter(index1, index2, index3, index4, index5, index6, index7);
            switch(index1 & 7){
                case 0:
                if(left1 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (42 - (left1) * 7)), csec ^ (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 2:
                if(left2 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (43 - (left2) * 7)), csec ^ (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 4:
                if(left3 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (44 - (left3) * 7)), csec ^ (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 6:
                if(left4 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (45 - (left4) * 7)), csec ^ (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 5:
                if(left5 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (46 - (left5) * 7)), csec ^ (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 3:
                if(left6 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (47 - (left6) * 7)), csec ^ (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 1:
                if(left7 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (48 - (left7) * 7)), csec ^ (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
            }
            switch(index2 & 7){
                case 0:
                if(left1 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (42 - (left1) * 7)), csec ^ (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 2:
                if(left2 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (43 - (left2) * 7)), csec ^ (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 4:
                if(left3 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (44 - (left3) * 7)), csec ^ (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 6:
                if(left4 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (45 - (left4) * 7)), csec ^ (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 5:
                if(left5 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (46 - (left5) * 7)), csec ^ (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 3:
                if(left6 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (47 - (left6) * 7)), csec ^ (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 1:
                if(left7 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (48 - (left7) * 7)), csec ^ (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
            }
            switch(index3 & 7){
                case 0:
                if(left1 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (42 - (left1) * 7)), csec ^ (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 2:
                if(left2 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (43 - (left2) * 7)), csec ^ (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 4:
                if(left3 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (44 - (left3) * 7)), csec ^ (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 6:
                if(left4 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (45 - (left4) * 7)), csec ^ (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 5:
                if(left5 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (46 - (left5) * 7)), csec ^ (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 3:
                if(left6 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (47 - (left6) * 7)), csec ^ (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 1:
                if(left7 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (48 - (left7) * 7)), csec ^ (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
            }
            switch(index4 & 7){
                case 0:
                if(left1 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (42 - (left1) * 7)), csec ^ (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 2:
                if(left2 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (43 - (left2) * 7)), csec ^ (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 4:
                if(left3 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (44 - (left3) * 7)), csec ^ (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 6:
                if(left4 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (45 - (left4) * 7)), csec ^ (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 5:
                if(left5 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (46 - (left5) * 7)), csec ^ (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 3:
                if(left6 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (47 - (left6) * 7)), csec ^ (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 1:
                if(left7 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (48 - (left7) * 7)), csec ^ (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
            }
            switch(index5 & 7){
                case 0:
                if(left1 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (42 - (left1) * 7)), csec ^ (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 2:
                if(left2 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (43 - (left2) * 7)), csec ^ (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 4:
                if(left3 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (44 - (left3) * 7)), csec ^ (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 6:
                if(left4 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (45 - (left4) * 7)), csec ^ (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 5:
                if(left5 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (46 - (left5) * 7)), csec ^ (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 3:
                if(left6 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (47 - (left6) * 7)), csec ^ (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 1:
                if(left7 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (48 - (left7) * 7)), csec ^ (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
            }
            switch(index6 & 7){
                case 0:
                if(left1 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (42 - (left1) * 7)), csec ^ (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 2:
                if(left2 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (43 - (left2) * 7)), csec ^ (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 4:
                if(left3 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (44 - (left3) * 7)), csec ^ (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 6:
                if(left4 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (45 - (left4) * 7)), csec ^ (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 5:
                if(left5 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (46 - (left5) * 7)), csec ^ (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 3:
                if(left6 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (47 - (left6) * 7)), csec ^ (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 1:
                if(left7 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (48 - (left7) * 7)), csec ^ (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
            }
            switch(index7 & 7){
                case 0:
                if(left1 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (42 - (left1) * 7)), csec ^ (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 2:
                if(left2 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (43 - (left2) * 7)), csec ^ (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 4:
                if(left3 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (44 - (left3) * 7)), csec ^ (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 6:
                if(left4 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (45 - (left4) * 7)), csec ^ (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 5:
                if(left5 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (46 - (left5) * 7)), csec ^ (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 3:
                if(left6 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (47 - (left6) * 7)), csec ^ (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                            return reschild;
                        }
                        alpha = reschild;
                    }
                }
                break;
                case 1:
                if(left7 > 0){
                    int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (48 - (left7) * 7)), csec ^ (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1);
                    if(reschild > maxscore)
                        return reschild;
                    if(reschild > alpha){
                        if(beta <= reschild){
                            if(depth > mincachedepth)
                                TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
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
            if(left4 > 0){
                int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (45 - (left4) * 7)), csec ^ (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7);
                if(reschild > maxscore)
                    return reschild;
                if(reschild > alpha){
                    if(beta <= reschild){
                        return reschild;
                    }
                    alpha = reschild;
                }
            }
            if(left5 > 0){
                int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (46 - (left5) * 7)), csec ^ (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7);
                if(reschild > maxscore)
                    return reschild;
                if(reschild > alpha){
                    if(beta <= reschild){
                        return reschild;
                    }
                    alpha = reschild;
                }
            }
            if(left3 > 0){
                int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (44 - (left3) * 7)), csec ^ (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7);
                if(reschild > maxscore)
                    return reschild;
                if(reschild > alpha){
                    if(beta <= reschild){
                        return reschild;
                    }
                    alpha = reschild;
                }
            }
            if(left6 > 0){
                int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (47 - (left6) * 7)), csec ^ (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7);
                if(reschild > maxscore)
                    return reschild;
                if(reschild > alpha){
                    if(beta <= reschild){
                        if(depth > mincachedepth)
                            TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                        return reschild;
                    }
                    alpha = reschild;
                }
            }
            if(left2 > 0){
                int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (43 - (left2) * 7)), csec ^ (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7);
                if(reschild > maxscore)
                    return reschild;
                if(reschild > alpha){
                    if(beta <= reschild){
                        if(depth > mincachedepth)
                            TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                        return reschild;
                    }
                    alpha = reschild;
                }
            }
            if(left7 > 0){
                int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (48 - (left7) * 7)), csec ^ (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1);
                if(reschild > maxscore)
                    return reschild;
                if(reschild > alpha){
                    if(beta <= reschild){
                        if(depth > mincachedepth)
                            TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                        return reschild;
                    }
                    alpha = reschild;
                }
            }
            if(left1 > 0){
                int reschild = minimax(depth, false, beta, alpha, cfir | (1LL << (42 - (left1) * 7)), csec ^ (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7);
                if(reschild > maxscore)
                    return reschild;
                if(reschild > alpha){
                    if(beta <= reschild){
                        if(depth > mincachedepth)
                            TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                        return reschild;
                    }
                    alpha = reschild;
                }
            }
        }
        if(depth > mincachedepth){
            TranspositionTable[cfir | (csec << 7)] = {alpha, (alpha > alphabeg) ? uint8_t(3) : uint8_t(1)};
        }
        return alpha;
    }
    else
    {
        uint64_t tsec = cfir | csec;
        if(left4 > 0)
            switch(left4){
            case 6:
            if((tsec & 7LL) == 0)
                return -depth;
            if((tsec & 22LL) == 0)
                return -depth;
            if((tsec & 52LL) == 0)
                return -depth;
            if((tsec & 112LL) == 0)
                return -depth;
            if((tsec & 134744064LL) == 0)
                return -depth;
            if((tsec & 2130432LL) == 0)
                return -depth;
            break;
            case 5:
            if((tsec & 896LL) == 0)
                return -depth;
            if((tsec & 2816LL) == 0)
                return -depth;
            if((tsec & 6656LL) == 0)
                return -depth;
            if((tsec & 14336LL) == 0)
                return -depth;
            if((tsec & 67371012LL) == 0)
                return -depth;
            if((tsec & 17247240192LL) == 0)
                return -depth;
            if((tsec & 4259856LL) == 0)
                return -depth;
            if((tsec & 272695296LL) == 0)
                return -depth;
            break;
            case 4:
            if((tsec & 114688LL) == 0)
                return -depth;
            if((tsec & 360448LL) == 0)
                return -depth;
            if((tsec & 851968LL) == 0)
                return -depth;
            if((tsec & 1835008LL) == 0)
                return -depth;
            if((tsec & 33554946LL) == 0)
                return -depth;
            if((tsec & 8623489536LL) == 0)
                return -depth;
            if((tsec & 2207646744576LL) == 0)
                return -depth;
            if((tsec & 8390688LL) == 0)
                return -depth;
            if((tsec & 545261568LL) == 0)
                return -depth;
            if((tsec & 34904997888LL) == 0)
                return -depth;
            break;
            case 3:
            if((tsec & 14680064LL) == 0)
                return -depth;
            if((tsec & 46137344LL) == 0)
                return -depth;
            if((tsec & 109051904LL) == 0)
                return -depth;
            if((tsec & 234881024LL) == 0)
                return -depth;
            if((tsec & 132104LL) == 0)
                return -depth;
            if((tsec & 65793LL) == 0)
                return -depth;
            if((tsec & 4295033088LL) == 0)
                return -depth;
            if((tsec & 1103806660608LL) == 0)
                return -depth;
            if((tsec & 266304LL) == 0)
                return -depth;
            if((tsec & 1074008064LL) == 0)
                return -depth;
            if((tsec & 69793480704LL) == 0)
                return -depth;
            break;
            case 2:
            if((tsec & 1879048192LL) == 0)
                return -depth;
            if((tsec & 5905580032LL) == 0)
                return -depth;
            if((tsec & 13958643712LL) == 0)
                return -depth;
            if((tsec & 30064771072LL) == 0)
                return -depth;
            if((tsec & 16909312LL) == 0)
                return -depth;
            if((tsec & 8421504LL) == 0)
                return -depth;
            if((tsec & 549764235264LL) == 0)
                return -depth;
            if((tsec & 34086912LL) == 0)
                return -depth;
            if((tsec & 137473032192LL) == 0)
                return -depth;
            break;
            case 1:
            if((tsec & 240518168576LL) == 0)
                return -depth;
            if((tsec & 755914244096LL) == 0)
                return -depth;
            if((tsec & 1786706395136LL) == 0)
                return -depth;
            if((tsec & 3848290697216LL) == 0)
                return -depth;
            if((tsec & 2164391936LL) == 0)
                return -depth;
            if((tsec & 1077952512LL) == 0)
                return -depth;
            if((tsec & 4363124736LL) == 0)
                return -depth;
            break;
        }
        if(left3 > 0)
            switch(left3){
            case 6:
            if((tsec & 11LL) == 0)
                return -depth;
            if((tsec & 26LL) == 0)
                return -depth;
            if((tsec & 56LL) == 0)
                return -depth;
            if((tsec & 67372032LL) == 0)
                return -depth;
            break;
            case 5:
            if((tsec & 1408LL) == 0)
                return -depth;
            if((tsec & 3328LL) == 0)
                return -depth;
            if((tsec & 7168LL) == 0)
                return -depth;
            if((tsec & 33685506LL) == 0)
                return -depth;
            if((tsec & 8623620096LL) == 0)
                return -depth;
            if((tsec & 2129928LL) == 0)
                return -depth;
            break;
            case 4:
            if((tsec & 180224LL) == 0)
                return -depth;
            if((tsec & 425984LL) == 0)
                return -depth;
            if((tsec & 917504LL) == 0)
                return -depth;
            if((tsec & 16777473LL) == 0)
                return -depth;
            if((tsec & 4311744768LL) == 0)
                return -depth;
            if((tsec & 1103823372288LL) == 0)
                return -depth;
            if((tsec & 4195344LL) == 0)
                return -depth;
            if((tsec & 272630784LL) == 0)
                return -depth;
            break;
            case 3:
            if((tsec & 23068672LL) == 0)
                return -depth;
            if((tsec & 54525952LL) == 0)
                return -depth;
            if((tsec & 117440512LL) == 0)
                return -depth;
            if((tsec & 66052LL) == 0)
                return -depth;
            if((tsec & 2147516544LL) == 0)
                return -depth;
            if((tsec & 551903330304LL) == 0)
                return -depth;
            if((tsec & 133152LL) == 0)
                return -depth;
            if((tsec & 537004032LL) == 0)
                return -depth;
            if((tsec & 34896740352LL) == 0)
                return -depth;
            break;
            case 2:
            if((tsec & 2952790016LL) == 0)
                return -depth;
            if((tsec & 6979321856LL) == 0)
                return -depth;
            if((tsec & 15032385536LL) == 0)
                return -depth;
            if((tsec & 8454656LL) == 0)
                return -depth;
            if((tsec & 274882117632LL) == 0)
                return -depth;
            if((tsec & 17043456LL) == 0)
                return -depth;
            if((tsec & 68736516096LL) == 0)
                return -depth;
            break;
            case 1:
            if((tsec & 377957122048LL) == 0)
                return -depth;
            if((tsec & 893353197568LL) == 0)
                return -depth;
            if((tsec & 1924145348608LL) == 0)
                return -depth;
            if((tsec & 1082195968LL) == 0)
                return -depth;
            if((tsec & 2181562368LL) == 0)
                return -depth;
            break;
        }
        if(left5 > 0)
            switch(left5){
            case 6:
            if((tsec & 14LL) == 0)
                return -depth;
            if((tsec & 44LL) == 0)
                return -depth;
            if((tsec & 104LL) == 0)
                return -depth;
            if((tsec & 4260864LL) == 0)
                return -depth;
            break;
            case 5:
            if((tsec & 1792LL) == 0)
                return -depth;
            if((tsec & 5632LL) == 0)
                return -depth;
            if((tsec & 13312LL) == 0)
                return -depth;
            if((tsec & 134742024LL) == 0)
                return -depth;
            if((tsec & 8519712LL) == 0)
                return -depth;
            if((tsec & 545390592LL) == 0)
                return -depth;
            break;
            case 4:
            if((tsec & 229376LL) == 0)
                return -depth;
            if((tsec & 720896LL) == 0)
                return -depth;
            if((tsec & 1703936LL) == 0)
                return -depth;
            if((tsec & 67109892LL) == 0)
                return -depth;
            if((tsec & 17246979072LL) == 0)
                return -depth;
            if((tsec & 16781376LL) == 0)
                return -depth;
            if((tsec & 1090523136LL) == 0)
                return -depth;
            if((tsec & 69809995776LL) == 0)
                return -depth;
            break;
            case 3:
            if((tsec & 29360128LL) == 0)
                return -depth;
            if((tsec & 92274688LL) == 0)
                return -depth;
            if((tsec & 218103808LL) == 0)
                return -depth;
            if((tsec & 264208LL) == 0)
                return -depth;
            if((tsec & 131586LL) == 0)
                return -depth;
            if((tsec & 8590066176LL) == 0)
                return -depth;
            if((tsec & 2207613321216LL) == 0)
                return -depth;
            if((tsec & 2148016128LL) == 0)
                return -depth;
            if((tsec & 139586961408LL) == 0)
                return -depth;
            break;
            case 2:
            if((tsec & 3758096384LL) == 0)
                return -depth;
            if((tsec & 11811160064LL) == 0)
                return -depth;
            if((tsec & 27917287424LL) == 0)
                return -depth;
            if((tsec & 33818624LL) == 0)
                return -depth;
            if((tsec & 16843008LL) == 0)
                return -depth;
            if((tsec & 1099528470528LL) == 0)
                return -depth;
            if((tsec & 274946064384LL) == 0)
                return -depth;
            break;
            case 1:
            if((tsec & 481036337152LL) == 0)
                return -depth;
            if((tsec & 1511828488192LL) == 0)
                return -depth;
            if((tsec & 3573412790272LL) == 0)
                return -depth;
            if((tsec & 4328783872LL) == 0)
                return -depth;
            if((tsec & 2155905024LL) == 0)
                return -depth;
            break;
        }
        switch((left2) | (left6 << 3)){
        case 1:
            if((tsec & 446676598784LL) == 0)
                return -depth;
            if((tsec & 962072674304LL) == 0)
                return -depth;
            if((tsec & 541097984LL) == 0)
                return -depth;
            if((tsec & 1090781184LL) == 0)
                return -depth;
            break;
        case 2:
            if((tsec & 3489660928LL) == 0)
                return -depth;
            if((tsec & 7516192768LL) == 0)
                return -depth;
            if((tsec & 4227328LL) == 0)
                return -depth;
            if((tsec & 8521728LL) == 0)
                return -depth;
            if((tsec & 34368258048LL) == 0)
                return -depth;
            break;
        case 3:
            if((tsec & 27262976LL) == 0)
                return -depth;
            if((tsec & 58720256LL) == 0)
                return -depth;
            if((tsec & 33026LL) == 0)
                return -depth;
            if((tsec & 275951665152LL) == 0)
                return -depth;
            if((tsec & 66576LL) == 0)
                return -depth;
            if((tsec & 268502016LL) == 0)
                return -depth;
            break;
        case 4:
            if((tsec & 212992LL) == 0)
                return -depth;
            if((tsec & 458752LL) == 0)
                return -depth;
            if((tsec & 2155872384LL) == 0)
                return -depth;
            if((tsec & 551911686144LL) == 0)
                return -depth;
            if((tsec & 2097672LL) == 0)
                return -depth;
            break;
        case 5:
            if((tsec & 1664LL) == 0)
                return -depth;
            if((tsec & 3584LL) == 0)
                return -depth;
            if((tsec & 16842753LL) == 0)
                return -depth;
            if((tsec & 4311810048LL) == 0)
                return -depth;
            break;
        case 6:
            if((tsec & 13LL) == 0)
                return -depth;
            if((tsec & 28LL) == 0)
                return -depth;
            if((tsec & 33686016LL) == 0)
                return -depth;
            break;
        case 8:
            if((tsec & 962072674304LL) == 0)
                return -depth;
            if((tsec & 3023656976384LL) == 0)
                return -depth;
            if((tsec & 8657567744LL) == 0)
                return -depth;
            if((tsec & 4311810048LL) == 0)
                return -depth;
            break;
        case 9:
            if((tsec & 446676598784LL) == 0)
                return -depth;
            if((tsec & 962072674304LL) == 0)
                return -depth;
            if((tsec & 541097984LL) == 0)
                return -depth;
            if((tsec & 1090781184LL) == 0)
                return -depth;
            if((tsec & 3023656976384LL) == 0)
                return -depth;
            if((tsec & 8657567744LL) == 0)
                return -depth;
            if((tsec & 4311810048LL) == 0)
                return -depth;
            break;
        case 10:
            if((tsec & 3489660928LL) == 0)
                return -depth;
            if((tsec & 7516192768LL) == 0)
                return -depth;
            if((tsec & 4227328LL) == 0)
                return -depth;
            if((tsec & 8521728LL) == 0)
                return -depth;
            if((tsec & 34368258048LL) == 0)
                return -depth;
            if((tsec & 962072674304LL) == 0)
                return -depth;
            if((tsec & 3023656976384LL) == 0)
                return -depth;
            if((tsec & 8657567744LL) == 0)
                return -depth;
            if((tsec & 4311810048LL) == 0)
                return -depth;
            break;
        case 11:
            if((tsec & 27262976LL) == 0)
                return -depth;
            if((tsec & 58720256LL) == 0)
                return -depth;
            if((tsec & 33026LL) == 0)
                return -depth;
            if((tsec & 275951665152LL) == 0)
                return -depth;
            if((tsec & 66576LL) == 0)
                return -depth;
            if((tsec & 268502016LL) == 0)
                return -depth;
            if((tsec & 962072674304LL) == 0)
                return -depth;
            if((tsec & 3023656976384LL) == 0)
                return -depth;
            if((tsec & 8657567744LL) == 0)
                return -depth;
            if((tsec & 4311810048LL) == 0)
                return -depth;
            break;
        case 12:
            if((tsec & 212992LL) == 0)
                return -depth;
            if((tsec & 458752LL) == 0)
                return -depth;
            if((tsec & 2155872384LL) == 0)
                return -depth;
            if((tsec & 551911686144LL) == 0)
                return -depth;
            if((tsec & 2097672LL) == 0)
                return -depth;
            if((tsec & 962072674304LL) == 0)
                return -depth;
            if((tsec & 3023656976384LL) == 0)
                return -depth;
            if((tsec & 8657567744LL) == 0)
                return -depth;
            if((tsec & 4311810048LL) == 0)
                return -depth;
            break;
        case 13:
            if((tsec & 1664LL) == 0)
                return -depth;
            if((tsec & 3584LL) == 0)
                return -depth;
            if((tsec & 16842753LL) == 0)
                return -depth;
            if((tsec & 4311810048LL) == 0)
                return -depth;
            if((tsec & 962072674304LL) == 0)
                return -depth;
            if((tsec & 3023656976384LL) == 0)
                return -depth;
            if((tsec & 8657567744LL) == 0)
                return -depth;
            break;
        case 14:
            if((tsec & 13LL) == 0)
                return -depth;
            if((tsec & 28LL) == 0)
                return -depth;
            if((tsec & 33686016LL) == 0)
                return -depth;
            if((tsec & 962072674304LL) == 0)
                return -depth;
            if((tsec & 3023656976384LL) == 0)
                return -depth;
            if((tsec & 8657567744LL) == 0)
                return -depth;
            if((tsec & 4311810048LL) == 0)
                return -depth;
            break;
        case 16:
            if((tsec & 7516192768LL) == 0)
                return -depth;
            if((tsec & 23622320128LL) == 0)
                return -depth;
            if((tsec & 67637248LL) == 0)
                return -depth;
            if((tsec & 33686016LL) == 0)
                return -depth;
            if((tsec & 2199056941056LL) == 0)
                return -depth;
            break;
        case 17:
            if((tsec & 446676598784LL) == 0)
                return -depth;
            if((tsec & 962072674304LL) == 0)
                return -depth;
            if((tsec & 541097984LL) == 0)
                return -depth;
            if((tsec & 1090781184LL) == 0)
                return -depth;
            if((tsec & 7516192768LL) == 0)
                return -depth;
            if((tsec & 23622320128LL) == 0)
                return -depth;
            if((tsec & 67637248LL) == 0)
                return -depth;
            if((tsec & 33686016LL) == 0)
                return -depth;
            if((tsec & 2199056941056LL) == 0)
                return -depth;
            break;
        case 18:
            if((tsec & 3489660928LL) == 0)
                return -depth;
            if((tsec & 7516192768LL) == 0)
                return -depth;
            if((tsec & 4227328LL) == 0)
                return -depth;
            if((tsec & 8521728LL) == 0)
                return -depth;
            if((tsec & 34368258048LL) == 0)
                return -depth;
            if((tsec & 23622320128LL) == 0)
                return -depth;
            if((tsec & 67637248LL) == 0)
                return -depth;
            if((tsec & 33686016LL) == 0)
                return -depth;
            if((tsec & 2199056941056LL) == 0)
                return -depth;
            break;
        case 19:
            if((tsec & 27262976LL) == 0)
                return -depth;
            if((tsec & 58720256LL) == 0)
                return -depth;
            if((tsec & 33026LL) == 0)
                return -depth;
            if((tsec & 275951665152LL) == 0)
                return -depth;
            if((tsec & 66576LL) == 0)
                return -depth;
            if((tsec & 268502016LL) == 0)
                return -depth;
            if((tsec & 7516192768LL) == 0)
                return -depth;
            if((tsec & 23622320128LL) == 0)
                return -depth;
            if((tsec & 67637248LL) == 0)
                return -depth;
            if((tsec & 33686016LL) == 0)
                return -depth;
            if((tsec & 2199056941056LL) == 0)
                return -depth;
            break;
        case 20:
            if((tsec & 212992LL) == 0)
                return -depth;
            if((tsec & 458752LL) == 0)
                return -depth;
            if((tsec & 2155872384LL) == 0)
                return -depth;
            if((tsec & 551911686144LL) == 0)
                return -depth;
            if((tsec & 2097672LL) == 0)
                return -depth;
            if((tsec & 7516192768LL) == 0)
                return -depth;
            if((tsec & 23622320128LL) == 0)
                return -depth;
            if((tsec & 67637248LL) == 0)
                return -depth;
            if((tsec & 33686016LL) == 0)
                return -depth;
            if((tsec & 2199056941056LL) == 0)
                return -depth;
            break;
        case 21:
            if((tsec & 1664LL) == 0)
                return -depth;
            if((tsec & 3584LL) == 0)
                return -depth;
            if((tsec & 16842753LL) == 0)
                return -depth;
            if((tsec & 4311810048LL) == 0)
                return -depth;
            if((tsec & 7516192768LL) == 0)
                return -depth;
            if((tsec & 23622320128LL) == 0)
                return -depth;
            if((tsec & 67637248LL) == 0)
                return -depth;
            if((tsec & 33686016LL) == 0)
                return -depth;
            if((tsec & 2199056941056LL) == 0)
                return -depth;
            break;
        case 22:
            if((tsec & 13LL) == 0)
                return -depth;
            if((tsec & 28LL) == 0)
                return -depth;
            if((tsec & 33686016LL) == 0)
                return -depth;
            if((tsec & 7516192768LL) == 0)
                return -depth;
            if((tsec & 23622320128LL) == 0)
                return -depth;
            if((tsec & 67637248LL) == 0)
                return -depth;
            if((tsec & 2199056941056LL) == 0)
                return -depth;
            break;
        case 24:
            if((tsec & 58720256LL) == 0)
                return -depth;
            if((tsec & 184549376LL) == 0)
                return -depth;
            if((tsec & 528416LL) == 0)
                return -depth;
            if((tsec & 263172LL) == 0)
                return -depth;
            if((tsec & 17180132352LL) == 0)
                return -depth;
            if((tsec & 279173922816LL) == 0)
                return -depth;
            break;
        case 25:
            if((tsec & 446676598784LL) == 0)
                return -depth;
            if((tsec & 962072674304LL) == 0)
                return -depth;
            if((tsec & 541097984LL) == 0)
                return -depth;
            if((tsec & 1090781184LL) == 0)
                return -depth;
            if((tsec & 58720256LL) == 0)
                return -depth;
            if((tsec & 184549376LL) == 0)
                return -depth;
            if((tsec & 528416LL) == 0)
                return -depth;
            if((tsec & 263172LL) == 0)
                return -depth;
            if((tsec & 17180132352LL) == 0)
                return -depth;
            if((tsec & 279173922816LL) == 0)
                return -depth;
            break;
        case 26:
            if((tsec & 3489660928LL) == 0)
                return -depth;
            if((tsec & 7516192768LL) == 0)
                return -depth;
            if((tsec & 4227328LL) == 0)
                return -depth;
            if((tsec & 8521728LL) == 0)
                return -depth;
            if((tsec & 34368258048LL) == 0)
                return -depth;
            if((tsec & 58720256LL) == 0)
                return -depth;
            if((tsec & 184549376LL) == 0)
                return -depth;
            if((tsec & 528416LL) == 0)
                return -depth;
            if((tsec & 263172LL) == 0)
                return -depth;
            if((tsec & 17180132352LL) == 0)
                return -depth;
            if((tsec & 279173922816LL) == 0)
                return -depth;
            break;
        case 27:
            if((tsec & 27262976LL) == 0)
                return -depth;
            if((tsec & 58720256LL) == 0)
                return -depth;
            if((tsec & 33026LL) == 0)
                return -depth;
            if((tsec & 275951665152LL) == 0)
                return -depth;
            if((tsec & 66576LL) == 0)
                return -depth;
            if((tsec & 268502016LL) == 0)
                return -depth;
            if((tsec & 184549376LL) == 0)
                return -depth;
            if((tsec & 528416LL) == 0)
                return -depth;
            if((tsec & 263172LL) == 0)
                return -depth;
            if((tsec & 17180132352LL) == 0)
                return -depth;
            if((tsec & 279173922816LL) == 0)
                return -depth;
            break;
        case 28:
            if((tsec & 212992LL) == 0)
                return -depth;
            if((tsec & 458752LL) == 0)
                return -depth;
            if((tsec & 2155872384LL) == 0)
                return -depth;
            if((tsec & 551911686144LL) == 0)
                return -depth;
            if((tsec & 2097672LL) == 0)
                return -depth;
            if((tsec & 58720256LL) == 0)
                return -depth;
            if((tsec & 184549376LL) == 0)
                return -depth;
            if((tsec & 528416LL) == 0)
                return -depth;
            if((tsec & 263172LL) == 0)
                return -depth;
            if((tsec & 17180132352LL) == 0)
                return -depth;
            if((tsec & 279173922816LL) == 0)
                return -depth;
            break;
        case 29:
            if((tsec & 1664LL) == 0)
                return -depth;
            if((tsec & 3584LL) == 0)
                return -depth;
            if((tsec & 16842753LL) == 0)
                return -depth;
            if((tsec & 4311810048LL) == 0)
                return -depth;
            if((tsec & 58720256LL) == 0)
                return -depth;
            if((tsec & 184549376LL) == 0)
                return -depth;
            if((tsec & 528416LL) == 0)
                return -depth;
            if((tsec & 263172LL) == 0)
                return -depth;
            if((tsec & 17180132352LL) == 0)
                return -depth;
            if((tsec & 279173922816LL) == 0)
                return -depth;
            break;
        case 30:
            if((tsec & 13LL) == 0)
                return -depth;
            if((tsec & 28LL) == 0)
                return -depth;
            if((tsec & 33686016LL) == 0)
                return -depth;
            if((tsec & 58720256LL) == 0)
                return -depth;
            if((tsec & 184549376LL) == 0)
                return -depth;
            if((tsec & 528416LL) == 0)
                return -depth;
            if((tsec & 263172LL) == 0)
                return -depth;
            if((tsec & 17180132352LL) == 0)
                return -depth;
            if((tsec & 279173922816LL) == 0)
                return -depth;
            break;
        case 32:
            if((tsec & 458752LL) == 0)
                return -depth;
            if((tsec & 1441792LL) == 0)
                return -depth;
            if((tsec & 134219784LL) == 0)
                return -depth;
            if((tsec & 2181046272LL) == 0)
                return -depth;
            if((tsec & 139619991552LL) == 0)
                return -depth;
            break;
        case 33:
            if((tsec & 446676598784LL) == 0)
                return -depth;
            if((tsec & 962072674304LL) == 0)
                return -depth;
            if((tsec & 541097984LL) == 0)
                return -depth;
            if((tsec & 1090781184LL) == 0)
                return -depth;
            if((tsec & 458752LL) == 0)
                return -depth;
            if((tsec & 1441792LL) == 0)
                return -depth;
            if((tsec & 134219784LL) == 0)
                return -depth;
            if((tsec & 2181046272LL) == 0)
                return -depth;
            if((tsec & 139619991552LL) == 0)
                return -depth;
            break;
        case 34:
            if((tsec & 3489660928LL) == 0)
                return -depth;
            if((tsec & 7516192768LL) == 0)
                return -depth;
            if((tsec & 4227328LL) == 0)
                return -depth;
            if((tsec & 8521728LL) == 0)
                return -depth;
            if((tsec & 34368258048LL) == 0)
                return -depth;
            if((tsec & 458752LL) == 0)
                return -depth;
            if((tsec & 1441792LL) == 0)
                return -depth;
            if((tsec & 134219784LL) == 0)
                return -depth;
            if((tsec & 2181046272LL) == 0)
                return -depth;
            if((tsec & 139619991552LL) == 0)
                return -depth;
            break;
        case 35:
            if((tsec & 27262976LL) == 0)
                return -depth;
            if((tsec & 58720256LL) == 0)
                return -depth;
            if((tsec & 33026LL) == 0)
                return -depth;
            if((tsec & 275951665152LL) == 0)
                return -depth;
            if((tsec & 66576LL) == 0)
                return -depth;
            if((tsec & 268502016LL) == 0)
                return -depth;
            if((tsec & 458752LL) == 0)
                return -depth;
            if((tsec & 1441792LL) == 0)
                return -depth;
            if((tsec & 134219784LL) == 0)
                return -depth;
            if((tsec & 2181046272LL) == 0)
                return -depth;
            if((tsec & 139619991552LL) == 0)
                return -depth;
            break;
        case 36:
            if((tsec & 212992LL) == 0)
                return -depth;
            if((tsec & 458752LL) == 0)
                return -depth;
            if((tsec & 2155872384LL) == 0)
                return -depth;
            if((tsec & 551911686144LL) == 0)
                return -depth;
            if((tsec & 2097672LL) == 0)
                return -depth;
            if((tsec & 1441792LL) == 0)
                return -depth;
            if((tsec & 134219784LL) == 0)
                return -depth;
            if((tsec & 2181046272LL) == 0)
                return -depth;
            if((tsec & 139619991552LL) == 0)
                return -depth;
            break;
        case 37:
            if((tsec & 1664LL) == 0)
                return -depth;
            if((tsec & 3584LL) == 0)
                return -depth;
            if((tsec & 16842753LL) == 0)
                return -depth;
            if((tsec & 4311810048LL) == 0)
                return -depth;
            if((tsec & 458752LL) == 0)
                return -depth;
            if((tsec & 1441792LL) == 0)
                return -depth;
            if((tsec & 134219784LL) == 0)
                return -depth;
            if((tsec & 2181046272LL) == 0)
                return -depth;
            if((tsec & 139619991552LL) == 0)
                return -depth;
            break;
        case 38:
            if((tsec & 13LL) == 0)
                return -depth;
            if((tsec & 28LL) == 0)
                return -depth;
            if((tsec & 33686016LL) == 0)
                return -depth;
            if((tsec & 458752LL) == 0)
                return -depth;
            if((tsec & 1441792LL) == 0)
                return -depth;
            if((tsec & 134219784LL) == 0)
                return -depth;
            if((tsec & 2181046272LL) == 0)
                return -depth;
            if((tsec & 139619991552LL) == 0)
                return -depth;
            break;
        case 40:
            if((tsec & 3584LL) == 0)
                return -depth;
            if((tsec & 11264LL) == 0)
                return -depth;
            if((tsec & 17039424LL) == 0)
                return -depth;
            if((tsec & 1090781184LL) == 0)
                return -depth;
            break;
        case 41:
            if((tsec & 446676598784LL) == 0)
                return -depth;
            if((tsec & 962072674304LL) == 0)
                return -depth;
            if((tsec & 541097984LL) == 0)
                return -depth;
            if((tsec & 1090781184LL) == 0)
                return -depth;
            if((tsec & 3584LL) == 0)
                return -depth;
            if((tsec & 11264LL) == 0)
                return -depth;
            if((tsec & 17039424LL) == 0)
                return -depth;
            break;
        case 42:
            if((tsec & 3489660928LL) == 0)
                return -depth;
            if((tsec & 7516192768LL) == 0)
                return -depth;
            if((tsec & 4227328LL) == 0)
                return -depth;
            if((tsec & 8521728LL) == 0)
                return -depth;
            if((tsec & 34368258048LL) == 0)
                return -depth;
            if((tsec & 3584LL) == 0)
                return -depth;
            if((tsec & 11264LL) == 0)
                return -depth;
            if((tsec & 17039424LL) == 0)
                return -depth;
            if((tsec & 1090781184LL) == 0)
                return -depth;
            break;
        case 43:
            if((tsec & 27262976LL) == 0)
                return -depth;
            if((tsec & 58720256LL) == 0)
                return -depth;
            if((tsec & 33026LL) == 0)
                return -depth;
            if((tsec & 275951665152LL) == 0)
                return -depth;
            if((tsec & 66576LL) == 0)
                return -depth;
            if((tsec & 268502016LL) == 0)
                return -depth;
            if((tsec & 3584LL) == 0)
                return -depth;
            if((tsec & 11264LL) == 0)
                return -depth;
            if((tsec & 17039424LL) == 0)
                return -depth;
            if((tsec & 1090781184LL) == 0)
                return -depth;
            break;
        case 44:
            if((tsec & 212992LL) == 0)
                return -depth;
            if((tsec & 458752LL) == 0)
                return -depth;
            if((tsec & 2155872384LL) == 0)
                return -depth;
            if((tsec & 551911686144LL) == 0)
                return -depth;
            if((tsec & 2097672LL) == 0)
                return -depth;
            if((tsec & 3584LL) == 0)
                return -depth;
            if((tsec & 11264LL) == 0)
                return -depth;
            if((tsec & 17039424LL) == 0)
                return -depth;
            if((tsec & 1090781184LL) == 0)
                return -depth;
            break;
        case 45:
            if((tsec & 1664LL) == 0)
                return -depth;
            if((tsec & 3584LL) == 0)
                return -depth;
            if((tsec & 16842753LL) == 0)
                return -depth;
            if((tsec & 4311810048LL) == 0)
                return -depth;
            if((tsec & 11264LL) == 0)
                return -depth;
            if((tsec & 17039424LL) == 0)
                return -depth;
            if((tsec & 1090781184LL) == 0)
                return -depth;
            break;
        case 46:
            if((tsec & 13LL) == 0)
                return -depth;
            if((tsec & 28LL) == 0)
                return -depth;
            if((tsec & 33686016LL) == 0)
                return -depth;
            if((tsec & 3584LL) == 0)
                return -depth;
            if((tsec & 11264LL) == 0)
                return -depth;
            if((tsec & 17039424LL) == 0)
                return -depth;
            if((tsec & 1090781184LL) == 0)
                return -depth;
            break;
        case 48:
            if((tsec & 28LL) == 0)
                return -depth;
            if((tsec & 88LL) == 0)
                return -depth;
            if((tsec & 8521728LL) == 0)
                return -depth;
            break;
        case 49:
            if((tsec & 446676598784LL) == 0)
                return -depth;
            if((tsec & 962072674304LL) == 0)
                return -depth;
            if((tsec & 541097984LL) == 0)
                return -depth;
            if((tsec & 1090781184LL) == 0)
                return -depth;
            if((tsec & 28LL) == 0)
                return -depth;
            if((tsec & 88LL) == 0)
                return -depth;
            if((tsec & 8521728LL) == 0)
                return -depth;
            break;
        case 50:
            if((tsec & 3489660928LL) == 0)
                return -depth;
            if((tsec & 7516192768LL) == 0)
                return -depth;
            if((tsec & 4227328LL) == 0)
                return -depth;
            if((tsec & 8521728LL) == 0)
                return -depth;
            if((tsec & 34368258048LL) == 0)
                return -depth;
            if((tsec & 28LL) == 0)
                return -depth;
            if((tsec & 88LL) == 0)
                return -depth;
            break;
        case 51:
            if((tsec & 27262976LL) == 0)
                return -depth;
            if((tsec & 58720256LL) == 0)
                return -depth;
            if((tsec & 33026LL) == 0)
                return -depth;
            if((tsec & 275951665152LL) == 0)
                return -depth;
            if((tsec & 66576LL) == 0)
                return -depth;
            if((tsec & 268502016LL) == 0)
                return -depth;
            if((tsec & 28LL) == 0)
                return -depth;
            if((tsec & 88LL) == 0)
                return -depth;
            if((tsec & 8521728LL) == 0)
                return -depth;
            break;
        case 52:
            if((tsec & 212992LL) == 0)
                return -depth;
            if((tsec & 458752LL) == 0)
                return -depth;
            if((tsec & 2155872384LL) == 0)
                return -depth;
            if((tsec & 551911686144LL) == 0)
                return -depth;
            if((tsec & 2097672LL) == 0)
                return -depth;
            if((tsec & 28LL) == 0)
                return -depth;
            if((tsec & 88LL) == 0)
                return -depth;
            if((tsec & 8521728LL) == 0)
                return -depth;
            break;
        case 53:
            if((tsec & 1664LL) == 0)
                return -depth;
            if((tsec & 3584LL) == 0)
                return -depth;
            if((tsec & 16842753LL) == 0)
                return -depth;
            if((tsec & 4311810048LL) == 0)
                return -depth;
            if((tsec & 28LL) == 0)
                return -depth;
            if((tsec & 88LL) == 0)
                return -depth;
            if((tsec & 8521728LL) == 0)
                return -depth;
            break;
        case 54:
            if((tsec & 13LL) == 0)
                return -depth;
            if((tsec & 28LL) == 0)
                return -depth;
            if((tsec & 33686016LL) == 0)
                return -depth;
            if((tsec & 88LL) == 0)
                return -depth;
            if((tsec & 8521728LL) == 0)
                return -depth;
            break;
        }
        switch((left1) | (left7 << 3)){
        case 1:
            if((tsec & 481036337152LL) == 0)
                return -depth;
            if((tsec & 270548992LL) == 0)
                return -depth;
            if((tsec & 545390592LL) == 0)
                return -depth;
            break;
        case 2:
            if((tsec & 3758096384LL) == 0)
                return -depth;
            if((tsec & 2113664LL) == 0)
                return -depth;
            if((tsec & 4260864LL) == 0)
                return -depth;
            break;
        case 3:
            if((tsec & 29360128LL) == 0)
                return -depth;
            if((tsec & 16513LL) == 0)
                return -depth;
            if((tsec & 33288LL) == 0)
                return -depth;
            break;
        case 4:
            if((tsec & 229376LL) == 0)
                return -depth;
            if((tsec & 275955843072LL) == 0)
                return -depth;
            break;
        case 5:
            if((tsec & 1792LL) == 0)
                return -depth;
            if((tsec & 2155905024LL) == 0)
                return -depth;
            break;
        case 6:
            if((tsec & 14LL) == 0)
                return -depth;
            if((tsec & 16843008LL) == 0)
                return -depth;
            break;
        case 8:
            if((tsec & 1924145348608LL) == 0)
                return -depth;
            if((tsec & 17315135488LL) == 0)
                return -depth;
            if((tsec & 8623620096LL) == 0)
                return -depth;
            break;
        case 9:
            if((tsec & 481036337152LL) == 0)
                return -depth;
            if((tsec & 270548992LL) == 0)
                return -depth;
            if((tsec & 545390592LL) == 0)
                return -depth;
            if((tsec & 1924145348608LL) == 0)
                return -depth;
            if((tsec & 17315135488LL) == 0)
                return -depth;
            if((tsec & 8623620096LL) == 0)
                return -depth;
            break;
        case 10:
            if((tsec & 3758096384LL) == 0)
                return -depth;
            if((tsec & 2113664LL) == 0)
                return -depth;
            if((tsec & 4260864LL) == 0)
                return -depth;
            if((tsec & 1924145348608LL) == 0)
                return -depth;
            if((tsec & 17315135488LL) == 0)
                return -depth;
            if((tsec & 8623620096LL) == 0)
                return -depth;
            break;
        case 11:
            if((tsec & 29360128LL) == 0)
                return -depth;
            if((tsec & 16513LL) == 0)
                return -depth;
            if((tsec & 33288LL) == 0)
                return -depth;
            if((tsec & 1924145348608LL) == 0)
                return -depth;
            if((tsec & 17315135488LL) == 0)
                return -depth;
            if((tsec & 8623620096LL) == 0)
                return -depth;
            break;
        case 12:
            if((tsec & 229376LL) == 0)
                return -depth;
            if((tsec & 275955843072LL) == 0)
                return -depth;
            if((tsec & 1924145348608LL) == 0)
                return -depth;
            if((tsec & 17315135488LL) == 0)
                return -depth;
            if((tsec & 8623620096LL) == 0)
                return -depth;
            break;
        case 13:
            if((tsec & 1792LL) == 0)
                return -depth;
            if((tsec & 2155905024LL) == 0)
                return -depth;
            if((tsec & 1924145348608LL) == 0)
                return -depth;
            if((tsec & 17315135488LL) == 0)
                return -depth;
            if((tsec & 8623620096LL) == 0)
                return -depth;
            break;
        case 14:
            if((tsec & 14LL) == 0)
                return -depth;
            if((tsec & 16843008LL) == 0)
                return -depth;
            if((tsec & 1924145348608LL) == 0)
                return -depth;
            if((tsec & 17315135488LL) == 0)
                return -depth;
            if((tsec & 8623620096LL) == 0)
                return -depth;
            break;
        case 16:
            if((tsec & 15032385536LL) == 0)
                return -depth;
            if((tsec & 135274496LL) == 0)
                return -depth;
            if((tsec & 67372032LL) == 0)
                return -depth;
            break;
        case 17:
            if((tsec & 481036337152LL) == 0)
                return -depth;
            if((tsec & 270548992LL) == 0)
                return -depth;
            if((tsec & 545390592LL) == 0)
                return -depth;
            if((tsec & 15032385536LL) == 0)
                return -depth;
            if((tsec & 135274496LL) == 0)
                return -depth;
            if((tsec & 67372032LL) == 0)
                return -depth;
            break;
        case 18:
            if((tsec & 3758096384LL) == 0)
                return -depth;
            if((tsec & 2113664LL) == 0)
                return -depth;
            if((tsec & 4260864LL) == 0)
                return -depth;
            if((tsec & 15032385536LL) == 0)
                return -depth;
            if((tsec & 135274496LL) == 0)
                return -depth;
            if((tsec & 67372032LL) == 0)
                return -depth;
            break;
        case 19:
            if((tsec & 29360128LL) == 0)
                return -depth;
            if((tsec & 16513LL) == 0)
                return -depth;
            if((tsec & 33288LL) == 0)
                return -depth;
            if((tsec & 15032385536LL) == 0)
                return -depth;
            if((tsec & 135274496LL) == 0)
                return -depth;
            if((tsec & 67372032LL) == 0)
                return -depth;
            break;
        case 20:
            if((tsec & 229376LL) == 0)
                return -depth;
            if((tsec & 275955843072LL) == 0)
                return -depth;
            if((tsec & 15032385536LL) == 0)
                return -depth;
            if((tsec & 135274496LL) == 0)
                return -depth;
            if((tsec & 67372032LL) == 0)
                return -depth;
            break;
        case 21:
            if((tsec & 1792LL) == 0)
                return -depth;
            if((tsec & 2155905024LL) == 0)
                return -depth;
            if((tsec & 15032385536LL) == 0)
                return -depth;
            if((tsec & 135274496LL) == 0)
                return -depth;
            if((tsec & 67372032LL) == 0)
                return -depth;
            break;
        case 22:
            if((tsec & 14LL) == 0)
                return -depth;
            if((tsec & 16843008LL) == 0)
                return -depth;
            if((tsec & 15032385536LL) == 0)
                return -depth;
            if((tsec & 135274496LL) == 0)
                return -depth;
            if((tsec & 67372032LL) == 0)
                return -depth;
            break;
        case 24:
            if((tsec & 117440512LL) == 0)
                return -depth;
            if((tsec & 1056832LL) == 0)
                return -depth;
            if((tsec & 526344LL) == 0)
                return -depth;
            break;
        case 25:
            if((tsec & 481036337152LL) == 0)
                return -depth;
            if((tsec & 270548992LL) == 0)
                return -depth;
            if((tsec & 545390592LL) == 0)
                return -depth;
            if((tsec & 117440512LL) == 0)
                return -depth;
            if((tsec & 1056832LL) == 0)
                return -depth;
            if((tsec & 526344LL) == 0)
                return -depth;
            break;
        case 26:
            if((tsec & 3758096384LL) == 0)
                return -depth;
            if((tsec & 2113664LL) == 0)
                return -depth;
            if((tsec & 4260864LL) == 0)
                return -depth;
            if((tsec & 117440512LL) == 0)
                return -depth;
            if((tsec & 1056832LL) == 0)
                return -depth;
            if((tsec & 526344LL) == 0)
                return -depth;
            break;
        case 27:
            if((tsec & 29360128LL) == 0)
                return -depth;
            if((tsec & 16513LL) == 0)
                return -depth;
            if((tsec & 33288LL) == 0)
                return -depth;
            if((tsec & 117440512LL) == 0)
                return -depth;
            if((tsec & 1056832LL) == 0)
                return -depth;
            if((tsec & 526344LL) == 0)
                return -depth;
            break;
        case 28:
            if((tsec & 229376LL) == 0)
                return -depth;
            if((tsec & 275955843072LL) == 0)
                return -depth;
            if((tsec & 117440512LL) == 0)
                return -depth;
            if((tsec & 1056832LL) == 0)
                return -depth;
            if((tsec & 526344LL) == 0)
                return -depth;
            break;
        case 29:
            if((tsec & 1792LL) == 0)
                return -depth;
            if((tsec & 2155905024LL) == 0)
                return -depth;
            if((tsec & 117440512LL) == 0)
                return -depth;
            if((tsec & 1056832LL) == 0)
                return -depth;
            if((tsec & 526344LL) == 0)
                return -depth;
            break;
        case 30:
            if((tsec & 14LL) == 0)
                return -depth;
            if((tsec & 16843008LL) == 0)
                return -depth;
            if((tsec & 117440512LL) == 0)
                return -depth;
            if((tsec & 1056832LL) == 0)
                return -depth;
            if((tsec & 526344LL) == 0)
                return -depth;
            break;
        case 32:
            if((tsec & 917504LL) == 0)
                return -depth;
            if((tsec & 279239983104LL) == 0)
                return -depth;
            break;
        case 33:
            if((tsec & 481036337152LL) == 0)
                return -depth;
            if((tsec & 270548992LL) == 0)
                return -depth;
            if((tsec & 545390592LL) == 0)
                return -depth;
            if((tsec & 917504LL) == 0)
                return -depth;
            if((tsec & 279239983104LL) == 0)
                return -depth;
            break;
        case 34:
            if((tsec & 3758096384LL) == 0)
                return -depth;
            if((tsec & 2113664LL) == 0)
                return -depth;
            if((tsec & 4260864LL) == 0)
                return -depth;
            if((tsec & 917504LL) == 0)
                return -depth;
            if((tsec & 279239983104LL) == 0)
                return -depth;
            break;
        case 35:
            if((tsec & 29360128LL) == 0)
                return -depth;
            if((tsec & 16513LL) == 0)
                return -depth;
            if((tsec & 33288LL) == 0)
                return -depth;
            if((tsec & 917504LL) == 0)
                return -depth;
            if((tsec & 279239983104LL) == 0)
                return -depth;
            break;
        case 36:
            if((tsec & 229376LL) == 0)
                return -depth;
            if((tsec & 275955843072LL) == 0)
                return -depth;
            if((tsec & 917504LL) == 0)
                return -depth;
            if((tsec & 279239983104LL) == 0)
                return -depth;
            break;
        case 37:
            if((tsec & 1792LL) == 0)
                return -depth;
            if((tsec & 2155905024LL) == 0)
                return -depth;
            if((tsec & 917504LL) == 0)
                return -depth;
            if((tsec & 279239983104LL) == 0)
                return -depth;
            break;
        case 38:
            if((tsec & 14LL) == 0)
                return -depth;
            if((tsec & 16843008LL) == 0)
                return -depth;
            if((tsec & 917504LL) == 0)
                return -depth;
            if((tsec & 279239983104LL) == 0)
                return -depth;
            break;
        case 40:
            if((tsec & 7168LL) == 0)
                return -depth;
            if((tsec & 2181562368LL) == 0)
                return -depth;
            break;
        case 41:
            if((tsec & 481036337152LL) == 0)
                return -depth;
            if((tsec & 270548992LL) == 0)
                return -depth;
            if((tsec & 545390592LL) == 0)
                return -depth;
            if((tsec & 7168LL) == 0)
                return -depth;
            if((tsec & 2181562368LL) == 0)
                return -depth;
            break;
        case 42:
            if((tsec & 3758096384LL) == 0)
                return -depth;
            if((tsec & 2113664LL) == 0)
                return -depth;
            if((tsec & 4260864LL) == 0)
                return -depth;
            if((tsec & 7168LL) == 0)
                return -depth;
            if((tsec & 2181562368LL) == 0)
                return -depth;
            break;
        case 43:
            if((tsec & 29360128LL) == 0)
                return -depth;
            if((tsec & 16513LL) == 0)
                return -depth;
            if((tsec & 33288LL) == 0)
                return -depth;
            if((tsec & 7168LL) == 0)
                return -depth;
            if((tsec & 2181562368LL) == 0)
                return -depth;
            break;
        case 44:
            if((tsec & 229376LL) == 0)
                return -depth;
            if((tsec & 275955843072LL) == 0)
                return -depth;
            if((tsec & 7168LL) == 0)
                return -depth;
            if((tsec & 2181562368LL) == 0)
                return -depth;
            break;
        case 45:
            if((tsec & 1792LL) == 0)
                return -depth;
            if((tsec & 2155905024LL) == 0)
                return -depth;
            if((tsec & 7168LL) == 0)
                return -depth;
            if((tsec & 2181562368LL) == 0)
                return -depth;
            break;
        case 46:
            if((tsec & 14LL) == 0)
                return -depth;
            if((tsec & 16843008LL) == 0)
                return -depth;
            if((tsec & 7168LL) == 0)
                return -depth;
            if((tsec & 2181562368LL) == 0)
                return -depth;
            break;
        case 48:
            if((tsec & 56LL) == 0)
                return -depth;
            if((tsec & 17043456LL) == 0)
                return -depth;
            break;
        case 49:
            if((tsec & 481036337152LL) == 0)
                return -depth;
            if((tsec & 270548992LL) == 0)
                return -depth;
            if((tsec & 545390592LL) == 0)
                return -depth;
            if((tsec & 56LL) == 0)
                return -depth;
            if((tsec & 17043456LL) == 0)
                return -depth;
            break;
        case 50:
            if((tsec & 3758096384LL) == 0)
                return -depth;
            if((tsec & 2113664LL) == 0)
                return -depth;
            if((tsec & 4260864LL) == 0)
                return -depth;
            if((tsec & 56LL) == 0)
                return -depth;
            if((tsec & 17043456LL) == 0)
                return -depth;
            break;
        case 51:
            if((tsec & 29360128LL) == 0)
                return -depth;
            if((tsec & 16513LL) == 0)
                return -depth;
            if((tsec & 33288LL) == 0)
                return -depth;
            if((tsec & 56LL) == 0)
                return -depth;
            if((tsec & 17043456LL) == 0)
                return -depth;
            break;
        case 52:
            if((tsec & 229376LL) == 0)
                return -depth;
            if((tsec & 275955843072LL) == 0)
                return -depth;
            if((tsec & 56LL) == 0)
                return -depth;
            if((tsec & 17043456LL) == 0)
                return -depth;
            break;
        case 53:
            if((tsec & 1792LL) == 0)
                return -depth;
            if((tsec & 2155905024LL) == 0)
                return -depth;
            if((tsec & 56LL) == 0)
                return -depth;
            if((tsec & 17043456LL) == 0)
                return -depth;
            break;
        case 54:
            if((tsec & 14LL) == 0)
                return -depth;
            if((tsec & 16843008LL) == 0)
                return -depth;
            if((tsec & 56LL) == 0)
                return -depth;
            if((tsec & 17043456LL) == 0)
                return -depth;
            break;
        }
        depth--;
        if(depth == 0)
            return 0;
        int betabeg, minscore = 2 - depth;
        if(depth > mincachedepth){
            auto it = TranspositionTable.find(cfir | (csec << 7));
            if (it != TranspositionTable.end()){
                ttentry entry = it->second;
                if(entry.flag & 1){
                    if(entry.score >= beta) //if current beta <= cached beta then the beta during evaluation wont change, thus we can return the current beta
                        return beta;
                    if(entry.flag > 1) //if the cached beta is exact and it is smaller than the current beta (because of the condition above) then we can return it
                        return entry.score;
                    alpha = max(alpha, entry.score);
                    //cached beta is upper bound
                }
                else
                {
                    if(entry.score < beta){
                        if(entry.score <= alpha)
                            return entry.score;
                        beta = entry.score;
                    }
                }
            }
            betabeg = beta;
        }
        if(left4 > 0){
			int reschild = minimax(depth, true, beta, alpha, cfir, csec ^ (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7);
            if(reschild < minscore)
                return reschild;
			if(reschild < beta){
				if(reschild <= alpha){
                    return reschild;
                }
                beta = reschild;
			}
        }
        if(left3 > 0){
			int reschild = minimax(depth, true, beta, alpha, cfir, csec ^ (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7);
            if(reschild < minscore)
                return reschild;
			if(reschild < beta){
				if(reschild <= alpha){
                    return reschild;
                }
                beta = reschild;
			}
        }
        if(left5 > 0){
			int reschild = minimax(depth, true, beta, alpha, cfir, csec ^ (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7);
            if(reschild < minscore)
                return reschild;
			if(reschild < beta){
				if(reschild <= alpha){
                    return reschild;
                }
                beta = reschild;
			}
        }
        if(left2 > 0){
			int reschild = minimax(depth, true, beta, alpha, cfir, csec ^ (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7);
            if(reschild < minscore)
                return reschild;
			if(reschild < beta){
				if(reschild <= alpha){
                    if(depth > mincachedepth)
                        TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                    return reschild;
                }
                beta = reschild;
			}
        }
        if(left6 > 0){
			int reschild = minimax(depth, true, beta, alpha, cfir, csec ^ (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7);
            if(reschild < minscore)
                return reschild;
			if(reschild < beta){
				if(reschild <= alpha){
                    if(depth > mincachedepth)
                        TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                    return reschild;
                }
                beta = reschild;
			}
        }
        if(left1 > 0){
			int reschild = minimax(depth, true, beta, alpha, cfir, csec ^ (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7);
            if(reschild < minscore)
                return reschild;
			if(reschild < beta){
				if(reschild <= alpha){
                    if(depth > mincachedepth)
                        TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                    return reschild;
                }
                beta = reschild;
			}
        }
        if(left7 > 0){
			int reschild = minimax(depth, true, beta, alpha, cfir, csec ^ (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1);
            if(reschild < minscore)
                return reschild;
			if(reschild < beta){
				if(reschild <= alpha){
                    if(depth > mincachedepth)
                        TranspositionTable[cfir | (csec << 7)] = {reschild, 0};
                    return reschild;
                }
                beta = reschild;
			}
        }
        if(depth > mincachedepth){
            TranspositionTable[cfir | (csec << 7)] = {beta, (beta < betabeg) ? uint8_t(3) : uint8_t(1)};
        }
        return beta;
    }
}

pair<uint8_t, int8_t> minimaxentry(int depth, bool player, int beta, int alpha, uint64_t cfir, uint64_t csec, uint32_t left1, uint32_t left2, uint32_t left3, uint32_t left4, uint32_t left5, uint32_t left6, uint32_t left7){
    // res4: 1 397602
    // res3: 1 26880
    // res5: 1 39074
    // res2: 1 161362
    // res6: 1 71138
    // res1: 1 2202
    // res7: 1 879
    if(player){
        if(left4 > 0)
            if(cw(~cfir, 3, left4))
                return make_pair(8, depth);
        if(left3 > 0)
            if(cw(~cfir, 2, left3))
                return make_pair(4, depth);
        if(left5 > 0)
            if(cw(~cfir, 4, left5))
                return make_pair(16, depth);
        if(left2 > 0)
            if(cw(~cfir, 1, left2))
                return make_pair(2, depth);
        if(left6 > 0)
            if(cw(~cfir, 5, left6))
                return make_pair(32, depth);
        if(left1 > 0)
            if(cw(~cfir, 0, left1))
                return make_pair(1, depth);
        if(left7 > 0)
            if(cw(~cfir, 6, left7))
                return make_pair(64, depth);
        uint8_t ret = 0;
        auto start = high_resolution_clock::now();
        if(left4 > 0){
            if(showstats)
                cout << "res4 ";
            int reschild = minimax(depth - 1, false, alpha + 1, alpha, cfir | (1LL << (45 - (left4) * 7)), csec ^ (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7);
            if(reschild > alpha){
                reschild = minimax(depth - 1, false, beta, reschild, cfir | (1LL << (45 - (left4) * 7)), csec ^ (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7);
                if(showstats)
                    cout << "\033[32m== \033[0m" << reschild << " ";
                alpha = reschild;
                ret = 8;
            }
            else if(minimax(depth - 1, false, alpha, alpha - 1, cfir | (1LL << (45 - (left4) * 7)), csec ^ (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7) == alpha){
                if(showstats)
                    cout << "\033[32m== \033[0m" << alpha << " ";
                ret |= 8;
            }
            else if(showstats)
                cout << "\033[31m<= \033[0m" << alpha << " ";
        }
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(end - start);
        if(showstats)
            cout << duration.count() << endl;
        start = high_resolution_clock::now();
        if(left3 > 0){
            if(showstats)
                cout << "res3 ";
            int reschild = minimax(depth - 1, false, alpha + 1, alpha, cfir | (1LL << (44 - (left3) * 7)), csec ^ (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7);
            if(reschild > alpha){
                reschild = minimax(depth - 1, false, beta, reschild, cfir | (1LL << (44 - (left3) * 7)), csec ^ (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7);
                if(showstats)
                    cout << "\033[32m== \033[0m" << reschild << " ";
                alpha = reschild;
                ret = 4;
            }
            else if(minimax(depth - 1, false, alpha, alpha - 1, cfir | (1LL << (44 - (left3) * 7)), csec ^ (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7) == alpha){
                if(showstats)
                    cout << "\033[32m== \033[0m" << alpha << " ";
                ret |= 4;
            }
            else if(showstats)
                cout << "\033[31m<= \033[0m" << alpha << " ";
        }
        end = high_resolution_clock::now();
        duration = duration_cast<milliseconds>(end - start);
        if(showstats)
            cout << duration.count() << endl;
        start = high_resolution_clock::now();
        if(left5 > 0){
            if(showstats)
                cout << "res5 ";
            int reschild = minimax(depth - 1, false, alpha + 1, alpha, cfir | (1LL << (46 - (left5) * 7)), csec ^ (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7);
            if(reschild > alpha){
                reschild = minimax(depth - 1, false, beta, reschild, cfir | (1LL << (46 - (left5) * 7)), csec ^ (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7);
                if(showstats)
                    cout << "\033[32m== \033[0m" << reschild << " ";
                alpha = reschild;
                ret = 16;
            }
            else if(minimax(depth - 1, false, alpha, alpha - 1, cfir | (1LL << (46 - (left5) * 7)), csec ^ (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7) == alpha){
                if(showstats)
                    cout << "\033[32m== \033[0m" << alpha << " ";
                ret |= 16;
            }
            else if(showstats)
                cout << "\033[31m<= \033[0m" << alpha << " ";
        }
        end = high_resolution_clock::now();
        duration = duration_cast<milliseconds>(end - start);
        if(showstats)
            cout << duration.count() << endl;
        start = high_resolution_clock::now();
        if(left2 > 0){
            if(showstats)
                cout << "res2 ";
            int reschild = minimax(depth - 1, false, alpha + 1, alpha, cfir | (1LL << (43 - (left2) * 7)), csec ^ (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7);
            if(reschild > alpha){
                reschild = minimax(depth - 1, false, beta, reschild, cfir | (1LL << (43 - (left2) * 7)), csec ^ (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7);
                if(showstats)
                    cout << "\033[32m== \033[0m" << reschild << " ";
                alpha = reschild;
                ret = 2;
            }
            else if(minimax(depth - 1, false, alpha, alpha - 1, cfir | (1LL << (43 - (left2) * 7)), csec ^ (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7) == alpha){
                if(showstats)
                    cout << "\033[32m== \033[0m" << alpha << " ";
                ret |= 2;
            }
            else if(showstats)
                cout << "\033[31m<= \033[0m" << alpha << " ";
        }
        end = high_resolution_clock::now();
        duration = duration_cast<milliseconds>(end - start);
        if(showstats)
            cout << duration.count() << endl;
        start = high_resolution_clock::now();
        if(left6 > 0){
            if(showstats)
                cout << "res6 ";
            int reschild = minimax(depth - 1, false, alpha + 1, alpha, cfir | (1LL << (47 - (left6) * 7)), csec ^ (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7);
            if(reschild > alpha){
                reschild = minimax(depth - 1, false, beta, reschild, cfir | (1LL << (47 - (left6) * 7)), csec ^ (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7);
                if(showstats)
                    cout << "\033[32m== \033[0m" << reschild << " ";
                alpha = reschild;
                ret = 32;
            }
            else if(minimax(depth - 1, false, alpha, alpha - 1, cfir | (1LL << (47 - (left6) * 7)), csec ^ (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7) == alpha){
                if(showstats)
                    cout << "\033[32m== \033[0m" << alpha << " ";
                ret |= 32;
            }
            else if(showstats)
                cout << "\033[31m<= \033[0m" << alpha << " ";
        }
        end = high_resolution_clock::now();
        duration = duration_cast<milliseconds>(end - start);
        if(showstats)
            cout << duration.count() << endl;
        start = high_resolution_clock::now();
        if(left1 > 0){
            if(showstats)
                cout << "res1 ";
            int reschild = minimax(depth - 1, false, alpha + 1, alpha, cfir | (1LL << (42 - (left1) * 7)), csec ^ (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7);
            if(reschild > alpha){
                reschild = minimax(depth - 1, false, beta, reschild, cfir | (1LL << (42 - (left1) * 7)), csec ^ (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7);
                if(showstats)
                    cout << "\033[32m== \033[0m" << reschild << " ";
                alpha = reschild;
                ret = 1;
            }
            else if(minimax(depth - 1, false, alpha, alpha - 1, cfir | (1LL << (42 - (left1) * 7)), csec ^ (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7) == alpha){
                if(showstats)
                    cout << "\033[32m== \033[0m" << alpha << " ";
                ret |= 1;
            }
            else if(showstats)
                cout << "\033[31m<= \033[0m" << alpha << " ";
        }
        end = high_resolution_clock::now();
        duration = duration_cast<milliseconds>(end - start);
        if(showstats)
            cout << duration.count() << endl;
        start = high_resolution_clock::now();
        if(left7 > 0){
            if(showstats)
                cout << "res7 ";
            int reschild = minimax(depth - 1, false, alpha + 1, alpha, cfir | (1LL << (48 - (left7) * 7)), csec ^ (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1);
            if(reschild > alpha){
                reschild = minimax(depth - 1, false, beta, reschild, cfir | (1LL << (48 - (left7) * 7)), csec ^ (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1);
                if(showstats)
                    cout << "\033[32m== \033[0m" << reschild << " ";
                alpha = reschild;
                ret = 64;
            }
            else if(minimax(depth - 1, false, alpha, alpha - 1, cfir | (1LL << (48 - (left7) * 7)), csec ^ (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1) == alpha){
                if(showstats)
                    cout << "\033[32m== \033[0m" << alpha << " ";
                ret |= 64;
            }
            else if(showstats)
                cout << "\033[31m<= \033[0m" << alpha << " ";
        }
        end = high_resolution_clock::now();
        duration = duration_cast<milliseconds>(end - start);
        if(showstats)
            cout << duration.count() << endl;
        return make_pair(ret, alpha);
    }
    else
    {
        if(left4 > 0)
            if(cw(cfir | csec, 3, left4))
                return make_pair(8, -depth);
        if(left3 > 0)
            if(cw(cfir | csec, 2, left3))
                return make_pair(4, -depth);
        if(left5 > 0)
            if(cw(cfir | csec, 4, left5))
                return make_pair(16, -depth);
        if(left2 > 0)
            if(cw(cfir | csec, 1, left2))
                return make_pair(2, -depth);
        if(left6 > 0)
            if(cw(cfir | csec, 5, left6))
                return make_pair(32, -depth);
        if(left1 > 0)
            if(cw(cfir | csec, 0, left1))
                return make_pair(1, -depth);
        if(left7 > 0)
            if(cw(cfir | csec, 6, left7))
                return make_pair(64, -depth);
        uint8_t ret = 0;
        auto start = high_resolution_clock::now();
        if(left4 > 0){
            if(showstats)
                cout << "res4 ";
            int reschild = minimax(depth - 1, true, beta, beta - 1, cfir, csec ^ (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7);
            if(reschild < beta){
                reschild = minimax(depth - 1, true, reschild, alpha, cfir, csec ^ (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7);
                if(showstats)
                    cout << "\033[32m== \033[0m" << reschild << " ";
                beta = reschild;
                ret = 8;
            }
            else if(minimax(depth - 1, true, beta + 1, beta, cfir, csec ^ (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7) == beta){
                if(showstats)
                    cout << "\033[32m== \033[0m" << beta << " ";
                ret |= 8;
            }
            else if(showstats)
                cout << "\033[31m>= \033[0m" << beta << " ";
        }
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(end - start);
        if(showstats)
            cout << duration.count() << endl;
        start = high_resolution_clock::now();
        if(left3 > 0){
            if(showstats)
                cout << "res3 ";
            int reschild = minimax(depth - 1, true, beta, beta - 1, cfir, csec ^ (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7);
            if(reschild < beta){
                reschild = minimax(depth - 1, true, reschild, alpha, cfir, csec ^ (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7);
                if(showstats)
                    cout << "\033[32m== \033[0m" << reschild << " ";
                beta = reschild;
                ret = 4;
            }
            else if(minimax(depth - 1, true, beta + 1, beta, cfir, csec ^ (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7) == beta){
                if(showstats)
                    cout << "\033[32m== \033[0m" << beta << " ";
                ret |= 4;
            }
            else if(showstats)
                cout << "\033[31m>= \033[0m" << beta << " ";
        }
        end = high_resolution_clock::now();
        duration = duration_cast<milliseconds>(end - start);
        if(showstats)
            cout << duration.count() << endl;
        start = high_resolution_clock::now();
        if(left5 > 0){
            if(showstats)
                cout << "res5 ";
            int reschild = minimax(depth - 1, true, beta, beta - 1, cfir, csec ^ (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7);
            if(reschild < beta){
                reschild = minimax(depth - 1, true, reschild, alpha, cfir, csec ^ (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7);
                if(showstats)
                    cout << "\033[32m== \033[0m" << reschild << " ";
                beta = reschild;
                ret = 16;
            }
            else if(minimax(depth - 1, true, beta + 1, beta, cfir, csec ^ (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7) == beta){
                if(showstats)
                    cout << "\033[32m== \033[0m" << beta << " ";
                ret |= 16;
            }
            else if(showstats)
                cout << "\033[31m>= \033[0m" << beta << " ";
        }
        end = high_resolution_clock::now();
        duration = duration_cast<milliseconds>(end - start);
        if(showstats)
            cout << duration.count() << endl;
        start = high_resolution_clock::now();
        if(left2 > 0){
            if(showstats)
                cout << "res2 ";
            int reschild = minimax(depth - 1, true, beta, beta - 1, cfir, csec ^ (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7);
            if(reschild < beta){
                reschild = minimax(depth - 1, true, reschild, alpha, cfir, csec ^ (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7);
                if(showstats)
                    cout << "\033[32m== \033[0m" << reschild << " ";
                beta = reschild;
                ret = 2;
            }
            else if(minimax(depth - 1, true, beta + 1, beta, cfir, csec ^ (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7) == beta){
                if(showstats)
                    cout << "\033[32m== \033[0m" << beta << " ";
                ret |= 2;
            }
            else if(showstats)
                cout << "\033[31m>= \033[0m" << beta << " ";
        }
        end = high_resolution_clock::now();
        duration = duration_cast<milliseconds>(end - start);
        if(showstats)
            cout << duration.count() << endl;
        start = high_resolution_clock::now();
        if(left6 > 0){
            if(showstats)
                cout << "res6 ";
            int reschild = minimax(depth - 1, true, beta, beta - 1, cfir, csec ^ (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7);
            if(reschild < beta){
                reschild = minimax(depth - 1, true, reschild, alpha, cfir, csec ^ (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7);
                if(showstats)
                    cout << "\033[32m== \033[0m" << reschild << " ";
                beta = reschild;
                ret = 32;
            }
            else if(minimax(depth - 1, true, beta + 1, beta, cfir, csec ^ (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7) == beta){
                if(showstats)
                    cout << "\033[32m== \033[0m" << beta << " ";
                ret |= 32;
            }
            else if(showstats)
                cout << "\033[31m>= \033[0m" << beta << " ";
        }
        end = high_resolution_clock::now();
        duration = duration_cast<milliseconds>(end - start);
        if(showstats)
            cout << duration.count() << endl;
        start = high_resolution_clock::now();
        if(left1 > 0){
            if(showstats)
                cout << "res1 ";
            int reschild = minimax(depth - 1, true, beta, beta - 1, cfir, csec ^ (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7);
            if(reschild < beta){
                reschild = minimax(depth - 1, true, reschild, alpha, cfir, csec ^ (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7);
                if(showstats)
                    cout << "\033[32m== \033[0m" << reschild << " ";
                beta = reschild;
                ret = 1;
            }
            else if(minimax(depth - 1, true, beta + 1, beta, cfir, csec ^ (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7) == beta){
                if(showstats)
                    cout << "\033[32m== \033[0m" << beta << " ";
                ret |= 1;
            }
            else if(showstats)
                cout << "\033[31m>= \033[0m" << beta << " ";
        }
        end = high_resolution_clock::now();
        duration = duration_cast<milliseconds>(end - start);
        if(showstats)
            cout << duration.count() << endl;
        start = high_resolution_clock::now();
        if(left7 > 0){
            if(showstats)
                cout << "res7 ";
            int reschild = minimax(depth - 1, true, beta, beta - 1, cfir, csec ^ (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1);
            if(reschild < beta){
                reschild = minimax(depth - 1, true, reschild, alpha, cfir, csec ^ (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1);
                if(showstats)
                    cout << "\033[32m== \033[0m" << reschild << " ";
                beta = reschild;
                ret = 64;
            }
            else if(minimax(depth - 1, true, beta + 1, beta, cfir, csec ^ (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1) == beta){
                if(showstats)
                    cout << "\033[32m== \033[0m" << beta << " ";
                ret |= 64;
            }
            else if(showstats)
                cout << "\033[31m>= \033[0m" << beta << " ";
        }
        end = high_resolution_clock::now();
        duration = duration_cast<milliseconds>(end - start);
        if(showstats)
            cout << duration.count() << endl;
        return make_pair(ret, beta);
    }
}

int main(){
	srand(time(NULL));
	ifstream loadai("AId.bin", ios::binary);
	if(loadai){
		uint64_t t;
		loadai.read(reinterpret_cast<char*>(&t), sizeof(uint32_t));
        cache.reserve(t);
		for(uint64_t i = t; i; --i){
            loadai.read(reinterpret_cast<char*>(&t), sizeof(uint64_t));
			cache[t & 562949953421311ULL] = (t >> 49);
        }
        loadai.close();
	}
    else
    {
        loadai.close();
        ofstream createai("AId.bin", ios::binary);
        uint32_t t = 0;
        createai.write(reinterpret_cast<char*>(&t), sizeof(uint32_t));
        createai.close();
    }
	for (;;)
    {
        if(TranspositionTable.size() > 0)
            TranspositionTable.clear();
        uint64_t cfir = 0, csec = 4398046511103;
		uint8_t moveindex;
        int8_t currenteval = 1;
        cout << "Start first? " << endl;
        bool start = rand() % 2;
        cin >> start;
		uint32_t left[7] = {6,6,6,6,6,6,6};
		if (start == 0)
		{
			//cout << "bot starts first" << endl;
			for (int itmain = 0;; ++itmain)
			{               
                auto it = cache.find(cfir | (csec << 7));
                if(it != cache.end()){
                    uint16_t t = it->second;
                    moveindex = (t & 127);
                    currenteval = (t >> 7);
                    debug("\033[32m", "D", "poseval f =", currenteval);
                    debug("\033[32m", "D", "moveindex =", moveindex);
                    t = rand() % __builtin_popcount(moveindex);
                    for(int j = 0;; ++j, moveindex >>= 1){
                        if(moveindex & 1){
                            if(t == 0){
                                moveindex = j;
                                break;
                            }
                            else
                                --t;
                        }
                    }
                }
                else
                {
                    debug("\033[32m", "D", cfir);
                    debug("\033[32m", "D", csec);
                    debug("\033[32m", "D", itmain);
                    debug("\033[32m", "D", left, 7);
                    int safedepth = 41 - (itmain << 1);
                    debug("\033[32m", "D", "safedepth =", safedepth + 1);
                    --currenteval;
                    auto startin = high_resolution_clock::now();
                    pair<uint8_t, int8_t> result = minimaxentry(safedepth, true, safedepth, currenteval, cfir, csec, left[0], left[1], left[2], left[3], left[4], left[5], left[6]);
                    auto endin = high_resolution_clock::now();
                    moveindex = result.first;
                    currenteval = result.second;
                    cout << endl;
                    debug("\033[32m", "D", "poseval f =", currenteval);
                    debug("\033[32m", "D", "moveindex =", moveindex);
                    auto duration = duration_cast<milliseconds>(endin - startin);
                    debug("\033[31m", "A", "Minimax fulldepth milliseconds:", duration.count());
                    if(safedepth > 23){
                        cache[cfir | (csec << 7)] = (static_cast<uint16_t>(currenteval) << 7) | moveindex;
                        fstream dumpai("AId.bin", ios::in | ios::out | ios::binary);
                        uint64_t t = cache.size();
                        dumpai.write(reinterpret_cast<const char*>(&t), sizeof(uint32_t));
                        dumpai.seekp(0, ios::end);
                        t = (static_cast<uint64_t>(currenteval) << 56) | cfir | (csec << 7) | (static_cast<uint64_t>(moveindex) << 49);
                        dumpai.write(reinterpret_cast<const char*>(&t), sizeof(uint64_t));
                        dumpai.close();
                    }
                    safedepth = rand() % __builtin_popcount(moveindex);
                    for(int j = 0;; ++j, moveindex >>= 1){
                        if(moveindex & 1){
                            if(safedepth == 0){
                                moveindex = j;
                                break;
                            }
                            else
                                --safedepth;
                        }
                    }
                }
                debug("\033[35m", "A", "User is losing in", 41 - (itmain << 1) - currenteval, "moves");
                debug("\033[32m", "D", "move: ", moveindex + 1);
                cfir |= (1LL << (42 - (left[moveindex]) * 7 + moveindex));
                csec ^= (1LL << (42 - (left[moveindex]) * 7 + moveindex));
				if (cw(~cfir, moveindex, left[moveindex]))
				{
					cout << "Looks like pc won" << endl;
					display(cfir, csec);
					break;
				}
				left[moveindex]--;
				display(cfir, csec);
				int p2;
				for (;;)
				{
					cout << "Your move: ";
					cin >> p2;
                    // p2 = (rand() % 7) + 1;
					if(cin.fail()){
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					}
					else if (p2 > 0 and p2 < 8 and left[p2 - 1] > 0){
                        csec ^= (1LL << (41 - (left[p2 - 1]) * 7 + p2));
						break;
					}
				}
				if (cw(cfir | csec, p2 - 1, left[p2 - 1]))
				{
					cout << "Algorithm is trash..." << endl;
				    display(cfir, csec);
					break;
				}
				left[p2 - 1]--;
				if (itmain == 20)
				{
					cout << "DRAW" << endl;
					break;
				}
			}
		}
		else
        {
            //cout << "you start first" << endl;
            for (int itmain = 0;; ++itmain)
            {
                display(cfir, csec);
                int p2;
				for (;;)
				{
					cout << "Your move: ";
				    cin >> p2;
                    // p2 = (rand() % 7) + 1;
					if(cin.fail()){
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					}
					else if (p2 > 0 and p2 < 8 and left[p2 - 1] > 0){
                        cfir |= (1LL << (41 - (left[p2 - 1]) * 7 + p2));
                        csec ^= (1LL << (41 - (left[p2 - 1]) * 7 + p2));
						break;
					}
				}
				if (cw(~cfir, p2 - 1, left[p2 - 1]))
				{
					cout << "Algorithm is trash..." << endl;
					display(cfir, csec);
					break;
				}
				left[p2 - 1]--;
                auto it = cache.find(cfir | (csec << 7));
                if(it != cache.end()){
                    uint16_t t = it->second;
                    moveindex = (t & 127);
                    currenteval = (t >> 7);
                    debug("\033[32m", "D", "poseval f =", currenteval);
                    debug("\033[32m", "D", "moveindex =", moveindex);
                    t = rand() % __builtin_popcount(moveindex);
                    for(int j = 0;; ++j, moveindex >>= 1){
                        if(moveindex & 1){
                            if(t == 0){
                                moveindex = j;
                                break;
                            }
                            else
                                --t;
                        }
                    }
                }
                else
                {
                    debug("\033[32m", "D", cfir);
                    debug("\033[32m", "D", csec);
                    debug("\033[32m", "D", itmain);
                    debug("\033[32m", "D", left, 7);
                    int safedepth = 41 - (itmain << 1);
                    debug("\033[32m", "D", "safedepth =", safedepth);
                    if(itmain == 0)
                        currenteval = 3;
                    else
                        ++currenteval;
                    auto startin = high_resolution_clock::now();
                    pair<uint8_t, int8_t> result = minimaxentry(safedepth, false, currenteval, -safedepth, cfir, csec, left[0], left[1], left[2], left[3], left[4], left[5], left[6]);
                    auto endin = high_resolution_clock::now();
                    moveindex = result.first;
                    currenteval = result.second;
                    cout << endl;
                    debug("\033[32m", "D", "poseval =", currenteval);
                    debug("\033[32m", "D", "moveindex =", moveindex);
                    auto duration = duration_cast<milliseconds>(endin - startin);
                    debug("\033[31m", "A", "Minimax fulldepth milliseconds:", duration.count());
                    if(safedepth > 23){
                        cache[cfir | (csec << 7)] = (static_cast<uint16_t>(currenteval) << 7) | moveindex;
                        fstream dumpai("AId.bin", ios::in | ios::out | ios::binary);
                        uint64_t t = cache.size();
                        dumpai.write(reinterpret_cast<const char*>(&t), sizeof(uint32_t));
                        dumpai.seekp(0, ios::end);
                        t = (static_cast<uint64_t>(currenteval) << 56) | cfir | (csec << 7) | (static_cast<uint64_t>(moveindex) << 49);
                        dumpai.write(reinterpret_cast<const char*>(&t), sizeof(uint64_t));
                        dumpai.close();
                    }
                    safedepth = rand() % __builtin_popcount(moveindex);
                    for(int j = 0;; ++j, moveindex >>= 1){
                        if(moveindex & 1){
                            if(safedepth == 0){
                                moveindex = j;
                                break;
                            }
                            else
                                --safedepth;
                        }
                    }
                }
                if(currenteval > 0)
                    debug("\033[35m", "A", "AI is losing in", 40 - (itmain << 1), "moves");
                else if(currenteval == 0)
                    debug("\033[35m", "A", "AI is drawing in", 41 - (itmain << 1), "moves");
                else
                    debug("\033[35m", "A", "User is losing in", 41 - (itmain << 1) + currenteval, "moves");
                debug("\033[32m", "D", "move: ", moveindex + 1);
                csec ^= (1LL << (42 - (left[moveindex]) * 7 + moveindex));
				if (cw(cfir | csec, moveindex, left[moveindex]))
				{
					cout << "Looks like pc won" << endl;
					display(cfir, csec);
					break;
				}
				left[moveindex]--;
				if (itmain == 20)
				{
					cout << "DRAW" << endl;
					break;
				}
            }
        }
	}
}