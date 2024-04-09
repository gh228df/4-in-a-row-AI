#include <iostream>
#include <chrono>
#include <vector>
#include <algorithm>
#include <cmath>
#include <thread>
#include <fstream>
#include <bitset>
#include <unordered_map>
#include <mutex>
#include <string>

/*
depth 22
66061
8520722
5
5523566
-13 -9 0 0 -13 -13 -13

8850504
3271557684
8
6611255

25575949
2181107090
9
3421266
-3 18 -9 -9 -9 -23 22

inf

[D] 525
[D] 66578
[D] 4
[D] 5534566
-11 -13 -13 -9 -11 -15 -11
*/

using namespace std;
using namespace chrono;

struct field
{
	long long fir;
	long long sec;
	bool operator==(const field& other) const {
        return sec == other.sec && fir == other.fir;
    }
	size_t operator()(const field& s) const {
        return hash<long long>()(s.sec) ^ (hash<long long>()(s.fir << 20));
    }
};

void debug(string color, string init, string to_debug){
    cout << color << "[" << init << "] \033[0m" << to_debug << endl;
}

void debug(string color, string init, string to_debug, long long num){
    cout << color << "[" << init << "] \033[0m" << to_debug << " " << num << endl;
}

void debug(string color, string init, string to_debug, long long num, string to_debug2){
    cout << color << "[" << init << "] \033[0m" << to_debug << " " << num << " " << to_debug2 << endl;
}

void debug(string color, string init, int to_debug){
    cout << color << "[" << init << "] \033[0m" << to_debug << endl;
}

void debug(string color, string init, long long to_debug){
    cout << color << "[" << init << "] \033[0m" << to_debug << endl;
}

void debug(string color, string init, int* to_debug, int size){
    cout << color << "[" << init << "] \033[0m";
    for(int i = 0; i < size; i++)
        cout << to_debug[i];
    cout << endl;
}

void debug(field to_debug){
    cout << "\033[32m[DEBUG] \033[0m";
    for (int u = 41; u > -1; u--)
    {
        if(((to_debug.fir >> u) & 1) == 1)
            cout << "X";
        else if(((to_debug.sec >> u) & 1) == 1)
            cout << "O";
        else
            cout << ".";
        if(u % 7 == 0)
            cout << endl;
        if(u % 7 == 0 and u > 0)
            cout << "\033[32m[DEBUG] \033[0m";
    }
}

bool cw(long long curcheckw, int last, int left){
    switch(last){
        case 0:
        switch(left){
            case 6:
            if((curcheckw & 14LL) == 14LL)
                    return true;
            if((curcheckw & 16843008LL) == 16843008LL)
                    return true;
            return false;
            case 5:
            if((curcheckw & 1792LL) == 1792LL)
                    return true;
            if((curcheckw & 2155905024LL) == 2155905024LL)
                    return true;
            return false;
            case 4:
            if((curcheckw & 229376LL) == 229376LL)
                    return true;
            if((curcheckw & 275955843072LL) == 275955843072LL)
                    return true;
            return false;
            case 3:
            if((curcheckw & 29360128LL) == 29360128LL)
                    return true;
            if((curcheckw & 16513LL) == 16513LL)
                    return true;
            if((curcheckw & 33288LL) == 33288LL)
                    return true;
            return false;
            case 2:
            if((curcheckw & 3758096384LL) == 3758096384LL)
                    return true;
            if((curcheckw & 2113664LL) == 2113664LL)
                    return true;
            if((curcheckw & 4260864LL) == 4260864LL)
                    return true;
            return false;
            case 1:
            if((curcheckw & 481036337152LL) == 481036337152LL)
                    return true;
            if((curcheckw & 270548992LL) == 270548992LL)
                    return true;
            if((curcheckw & 545390592LL) == 545390592LL)
                    return true;
            return false;
        }
        case 1:
        switch(left){
            case 6:
            if((curcheckw & 13LL) == 13LL)
                    return true;
            if((curcheckw & 28LL) == 28LL)
                    return true;
            if((curcheckw & 33686016LL) == 33686016LL)
                    return true;
            return false;
            case 5:
            if((curcheckw & 1664LL) == 1664LL)
                    return true;
            if((curcheckw & 3584LL) == 3584LL)
                    return true;
            if((curcheckw & 16842753LL) == 16842753LL)
                    return true;
            if((curcheckw & 4311810048LL) == 4311810048LL)
                    return true;
            return false;
            case 4:
            if((curcheckw & 212992LL) == 212992LL)
                    return true;
            if((curcheckw & 458752LL) == 458752LL)
                    return true;
            if((curcheckw & 2155872384LL) == 2155872384LL)
                    return true;
            if((curcheckw & 551911686144LL) == 551911686144LL)
                    return true;
            if((curcheckw & 2097672LL) == 2097672LL)
                    return true;
            return false;
            case 3:
            if((curcheckw & 27262976LL) == 27262976LL)
                    return true;
            if((curcheckw & 58720256LL) == 58720256LL)
                    return true;
            if((curcheckw & 33026LL) == 33026LL)
                    return true;
            if((curcheckw & 275951665152LL) == 275951665152LL)
                    return true;
            if((curcheckw & 66576LL) == 66576LL)
                    return true;
            if((curcheckw & 268502016LL) == 268502016LL)
                    return true;
            return false;
            case 2:
            if((curcheckw & 3489660928LL) == 3489660928LL)
                    return true;
            if((curcheckw & 7516192768LL) == 7516192768LL)
                    return true;
            if((curcheckw & 4227328LL) == 4227328LL)
                    return true;
            if((curcheckw & 8521728LL) == 8521728LL)
                    return true;
            if((curcheckw & 34368258048LL) == 34368258048LL)
                    return true;
            return false;
            case 1:
            if((curcheckw & 446676598784LL) == 446676598784LL)
                    return true;
            if((curcheckw & 962072674304LL) == 962072674304LL)
                    return true;
            if((curcheckw & 541097984LL) == 541097984LL)
                    return true;
            if((curcheckw & 1090781184LL) == 1090781184LL)
                    return true;
            return false;
        }
        case 2:
        switch(left){
            case 6:
            if((curcheckw & 11LL) == 11LL)
                    return true;
            if((curcheckw & 26LL) == 26LL)
                    return true;
            if((curcheckw & 56LL) == 56LL)
                    return true;
            if((curcheckw & 67372032LL) == 67372032LL)
                    return true;
            return false;
            case 5:
            if((curcheckw & 1408LL) == 1408LL)
                    return true;
            if((curcheckw & 3328LL) == 3328LL)
                    return true;
            if((curcheckw & 7168LL) == 7168LL)
                    return true;
            if((curcheckw & 33685506LL) == 33685506LL)
                    return true;
            if((curcheckw & 8623620096LL) == 8623620096LL)
                    return true;
            if((curcheckw & 2129928LL) == 2129928LL)
                    return true;
            return false;
            case 4:
            if((curcheckw & 180224LL) == 180224LL)
                    return true;
            if((curcheckw & 425984LL) == 425984LL)
                    return true;
            if((curcheckw & 917504LL) == 917504LL)
                    return true;
            if((curcheckw & 16777473LL) == 16777473LL)
                    return true;
            if((curcheckw & 4311744768LL) == 4311744768LL)
                    return true;
            if((curcheckw & 1103823372288LL) == 1103823372288LL)
                    return true;
            if((curcheckw & 4195344LL) == 4195344LL)
                    return true;
            if((curcheckw & 272630784LL) == 272630784LL)
                    return true;
            return false;
            case 3:
            if((curcheckw & 23068672LL) == 23068672LL)
                    return true;
            if((curcheckw & 54525952LL) == 54525952LL)
                    return true;
            if((curcheckw & 117440512LL) == 117440512LL)
                    return true;
            if((curcheckw & 66052LL) == 66052LL)
                    return true;
            if((curcheckw & 2147516544LL) == 2147516544LL)
                    return true;
            if((curcheckw & 551903330304LL) == 551903330304LL)
                    return true;
            if((curcheckw & 133152LL) == 133152LL)
                    return true;
            if((curcheckw & 537004032LL) == 537004032LL)
                    return true;
            if((curcheckw & 34896740352LL) == 34896740352LL)
                    return true;
            return false;
            case 2:
            if((curcheckw & 2952790016LL) == 2952790016LL)
                    return true;
            if((curcheckw & 6979321856LL) == 6979321856LL)
                    return true;
            if((curcheckw & 15032385536LL) == 15032385536LL)
                    return true;
            if((curcheckw & 8454656LL) == 8454656LL)
                    return true;
            if((curcheckw & 274882117632LL) == 274882117632LL)
                    return true;
            if((curcheckw & 17043456LL) == 17043456LL)
                    return true;
            if((curcheckw & 68736516096LL) == 68736516096LL)
                    return true;
            return false;
            case 1:
            if((curcheckw & 377957122048LL) == 377957122048LL)
                    return true;
            if((curcheckw & 893353197568LL) == 893353197568LL)
                    return true;
            if((curcheckw & 1924145348608LL) == 1924145348608LL)
                    return true;
            if((curcheckw & 1082195968LL) == 1082195968LL)
                    return true;
            if((curcheckw & 2181562368LL) == 2181562368LL)
                    return true;
            return false;
        }
        case 3:
        switch(left){
            case 6:
            if((curcheckw & 7LL) == 7LL)
                    return true;
            if((curcheckw & 22LL) == 22LL)
                    return true;
            if((curcheckw & 52LL) == 52LL)
                    return true;
            if((curcheckw & 112LL) == 112LL)
                    return true;
            if((curcheckw & 134744064LL) == 134744064LL)
                    return true;
            if((curcheckw & 2130432LL) == 2130432LL)
                    return true;
            return false;
            case 5:
            if((curcheckw & 896LL) == 896LL)
                    return true;
            if((curcheckw & 2816LL) == 2816LL)
                    return true;
            if((curcheckw & 6656LL) == 6656LL)
                    return true;
            if((curcheckw & 14336LL) == 14336LL)
                    return true;
            if((curcheckw & 67371012LL) == 67371012LL)
                    return true;
            if((curcheckw & 17247240192LL) == 17247240192LL)
                    return true;
            if((curcheckw & 4259856LL) == 4259856LL)
                    return true;
            if((curcheckw & 272695296LL) == 272695296LL)
                    return true;
            return false;
            case 4:
            if((curcheckw & 114688LL) == 114688LL)
                    return true;
            if((curcheckw & 360448LL) == 360448LL)
                    return true;
            if((curcheckw & 851968LL) == 851968LL)
                    return true;
            if((curcheckw & 1835008LL) == 1835008LL)
                    return true;
            if((curcheckw & 33554946LL) == 33554946LL)
                    return true;
            if((curcheckw & 8623489536LL) == 8623489536LL)
                    return true;
            if((curcheckw & 2207646744576LL) == 2207646744576LL)
                    return true;
            if((curcheckw & 8390688LL) == 8390688LL)
                    return true;
            if((curcheckw & 545261568LL) == 545261568LL)
                    return true;
            if((curcheckw & 34904997888LL) == 34904997888LL)
                    return true;
            return false;
            case 3:
            if((curcheckw & 14680064LL) == 14680064LL)
                    return true;
            if((curcheckw & 46137344LL) == 46137344LL)
                    return true;
            if((curcheckw & 109051904LL) == 109051904LL)
                    return true;
            if((curcheckw & 234881024LL) == 234881024LL)
                    return true;
            if((curcheckw & 132104LL) == 132104LL)
                    return true;
            if((curcheckw & 65793LL) == 65793LL)
                    return true;
            if((curcheckw & 4295033088LL) == 4295033088LL)
                    return true;
            if((curcheckw & 1103806660608LL) == 1103806660608LL)
                    return true;
            if((curcheckw & 266304LL) == 266304LL)
                    return true;
            if((curcheckw & 1074008064LL) == 1074008064LL)
                    return true;
            if((curcheckw & 69793480704LL) == 69793480704LL)
                    return true;
            return false;
            case 2:
            if((curcheckw & 1879048192LL) == 1879048192LL)
                    return true;
            if((curcheckw & 5905580032LL) == 5905580032LL)
                    return true;
            if((curcheckw & 13958643712LL) == 13958643712LL)
                    return true;
            if((curcheckw & 30064771072LL) == 30064771072LL)
                    return true;
            if((curcheckw & 16909312LL) == 16909312LL)
                    return true;
            if((curcheckw & 8421504LL) == 8421504LL)
                    return true;
            if((curcheckw & 549764235264LL) == 549764235264LL)
                    return true;
            if((curcheckw & 34086912LL) == 34086912LL)
                    return true;
            if((curcheckw & 137473032192LL) == 137473032192LL)
                    return true;
            return false;
            case 1:
            if((curcheckw & 240518168576LL) == 240518168576LL)
                    return true;
            if((curcheckw & 755914244096LL) == 755914244096LL)
                    return true;
            if((curcheckw & 1786706395136LL) == 1786706395136LL)
                    return true;
            if((curcheckw & 3848290697216LL) == 3848290697216LL)
                    return true;
            if((curcheckw & 2164391936LL) == 2164391936LL)
                    return true;
            if((curcheckw & 1077952512LL) == 1077952512LL)
                    return true;
            if((curcheckw & 4363124736LL) == 4363124736LL)
                    return true;
            return false;
        }
        case 4:
        switch(left){
            case 6:
            if((curcheckw & 14LL) == 14LL)
                    return true;
            if((curcheckw & 44LL) == 44LL)
                    return true;
            if((curcheckw & 104LL) == 104LL)
                    return true;
            if((curcheckw & 4260864LL) == 4260864LL)
                    return true;
            return false;
            case 5:
            if((curcheckw & 1792LL) == 1792LL)
                    return true;
            if((curcheckw & 5632LL) == 5632LL)
                    return true;
            if((curcheckw & 13312LL) == 13312LL)
                    return true;
            if((curcheckw & 134742024LL) == 134742024LL)
                    return true;
            if((curcheckw & 8519712LL) == 8519712LL)
                    return true;
            if((curcheckw & 545390592LL) == 545390592LL)
                    return true;
            return false;
            case 4:
            if((curcheckw & 229376LL) == 229376LL)
                    return true;
            if((curcheckw & 720896LL) == 720896LL)
                    return true;
            if((curcheckw & 1703936LL) == 1703936LL)
                    return true;
            if((curcheckw & 67109892LL) == 67109892LL)
                    return true;
            if((curcheckw & 17246979072LL) == 17246979072LL)
                    return true;
            if((curcheckw & 16781376LL) == 16781376LL)
                    return true;
            if((curcheckw & 1090523136LL) == 1090523136LL)
                    return true;
            if((curcheckw & 69809995776LL) == 69809995776LL)
                    return true;
            return false;
            case 3:
            if((curcheckw & 29360128LL) == 29360128LL)
                    return true;
            if((curcheckw & 92274688LL) == 92274688LL)
                    return true;
            if((curcheckw & 218103808LL) == 218103808LL)
                    return true;
            if((curcheckw & 264208LL) == 264208LL)
                    return true;
            if((curcheckw & 131586LL) == 131586LL)
                    return true;
            if((curcheckw & 8590066176LL) == 8590066176LL)
                    return true;
            if((curcheckw & 2207613321216LL) == 2207613321216LL)
                    return true;
            if((curcheckw & 2148016128LL) == 2148016128LL)
                    return true;
            if((curcheckw & 139586961408LL) == 139586961408LL)
                    return true;
            return false;
            case 2:
            if((curcheckw & 3758096384LL) == 3758096384LL)
                    return true;
            if((curcheckw & 11811160064LL) == 11811160064LL)
                    return true;
            if((curcheckw & 27917287424LL) == 27917287424LL)
                    return true;
            if((curcheckw & 33818624LL) == 33818624LL)
                    return true;
            if((curcheckw & 16843008LL) == 16843008LL)
                    return true;
            if((curcheckw & 1099528470528LL) == 1099528470528LL)
                    return true;
            if((curcheckw & 274946064384LL) == 274946064384LL)
                    return true;
            return false;
            case 1:
            if((curcheckw & 481036337152LL) == 481036337152LL)
                    return true;
            if((curcheckw & 1511828488192LL) == 1511828488192LL)
                    return true;
            if((curcheckw & 3573412790272LL) == 3573412790272LL)
                    return true;
            if((curcheckw & 4328783872LL) == 4328783872LL)
                    return true;
            if((curcheckw & 2155905024LL) == 2155905024LL)
                    return true;
            return false;
        }
        case 5:
        switch(left){
            case 6:
            if((curcheckw & 28LL) == 28LL)
                    return true;
            if((curcheckw & 88LL) == 88LL)
                    return true;
            if((curcheckw & 8521728LL) == 8521728LL)
                    return true;
            return false;
            case 5:
            if((curcheckw & 3584LL) == 3584LL)
                    return true;
            if((curcheckw & 11264LL) == 11264LL)
                    return true;
            if((curcheckw & 17039424LL) == 17039424LL)
                    return true;
            if((curcheckw & 1090781184LL) == 1090781184LL)
                    return true;
            return false;
            case 4:
            if((curcheckw & 458752LL) == 458752LL)
                    return true;
            if((curcheckw & 1441792LL) == 1441792LL)
                    return true;
            if((curcheckw & 134219784LL) == 134219784LL)
                    return true;
            if((curcheckw & 2181046272LL) == 2181046272LL)
                    return true;
            if((curcheckw & 139619991552LL) == 139619991552LL)
                    return true;
            return false;
            case 3:
            if((curcheckw & 58720256LL) == 58720256LL)
                    return true;
            if((curcheckw & 184549376LL) == 184549376LL)
                    return true;
            if((curcheckw & 528416LL) == 528416LL)
                    return true;
            if((curcheckw & 263172LL) == 263172LL)
                    return true;
            if((curcheckw & 17180132352LL) == 17180132352LL)
                    return true;
            if((curcheckw & 279173922816LL) == 279173922816LL)
                    return true;
            return false;
            case 2:
            if((curcheckw & 7516192768LL) == 7516192768LL)
                    return true;
            if((curcheckw & 23622320128LL) == 23622320128LL)
                    return true;
            if((curcheckw & 67637248LL) == 67637248LL)
                    return true;
            if((curcheckw & 33686016LL) == 33686016LL)
                    return true;
            if((curcheckw & 2199056941056LL) == 2199056941056LL)
                    return true;
            return false;
            case 1:
            if((curcheckw & 962072674304LL) == 962072674304LL)
                    return true;
            if((curcheckw & 3023656976384LL) == 3023656976384LL)
                    return true;
            if((curcheckw & 8657567744LL) == 8657567744LL)
                    return true;
            if((curcheckw & 4311810048LL) == 4311810048LL)
                    return true;
            return false;
        }
        case 6:
        switch(left){
            case 6:
            if((curcheckw & 56LL) == 56LL)
                    return true;
            if((curcheckw & 17043456LL) == 17043456LL)
                    return true;
            return false;
            case 5:
            if((curcheckw & 7168LL) == 7168LL)
                    return true;
            if((curcheckw & 2181562368LL) == 2181562368LL)
                    return true;
            return false;
            case 4:
            if((curcheckw & 917504LL) == 917504LL)
                    return true;
            if((curcheckw & 279239983104LL) == 279239983104LL)
                    return true;
            return false;
            case 3:
            if((curcheckw & 117440512LL) == 117440512LL)
                    return true;
            if((curcheckw & 1056832LL) == 1056832LL)
                    return true;
            if((curcheckw & 526344LL) == 526344LL)
                    return true;
            return false;
            case 2:
            if((curcheckw & 15032385536LL) == 15032385536LL)
                    return true;
            if((curcheckw & 135274496LL) == 135274496LL)
                    return true;
            if((curcheckw & 67372032LL) == 67372032LL)
                    return true;
            return false;
            case 1:
            if((curcheckw & 1924145348608LL) == 1924145348608LL)
                    return true;
            if((curcheckw & 17315135488LL) == 17315135488LL)
                    return true;
            if((curcheckw & 8623620096LL) == 8623620096LL)
                    return true;
            return false;
        }
    }
}

bool cw1(long long curcheckw, int left){
    switch(left){
        case 6:
        if((curcheckw & 14LL) == 14LL)
                return true;
        if((curcheckw & 16843008LL) == 16843008LL)
                return true;
        return false;
        case 5:
        if((curcheckw & 1792LL) == 1792LL)
                return true;
        if((curcheckw & 2155905024LL) == 2155905024LL)
                return true;
        return false;
        case 4:
        if((curcheckw & 229376LL) == 229376LL)
                return true;
        if((curcheckw & 275955843072LL) == 275955843072LL)
                return true;
        return false;
        case 3:
        if((curcheckw & 29360128LL) == 29360128LL)
                return true;
        if((curcheckw & 16513LL) == 16513LL)
                return true;
        if((curcheckw & 33288LL) == 33288LL)
                return true;
        return false;
        case 2:
        if((curcheckw & 3758096384LL) == 3758096384LL)
                return true;
        if((curcheckw & 2113664LL) == 2113664LL)
                return true;
        if((curcheckw & 4260864LL) == 4260864LL)
                return true;
        return false;
        case 1:
        if((curcheckw & 481036337152LL) == 481036337152LL)
                return true;
        if((curcheckw & 270548992LL) == 270548992LL)
                return true;
        if((curcheckw & 545390592LL) == 545390592LL)
                return true;
        return false;
    }
}

bool cw2(long long curcheckw, int left){
    switch(left){
        case 6:
        if((curcheckw & 13LL) == 13LL)
                return true;
        if((curcheckw & 28LL) == 28LL)
                return true;
        if((curcheckw & 33686016LL) == 33686016LL)
                return true;
        return false;
        case 5:
        if((curcheckw & 1664LL) == 1664LL)
                return true;
        if((curcheckw & 3584LL) == 3584LL)
                return true;
        if((curcheckw & 16842753LL) == 16842753LL)
                return true;
        if((curcheckw & 4311810048LL) == 4311810048LL)
                return true;
        return false;
        case 4:
        if((curcheckw & 212992LL) == 212992LL)
                return true;
        if((curcheckw & 458752LL) == 458752LL)
                return true;
        if((curcheckw & 2155872384LL) == 2155872384LL)
                return true;
        if((curcheckw & 551911686144LL) == 551911686144LL)
                return true;
        if((curcheckw & 2097672LL) == 2097672LL)
                return true;
        return false;
        case 3:
        if((curcheckw & 27262976LL) == 27262976LL)
                return true;
        if((curcheckw & 58720256LL) == 58720256LL)
                return true;
        if((curcheckw & 33026LL) == 33026LL)
                return true;
        if((curcheckw & 275951665152LL) == 275951665152LL)
                return true;
        if((curcheckw & 66576LL) == 66576LL)
                return true;
        if((curcheckw & 268502016LL) == 268502016LL)
                return true;
        return false;
        case 2:
        if((curcheckw & 3489660928LL) == 3489660928LL)
                return true;
        if((curcheckw & 7516192768LL) == 7516192768LL)
                return true;
        if((curcheckw & 4227328LL) == 4227328LL)
                return true;
        if((curcheckw & 8521728LL) == 8521728LL)
                return true;
        if((curcheckw & 34368258048LL) == 34368258048LL)
                return true;
        return false;
        case 1:
        if((curcheckw & 446676598784LL) == 446676598784LL)
                return true;
        if((curcheckw & 962072674304LL) == 962072674304LL)
                return true;
        if((curcheckw & 541097984LL) == 541097984LL)
                return true;
        if((curcheckw & 1090781184LL) == 1090781184LL)
                return true;
        return false;
    }
}

bool cw3(long long curcheckw, int left){
    switch(left){
        case 6:
        if((curcheckw & 11LL) == 11LL)
                return true;
        if((curcheckw & 26LL) == 26LL)
                return true;
        if((curcheckw & 56LL) == 56LL)
                return true;
        if((curcheckw & 67372032LL) == 67372032LL)
                return true;
        return false;
        case 5:
        if((curcheckw & 1408LL) == 1408LL)
                return true;
        if((curcheckw & 3328LL) == 3328LL)
                return true;
        if((curcheckw & 7168LL) == 7168LL)
                return true;
        if((curcheckw & 33685506LL) == 33685506LL)
                return true;
        if((curcheckw & 8623620096LL) == 8623620096LL)
                return true;
        if((curcheckw & 2129928LL) == 2129928LL)
                return true;
        return false;
        case 4:
        if((curcheckw & 180224LL) == 180224LL)
                return true;
        if((curcheckw & 425984LL) == 425984LL)
                return true;
        if((curcheckw & 917504LL) == 917504LL)
                return true;
        if((curcheckw & 16777473LL) == 16777473LL)
                return true;
        if((curcheckw & 4311744768LL) == 4311744768LL)
                return true;
        if((curcheckw & 1103823372288LL) == 1103823372288LL)
                return true;
        if((curcheckw & 4195344LL) == 4195344LL)
                return true;
        if((curcheckw & 272630784LL) == 272630784LL)
                return true;
        return false;
        case 3:
        if((curcheckw & 23068672LL) == 23068672LL)
                return true;
        if((curcheckw & 54525952LL) == 54525952LL)
                return true;
        if((curcheckw & 117440512LL) == 117440512LL)
                return true;
        if((curcheckw & 66052LL) == 66052LL)
                return true;
        if((curcheckw & 2147516544LL) == 2147516544LL)
                return true;
        if((curcheckw & 551903330304LL) == 551903330304LL)
                return true;
        if((curcheckw & 133152LL) == 133152LL)
                return true;
        if((curcheckw & 537004032LL) == 537004032LL)
                return true;
        if((curcheckw & 34896740352LL) == 34896740352LL)
                return true;
        return false;
        case 2:
        if((curcheckw & 2952790016LL) == 2952790016LL)
                return true;
        if((curcheckw & 6979321856LL) == 6979321856LL)
                return true;
        if((curcheckw & 15032385536LL) == 15032385536LL)
                return true;
        if((curcheckw & 8454656LL) == 8454656LL)
                return true;
        if((curcheckw & 274882117632LL) == 274882117632LL)
                return true;
        if((curcheckw & 17043456LL) == 17043456LL)
                return true;
        if((curcheckw & 68736516096LL) == 68736516096LL)
                return true;
        return false;
        case 1:
        if((curcheckw & 377957122048LL) == 377957122048LL)
                return true;
        if((curcheckw & 893353197568LL) == 893353197568LL)
                return true;
        if((curcheckw & 1924145348608LL) == 1924145348608LL)
                return true;
        if((curcheckw & 1082195968LL) == 1082195968LL)
                return true;
        if((curcheckw & 2181562368LL) == 2181562368LL)
                return true;
        return false;
    }
}

bool cw4(long long curcheckw, int left){
    switch(left){
        case 6:
        if((curcheckw & 7LL) == 7LL)
                return true;
        if((curcheckw & 22LL) == 22LL)
                return true;
        if((curcheckw & 52LL) == 52LL)
                return true;
        if((curcheckw & 112LL) == 112LL)
                return true;
        if((curcheckw & 134744064LL) == 134744064LL)
                return true;
        if((curcheckw & 2130432LL) == 2130432LL)
                return true;
        return false;
        case 5:
        if((curcheckw & 896LL) == 896LL)
                return true;
        if((curcheckw & 2816LL) == 2816LL)
                return true;
        if((curcheckw & 6656LL) == 6656LL)
                return true;
        if((curcheckw & 14336LL) == 14336LL)
                return true;
        if((curcheckw & 67371012LL) == 67371012LL)
                return true;
        if((curcheckw & 17247240192LL) == 17247240192LL)
                return true;
        if((curcheckw & 4259856LL) == 4259856LL)
                return true;
        if((curcheckw & 272695296LL) == 272695296LL)
                return true;
        return false;
        case 4:
        if((curcheckw & 114688LL) == 114688LL)
                return true;
        if((curcheckw & 360448LL) == 360448LL)
                return true;
        if((curcheckw & 851968LL) == 851968LL)
                return true;
        if((curcheckw & 1835008LL) == 1835008LL)
                return true;
        if((curcheckw & 33554946LL) == 33554946LL)
                return true;
        if((curcheckw & 8623489536LL) == 8623489536LL)
                return true;
        if((curcheckw & 2207646744576LL) == 2207646744576LL)
                return true;
        if((curcheckw & 8390688LL) == 8390688LL)
                return true;
        if((curcheckw & 545261568LL) == 545261568LL)
                return true;
        if((curcheckw & 34904997888LL) == 34904997888LL)
                return true;
        return false;
        case 3:
        if((curcheckw & 14680064LL) == 14680064LL)
                return true;
        if((curcheckw & 46137344LL) == 46137344LL)
                return true;
        if((curcheckw & 109051904LL) == 109051904LL)
                return true;
        if((curcheckw & 234881024LL) == 234881024LL)
                return true;
        if((curcheckw & 132104LL) == 132104LL)
                return true;
        if((curcheckw & 65793LL) == 65793LL)
                return true;
        if((curcheckw & 4295033088LL) == 4295033088LL)
                return true;
        if((curcheckw & 1103806660608LL) == 1103806660608LL)
                return true;
        if((curcheckw & 266304LL) == 266304LL)
                return true;
        if((curcheckw & 1074008064LL) == 1074008064LL)
                return true;
        if((curcheckw & 69793480704LL) == 69793480704LL)
                return true;
        return false;
        case 2:
        if((curcheckw & 1879048192LL) == 1879048192LL)
                return true;
        if((curcheckw & 5905580032LL) == 5905580032LL)
                return true;
        if((curcheckw & 13958643712LL) == 13958643712LL)
                return true;
        if((curcheckw & 30064771072LL) == 30064771072LL)
                return true;
        if((curcheckw & 16909312LL) == 16909312LL)
                return true;
        if((curcheckw & 8421504LL) == 8421504LL)
                return true;
        if((curcheckw & 549764235264LL) == 549764235264LL)
                return true;
        if((curcheckw & 34086912LL) == 34086912LL)
                return true;
        if((curcheckw & 137473032192LL) == 137473032192LL)
                return true;
        return false;
        case 1:
        if((curcheckw & 240518168576LL) == 240518168576LL)
                return true;
        if((curcheckw & 755914244096LL) == 755914244096LL)
                return true;
        if((curcheckw & 1786706395136LL) == 1786706395136LL)
                return true;
        if((curcheckw & 3848290697216LL) == 3848290697216LL)
                return true;
        if((curcheckw & 2164391936LL) == 2164391936LL)
                return true;
        if((curcheckw & 1077952512LL) == 1077952512LL)
                return true;
        if((curcheckw & 4363124736LL) == 4363124736LL)
                return true;
        return false;
    }
}

bool cw5(long long curcheckw, int left){
    switch(left){
        case 6:
        if((curcheckw & 14LL) == 14LL)
                return true;
        if((curcheckw & 44LL) == 44LL)
                return true;
        if((curcheckw & 104LL) == 104LL)
                return true;
        if((curcheckw & 4260864LL) == 4260864LL)
                return true;
        return false;
        case 5:
        if((curcheckw & 1792LL) == 1792LL)
                return true;
        if((curcheckw & 5632LL) == 5632LL)
                return true;
        if((curcheckw & 13312LL) == 13312LL)
                return true;
        if((curcheckw & 134742024LL) == 134742024LL)
                return true;
        if((curcheckw & 8519712LL) == 8519712LL)
                return true;
        if((curcheckw & 545390592LL) == 545390592LL)
                return true;
        return false;
        case 4:
        if((curcheckw & 229376LL) == 229376LL)
                return true;
        if((curcheckw & 720896LL) == 720896LL)
                return true;
        if((curcheckw & 1703936LL) == 1703936LL)
                return true;
        if((curcheckw & 67109892LL) == 67109892LL)
                return true;
        if((curcheckw & 17246979072LL) == 17246979072LL)
                return true;
        if((curcheckw & 16781376LL) == 16781376LL)
                return true;
        if((curcheckw & 1090523136LL) == 1090523136LL)
                return true;
        if((curcheckw & 69809995776LL) == 69809995776LL)
                return true;
        return false;
        case 3:
        if((curcheckw & 29360128LL) == 29360128LL)
                return true;
        if((curcheckw & 92274688LL) == 92274688LL)
                return true;
        if((curcheckw & 218103808LL) == 218103808LL)
                return true;
        if((curcheckw & 264208LL) == 264208LL)
                return true;
        if((curcheckw & 131586LL) == 131586LL)
                return true;
        if((curcheckw & 8590066176LL) == 8590066176LL)
                return true;
        if((curcheckw & 2207613321216LL) == 2207613321216LL)
                return true;
        if((curcheckw & 2148016128LL) == 2148016128LL)
                return true;
        if((curcheckw & 139586961408LL) == 139586961408LL)
                return true;
        return false;
        case 2:
        if((curcheckw & 3758096384LL) == 3758096384LL)
                return true;
        if((curcheckw & 11811160064LL) == 11811160064LL)
                return true;
        if((curcheckw & 27917287424LL) == 27917287424LL)
                return true;
        if((curcheckw & 33818624LL) == 33818624LL)
                return true;
        if((curcheckw & 16843008LL) == 16843008LL)
                return true;
        if((curcheckw & 1099528470528LL) == 1099528470528LL)
                return true;
        if((curcheckw & 274946064384LL) == 274946064384LL)
                return true;
        return false;
        case 1:
        if((curcheckw & 481036337152LL) == 481036337152LL)
                return true;
        if((curcheckw & 1511828488192LL) == 1511828488192LL)
                return true;
        if((curcheckw & 3573412790272LL) == 3573412790272LL)
                return true;
        if((curcheckw & 4328783872LL) == 4328783872LL)
                return true;
        if((curcheckw & 2155905024LL) == 2155905024LL)
                return true;
        return false;
    }
}

bool cw6(long long curcheckw, int left){
    switch(left){
        case 6:
        if((curcheckw & 28LL) == 28LL)
                return true;
        if((curcheckw & 88LL) == 88LL)
                return true;
        if((curcheckw & 8521728LL) == 8521728LL)
                return true;
        return false;
        case 5:
        if((curcheckw & 3584LL) == 3584LL)
                return true;
        if((curcheckw & 11264LL) == 11264LL)
                return true;
        if((curcheckw & 17039424LL) == 17039424LL)
                return true;
        if((curcheckw & 1090781184LL) == 1090781184LL)
                return true;
        return false;
        case 4:
        if((curcheckw & 458752LL) == 458752LL)
                return true;
        if((curcheckw & 1441792LL) == 1441792LL)
                return true;
        if((curcheckw & 134219784LL) == 134219784LL)
                return true;
        if((curcheckw & 2181046272LL) == 2181046272LL)
                return true;
        if((curcheckw & 139619991552LL) == 139619991552LL)
                return true;
        return false;
        case 3:
        if((curcheckw & 58720256LL) == 58720256LL)
                return true;
        if((curcheckw & 184549376LL) == 184549376LL)
                return true;
        if((curcheckw & 528416LL) == 528416LL)
                return true;
        if((curcheckw & 263172LL) == 263172LL)
                return true;
        if((curcheckw & 17180132352LL) == 17180132352LL)
                return true;
        if((curcheckw & 279173922816LL) == 279173922816LL)
                return true;
        return false;
        case 2:
        if((curcheckw & 7516192768LL) == 7516192768LL)
                return true;
        if((curcheckw & 23622320128LL) == 23622320128LL)
                return true;
        if((curcheckw & 67637248LL) == 67637248LL)
                return true;
        if((curcheckw & 33686016LL) == 33686016LL)
                return true;
        if((curcheckw & 2199056941056LL) == 2199056941056LL)
                return true;
        return false;
        case 1:
        if((curcheckw & 962072674304LL) == 962072674304LL)
                return true;
        if((curcheckw & 3023656976384LL) == 3023656976384LL)
                return true;
        if((curcheckw & 8657567744LL) == 8657567744LL)
                return true;
        if((curcheckw & 4311810048LL) == 4311810048LL)
                return true;
        return false;
    }
}

bool cw7(long long curcheckw, int left){
    switch(left){
        case 6:
        if((curcheckw & 56LL) == 56LL)
                return true;
        if((curcheckw & 17043456LL) == 17043456LL)
                return true;
        return false;
        case 5:
        if((curcheckw & 7168LL) == 7168LL)
                return true;
        if((curcheckw & 2181562368LL) == 2181562368LL)
                return true;
        return false;
        case 4:
        if((curcheckw & 917504LL) == 917504LL)
                return true;
        if((curcheckw & 279239983104LL) == 279239983104LL)
                return true;
        return false;
        case 3:
        if((curcheckw & 117440512LL) == 117440512LL)
                return true;
        if((curcheckw & 1056832LL) == 1056832LL)
                return true;
        if((curcheckw & 526344LL) == 526344LL)
                return true;
        return false;
        case 2:
        if((curcheckw & 15032385536LL) == 15032385536LL)
                return true;
        if((curcheckw & 135274496LL) == 135274496LL)
                return true;
        if((curcheckw & 67372032LL) == 67372032LL)
                return true;
        return false;
        case 1:
        if((curcheckw & 1924145348608LL) == 1924145348608LL)
                return true;
        if((curcheckw & 17315135488LL) == 17315135488LL)
                return true;
        if((curcheckw & 8623620096LL) == 8623620096LL)
                return true;
        return false;
    }
}

vector<field> pl;
vector<unsigned short> pr;

unordered_map<field, int, field> cache;

long long prob[7] = {0};

long long modificate(long long num, int last, int left){
    num |= (1LL << (42 - (left) * 7 + last));
    return num;
}

void decide(field mainpos, int startit, int leftinit[]){
	for(int i = 0; i < 7; i++)
		prob[i] = (static_cast<long long>(1) << 62);
	for (int i = 0; i < 1000000; i++)
	{
		field curpos = mainpos;
		int firindex, left[7];
		for(int u = 0; u < 7; u++)
			left[u] = leftinit[u];
		for (int mainit = startit; mainit < 21; mainit++)
		{
			int possiblemoves[7], last = 0;
			for(int j = 0; j < 7; j++)
				if(left[j] > 0){
					possiblemoves[last] = j;
					last++;
				}
			last = possiblemoves[rand() % last];
			if(mainit == startit)
				firindex = last;
			if (cw(curpos.fir, last, left[last]))
			{
				prob[firindex]++;
				break;
			}
            curpos.fir |= (1LL << (42 - (left[last]) * 7 + last));
			left[last]--;
			last = 0;
			for(int j = 0; j < 7; j++)
				if(left[j] > 0){
					possiblemoves[last] = j;
					last++;
				}
			last = possiblemoves[rand() % last];
			if (cw(curpos.sec, last, left[last]))
			{
				prob[firindex]--;
				break;
			}
            curpos.sec |= (1LL << (42 - (left[last]) * 7 + last));
			left[last]--;
		}
	}
	for(int i = 6; i > -1; i--)
		cout << prob[i] - (static_cast<long long>(1) << 62) << " ";
	cout << endl;
}

void decide2(field mainpos, int startit, int leftinit[]){
	for(int i = 0; i < 7; i++)
		prob[i] = (static_cast<long long>(1) << 62);
	for (int i = 0; i < 1000000; i++)
	{
		field curpos = mainpos;
		int firindex, left[7];
		for(int u = 0; u < 7; u++)
			left[u] = leftinit[u];
        int possiblemoves[7], last = 0;
        for(int j = 0; j < 7; j++)
            if(left[j] > 0){
                possiblemoves[last] = j;
                last++;
            }
        last = possiblemoves[rand() % last];
        firindex = last;
        if (cw(curpos.sec, last, left[last]))
            prob[last]++;
        else{
            curpos.sec |= (1LL << (42 - (left[last]) * 7 + last));
            left[last]--;
            for (int mainit = startit; mainit < 21; mainit++)
            {
                last = 0;
                for(int j = 0; j < 7; j++)
                    if(left[j] > 0){
                        possiblemoves[last] = j;
                        last++;
                    }
                last = possiblemoves[rand() % last];
                if (cw(curpos.fir, last, left[last]))
                {
                    prob[firindex]--;
                    break;
                }
                curpos.fir |= (1LL << (42 - (left[last]) * 7 + last));
                left[last]--;
                last = 0;
                for(int j = 0; j < 7; j++)
                    if(left[j] > 0){
                        possiblemoves[last] = j;
                        last++;
                    }
                last = possiblemoves[rand() % last];
                if (cw(curpos.sec, last, left[last]))
                {
                    prob[firindex]++;
                    break;
                }
                curpos.sec |= (1LL << (42 - (left[last]) * 7 + last));
                left[last]--;
            }
        }
	}
	for(int i = 6; i > -1; i--)
		cout << prob[i] - (static_cast<long long>(1) << 62) << " ";
	cout << endl;
}

field modificate1(field curpos, int last1, int left){
	curpos.fir |= (1LL << (42 - (left) * 7 + last1));
    return curpos;
}

field modificate2(field curpos, int last2, int left){
	curpos.sec |= (1LL << (42 - (left) * 7 + last2));
    return curpos;
}

const int maxdepth = 99;

unordered_map<field, int, field> cacheval;
vector<int> reseval;

// mutex mtx;

// void getne(int newelement, long long fir, long long sec){
//     lock_guard<mutex> lock(mtx);
//     cacheval[{fir, sec}] = reseval.size();
//     reseval.push_back(newelement);
// }

int minimax(int depth, bool player, int beta, int alpha, long long fir, long long sec, int left1, int left2, int left3, int left4, int left5, int left6, int left7){
    if(depth == 0)
        return 0;
    auto it = cacheval.find({fir, sec});
    if(it != cacheval.end()){
        cout << "found" << endl;
        return reseval[it->second];
    }
	int res;
    if(player){
        if(left1 > 0)
			if(cw1(fir, left1) == true)
				return depth;
        if(left2 > 0)
			if(cw2(fir, left2) == true)
				return depth;
		if(left3 > 0)
			if(cw3(fir, left3) == true)
				return depth;
		if(left4 > 0)
			if(cw4(fir, left4) == true)
				return depth;
		if(left5 > 0)
			if(cw5(fir, left5) == true)
				return depth;
		if(left6 > 0)
			if(cw6(fir, left6) == true)
				return depth;
		if(left7 > 0)
			if(cw7(fir, left7) == true)
				return depth;
		res = -100;
		if(left1 > 0){
			int reschild = minimax(depth - 1, false, beta, alpha, fir | (1LL << (42 - (left1) * 7)), sec, left1 - 1, left2, left3, left4, left5, left6, left7);
            res = max(res, reschild);
            alpha = max(alpha, reschild);
            if(beta <= alpha)
                return res;
		}
        if(left2 > 0){
			int reschild = minimax(depth - 1, false, beta, alpha, fir | (1LL << (43 - (left2) * 7)), sec, left1, left2 - 1, left3, left4, left5, left6, left7);
            res = max(res, reschild);
            alpha = max(alpha, reschild);
            if(beta <= alpha)
                return res;
		}
		if(left3 > 0){
			int reschild = minimax(depth - 1, false, beta, alpha, fir | (1LL << (44 - (left3) * 7)), sec, left1, left2, left3 - 1, left4, left5, left6, left7);
            res = max(res, reschild);
            alpha = max(alpha, reschild);
            if(beta <= alpha)
                return res;
		}
		if(left4 > 0){
			int reschild = minimax(depth - 1, false, beta, alpha, fir | (1LL << (45 - (left4) * 7)), sec, left1, left2, left3, left4 - 1, left5, left6, left7);
            res = max(res, reschild);
            alpha = max(alpha, reschild);
            if(beta <= alpha)
                return res;
		}
		if(left5 > 0){
			int reschild = minimax(depth - 1, false, beta, alpha, fir | (1LL << (46 - (left5) * 7)), sec, left1, left2, left3, left4, left5 - 1, left6, left7);
            res = max(res, reschild);
            alpha = max(alpha, reschild);
            if(beta <= alpha)
                return res;
		}
		if(left6 > 0){
			int reschild = minimax(depth - 1, false, beta, alpha, fir | (1LL << (47 - (left6) * 7)), sec, left1, left2, left3, left4, left5, left6 - 1, left7);
            res = max(res, reschild);
            alpha = max(alpha, reschild);
            if(beta <= alpha)
                return res;
		}
		if(left7 > 0){
			int reschild = minimax(depth - 1, false, beta, alpha, fir | (1LL << (48 - (left7) * 7)), sec, left1, left2, left3, left4, left5, left6, left7 - 1);
            res = max(res, reschild);
            alpha = max(alpha, reschild);
            if(beta <= alpha)
                return res;
		}
        // getne(res, fir, sec);
		return res;
    }
	else
	{
        if(left1 > 0)
			if(cw1(sec, left1) == true)
				return -depth;
        if(left2 > 0)
			if(cw2(sec, left2) == true)
				return -depth;
		if(left3 > 0)
			if(cw3(sec, left3) == true)
				return -depth;
		if(left4 > 0)
			if(cw4(sec, left4) == true)
				return -depth;
		if(left5 > 0)
			if(cw5(sec, left5) == true)
				return -depth;
		if(left6 > 0)
			if(cw6(sec, left6) == true)
				return -depth;
		if(left7 > 0)
			if(cw7(sec, left7) == true)
				return -depth;
        res = 100;
		if(left1 > 0){
			int reschild = minimax(depth - 1, true, beta, alpha, fir, sec | (1LL << (42 - (left1) * 7)), left1 - 1, left2, left3, left4, left5, left6, left7);
            res = min(res, reschild);
            beta = min(beta, reschild);
            if(beta <= alpha)
                return res;
		}
        if(left2 > 0){
			int reschild = minimax(depth - 1, true, beta, alpha, fir, sec | (1LL << (43 - (left2) * 7)), left1, left2 - 1, left3, left4, left5, left6, left7);
            res = min(res, reschild);
            beta = min(beta, reschild);
            if(beta <= alpha)
                return res;
		}
		if(left3 > 0){
			int reschild = minimax(depth - 1, true, beta, alpha, fir, sec | (1LL << (44 - (left3) * 7)), left1, left2, left3 - 1, left4, left5, left6, left7);
            res = min(res, reschild);
            beta = min(beta, reschild);
            if(beta <= alpha)
                return res;
		}
		if(left4 > 0){
			int reschild = minimax(depth - 1, true, beta, alpha, fir, sec | (1LL << (45 - (left4) * 7)), left1, left2, left3, left4 - 1, left5, left6, left7);
            res = min(res, reschild);
            beta = min(beta, reschild);
            if(beta <= alpha)
                return res;
		}
		if(left5 > 0){
			int reschild = minimax(depth - 1, true, beta, alpha, fir, sec | (1LL << (46 - (left5) * 7)), left1, left2, left3, left4, left5 - 1, left6, left7);
            res = min(res, reschild);
            beta = min(beta, reschild);
            if(beta <= alpha)
                return res;
		}
		if(left6 > 0){
			int reschild = minimax(depth - 1, true, beta, alpha, fir, sec | (1LL << (47 - (left6) * 7)), left1, left2, left3, left4, left5, left6 - 1, left7);
            res = min(res, reschild);
            beta = min(beta, reschild);
            if(beta <= alpha)
                return res;
		}
		if(left7 > 0){
			int reschild = minimax(depth - 1, true, beta, alpha, fir, sec | (1LL << (48 - (left7) * 7)), left1, left2, left3, left4, left5, left6, left7 - 1);
            res = min(res, reschild);
            beta = min(beta, reschild);
            if(beta <= alpha)
                return res;
		}
        // getne(res, fir, sec);
		return res;
    }
}

vector<int> minimaxd(int depth, bool player, int beta, int alpha, long long cfir, long long csec, int left[]){
    // debug("\033[31m", "A", "Purging cache...");
    // reseval.clear();
    // cacheval.clear();
    int counter = 0;
	for(int i = 0; i < 7; i++)
		if(left[i] > 0)
			counter++;
	if(player){
		vector<int> results = {0,0,0,0,0,0,0};
		for(int i = 0; i < 7; i++)
			if(left[i] > 0)
				if(cw(cfir, i, left[i]) == true){
					results[i] = depth;
					return results;
				}
		// debug("\033[31m", "A", "Starting", counter, "threads");
		// vector<thread> threads(counter);
		// int counter2 = 0;
		// for(int i = 0; i < 7; i++)
		// 	if(left[i] > 0){
		// 		long long temp = modificate(cfir, i, left[i]);
		// 		left[i]--;
		// 		int left1 = left[0], left2 = left[1], left3 = left[2], left4 = left[3], left5 = left[4], left6 = left[5], left7 = left[6];
		// 		threads[counter2] = thread([&results, i, depth, beta, alpha, left1, left2, left3, left4, left5, left6, left7, csec, temp]() {
		// 			results[i] = minimax(depth - 1, false, beta, alpha, temp, csec, left1, left2, left3, left4, left5, left6, left7);
		// 		});
		// 		counter2++;
		// 		left[i]++;
		// 	}
		// for (int i = 0; i < counter; i++)
		// 	threads[i].join();
		// return results;
		for(int i = 0; i < 7; i++)
			if(left[i] > 0){
				left[i]--;
				results[i] = minimax(depth - 1, false, beta, alpha, modificate(cfir, i, left[i] + 1), csec, left[0], left[1], left[2], left[3], left[4], left[5], left[6]);
				left[i]++;
			}
		return results;
	}else{
		vector<int> results = {0,0,0,0,0,0,0};
		for(int i = 0; i < 7; i++)
			if(left[i] > 0)
				if(cw(csec, i, left[i]) == true){
					results[i] = -depth;
					return results;
				}
        debug("\033[31m", "A", "Starting", counter, "threads");
		vector<thread> threads(counter);
		int counter2 = 0;
		for(int i = 0; i < 7; i++)
			if(left[i] > 0){
                long long temp = modificate(csec, i, left[i]);
				left[i]--;
				int left1 = left[0], left2 = left[1], left3 = left[2], left4 = left[3], left5 = left[4], left6 = left[5], left7 = left[6];
				threads[counter2] = thread([&results, i, depth, beta, alpha, left1, left2, left3, left4, left5, left6, left7, cfir, temp]() {
					results[i] = minimax(depth - 1, true, beta, alpha, cfir, temp, left1, left2, left3, left4, left5, left6, left7);
				});
				counter2++;
				left[i]++;
			}
		for (int i = 0; i < counter; ++i)
			threads[i].join();
		return results;
        // for(int i = 0; i < 7; i++)
		// 	if(left[i] > 0){
		// 		left[i]--;
		// 		results[i] = minimax(depth - 1, true, beta, alpha, cfir, modificate(csec, i, left[i] + 1), left[0], left[1], left[2], left[3], left[4], left[5], left[6]);
		// 		left[i]++;
		// 	}
		// return results;
	}
}

int main(){
	srand(time(NULL));
    ifstream loadai("loadlayer.txt");
	if(loadai){
		long long size1;
		loadai >> size1;
		for(long long i = 0; i < size1; i++){
            field temp;
			loadai >> temp.fir >> temp.sec;
			cacheval[temp] = i;
            int tint;
            loadai >> tint;
            reseval.push_back(tint);
		}
	}
	loadai.close();
	// ifstream loadai("AI.bin", ios::binary);
	// if(loadai){
	// 	long long size1, prg1;
	// 	loadai.read(reinterpret_cast<char*>(&size1), sizeof(long long));
	// 	if(size1 > 0)
	// 		cout << "size1: " << size1 << endl;
	// 	for(long long i = 0; i < size1; i++){
	// 		long long temp1, temp2;
	// 		loadai.read(reinterpret_cast<char*>(&temp1), sizeof(long long));
	// 		loadai.read(reinterpret_cast<char*>(&temp2), sizeof(long long));
	// 		field temp;
	// 		temp.fir = temp1;
	// 		temp.sec = temp2;
	// 		pl.push_back(temp);
	// 	}
	// 	for(long long i = 0; i < size1; i++){
	// 		unsigned short temp;
	// 		loadai.read(reinterpret_cast<char*>(&temp), sizeof(unsigned short));
	// 		pr.push_back(temp);
	// 	}
	// 	if(size1 > 0)
	// 		cout << " done" << endl;
	// 	for (long long i = 0; i < pl.size(); ++i)
	// 		cache[pl[i]] = i;
	// 	cout << " done" << endl;
	// }
	// loadai.close();
	for (;;)
	{
		field curpos;
		curpos.fir = 0;
		curpos.sec = 0;
		long long last;
        cout << "Start first? " << endl;
        bool start = rand() % 2;
        cin >> start;
		int left[7] = {6,6,6,6,6,6,6};
        bool changes = 0;
		if (start == 0)
		{
			cout << "bot starts first" << endl;
			for (int itmain = 0;; itmain++) //change back to 0
			{
                debug("\033[32m", "D", curpos.fir);
                debug("\033[32m", "D", curpos.sec);
                debug("\033[32m", "D", itmain);
                debug("\033[32m", "D", left, 7);
                auto it = cache.find(curpos);
                if(it != cache.end()){
                    last = it->second;
                    debug("\033[32m", "D", "index =", last);
                    last = pr[last];
                }
                else{
                    debug("\033[31m", "A", "launch minimax...");
                    int safedepth = 42 - (itmain << 1);
                    debug("\033[32m", "D", "safedepth =", safedepth);
                    if(safedepth > maxdepth)
                        safedepth = maxdepth;
                    if(itmain > 5)
                        safedepth = 42 - (itmain << 1);
                    auto start = high_resolution_clock::now();
                    vector<int> currentminimax = minimaxd(safedepth, true, safedepth, -safedepth, curpos.fir, curpos.sec, left);
                    auto stop = high_resolution_clock::now();
                    auto duration = duration_cast<milliseconds>(stop - start);
                    debug("\033[31m", "A", "Minimax milliseconds:", duration.count());
                    debug("\033[31m", "A", "end minimax...");
                    // ofstream outpos("prepos.txt");
                    // outpos << prerender.size() << endl;
                    // for(int j = 0; j < prerender.size(); j++)
                    //     outpos << prerender[j].fir << " " << prerender[j].sec << " " << left11[j] << " " << left21[j] << " " << left31[j] << " " << left41[j] << " " << left51[j] << " " << left61[j] << " " << left71[j] << endl;
                    // outpos.close();
                    //return 0;
                    decide(curpos, itmain, left);
                    int maxeval = -100;
                    bool isd = 0;
                    for(int i = 6; i > -1; i--){
                        if(currentminimax[i] > maxeval and left[i] > 0)
                            maxeval = currentminimax[i];
                        cout << currentminimax[i] << " ";
                    }
                    cout << endl;
                    long long maxwin = 0;
                    for(int i = 6; i > -1; i--){
                        if(currentminimax[i] == maxeval and left[i] > 0 and prob[i] > maxwin){
                            maxwin = prob[i];
                            last = i;
                        }
                    }
                    if(maxeval > 0)
                        debug("\033[35m", "A", "Guess who's losing in", safedepth - maxeval, "moves");
                    changes = 1;
                    cache[curpos] = pl.size();
                    pl.push_back(curpos);
                    pr.push_back(last);
                }
                debug("\033[32m", "D", "move: ", last + 1);
				curpos = modificate1(curpos, last, left[last]);
				if (cw(curpos.fir, last, left[last]))
				{
					cout << "Looks like pc won" << endl;
					for (int u = 41; u > -1; u--)
					{
						if(((curpos.fir >> u) & 1) == 1)
							cout << "X";
						else if(((curpos.sec >> u) & 1) == 1)
							cout << "O";
						else
							cout << ".";
						if(u % 7 == 0)
							cout << endl;
					}
					break;
				}
				left[last]--;
				for (int u = 41; u > -1; u--)
				{
					if(((curpos.fir >> u) & 1) == 1)
						cout << "X";
					else if(((curpos.sec >> u) & 1) == 1)
						cout << "O";
					else
						cout << ".";
					if(u % 7 == 0)
						cout << endl;
				}
				int p2;
				for (;;)
				{
					cout << "Your move: ";
					cin >> p2;
                    if(p2 == 1234){
                        cin >> p2;
                        pl.erase(pl.begin() + p2);
                        pr.erase(pr.begin() + p2);
                        remove("AI.bin");
                        ofstream dumpai("AI.bin", ios::binary);
                        long long size1 = pl.size();
                        //cout << "dumping size1: " << size1 << endl;
                        dumpai.write(reinterpret_cast<const char*>(&size1), sizeof(long long));
                        for (long long i = 0; i < pl.size(); i++){
                            long long temp1 = pl[i].fir, temp2 = pl[i].sec;
                            dumpai.write(reinterpret_cast<const char*>(&temp1), sizeof(long long));
                            dumpai.write(reinterpret_cast<const char*>(&temp2), sizeof(long long));
                        }
                        for(long long i = 0; i < pl.size(); i++)
                            dumpai.write(reinterpret_cast<const char*>(&pr[i]), sizeof(unsigned short));
                        dumpai.close();
                        return -1;
                    }
                    //p2 = (rand() % 7) + 1;
					if(cin.fail()){
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					}
					else if (p2 > 0 and p2 < 8 and left[p2 - 1] > 0){
						curpos = modificate2(curpos, p2 - 1, left[p2 - 1]);
						break;
					}
				}
				if (cw(curpos.sec, p2 - 1, left[p2 - 1]))
				{
					cout << "Algorithm is trash..." << endl;
					for (int u = 41; u > -1; u--)
					{
						if(((curpos.fir >> u) & 1) == 1)
							cout << "X";
						else if(((curpos.sec >> u) & 1) == 1)
							cout << "O";
						else
							cout << ".";
						if(u % 7 == 0)
							cout << endl;
					}
					break;
				}
				left[p2 - 1]--;
				if (itmain == 20)
				{
					cout << "DRAW" << endl;
					break;
				}
			}
            if(changes == 1){
                remove("AI.bin");
                ofstream dumpai("AI.bin", ios::binary);
                long long size1 = pl.size();
                //cout << "dumping size1: " << size1 << endl;
                dumpai.write(reinterpret_cast<const char*>(&size1), sizeof(long long));
                for (long long i = 0; i < pl.size(); i++){
                    long long temp1 = pl[i].fir, temp2 = pl[i].sec;
                    dumpai.write(reinterpret_cast<const char*>(&temp1), sizeof(long long));
                    dumpai.write(reinterpret_cast<const char*>(&temp2), sizeof(long long));
                }
                for(long long i = 0; i < pl.size(); i++)
                    dumpai.write(reinterpret_cast<const char*>(&pr[i]), sizeof(unsigned short));
                dumpai.close();
            }
		}
		else
        {
            cout << "you start first" << endl;
            for (int itmain = 0;; itmain++)
            {
                for (int u = 41; u > -1; u--)
				{
					if(((curpos.fir >> u) & 1) == 1)
						cout << "X";
					else if(((curpos.sec >> u) & 1) == 1)
						cout << "O";
					else
						cout << ".";
					if(u % 7 == 0)
						cout << endl;
				}
                int p2;
				for (;;)
				{
					cout << "Your move: ";
					cin >> p2;
                    if(p2 == 1234){
                        cin >> p2;
                        pl.erase(pl.begin() + p2);
                        pr.erase(pr.begin() + p2);
                        remove("AI.bin");
                        ofstream dumpai("AI.bin", ios::binary);
                        long long size1 = pl.size();
                        //cout << "dumping size1: " << size1 << endl;
                        dumpai.write(reinterpret_cast<const char*>(&size1), sizeof(long long));
                        for (long long i = 0; i < pl.size(); i++){
                            long long temp1 = pl[i].fir, temp2 = pl[i].sec;
                            dumpai.write(reinterpret_cast<const char*>(&temp1), sizeof(long long));
                            dumpai.write(reinterpret_cast<const char*>(&temp2), sizeof(long long));
                        }
                        for(long long i = 0; i < pl.size(); i++)
                            dumpai.write(reinterpret_cast<const char*>(&pr[i]), sizeof(unsigned short));
                        dumpai.close();
                        return -1;
                    }
                    //p2 = (rand() % 7) + 1;
					if(cin.fail()){
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					}
					else if (p2 > 0 and p2 < 8 and left[p2 - 1] > 0){
						curpos = modificate1(curpos, p2 - 1, left[p2 - 1]);
						break;
					}
				}
				if (cw(curpos.fir, p2 - 1, left[p2 - 1]))
				{
					cout << "Algorithm is trash..." << endl;
					for (int u = 41; u > -1; u--)
					{
						if(((curpos.fir >> u) & 1) == 1)
							cout << "X";
						else if(((curpos.sec >> u) & 1) == 1)
							cout << "O";
						else
							cout << ".";
						if(u % 7 == 0)
							cout << endl;
					}
					break;
				}
				left[p2 - 1]--;
                debug("\033[32m", "D", curpos.fir);
                debug("\033[32m", "D", curpos.sec);
                debug("\033[32m", "D", itmain);
                debug("\033[32m", "D", left, 7);
                auto it = cache.find(curpos);
                if(it != cache.end()){
                    last = it->second;
                    debug("\033[32m", "D", "index =", last);
                    last = pr[last];
                }
                else{
                    debug("\033[31m", "A", "launch minimax...");
                    int safedepth = 41 - (itmain << 1);
                    if(safedepth > maxdepth)
                        safedepth = maxdepth;
                    if(itmain > 5)
                        safedepth = 41 - (itmain << 1);
                    auto start = high_resolution_clock::now();
                    vector<int> currentminimax = minimaxd(safedepth, false, safedepth, -safedepth, curpos.fir, curpos.sec, left);
                    auto stop = high_resolution_clock::now();
                    auto duration = duration_cast<milliseconds>(stop - start);
                    debug("\033[31m", "A", "Minimax milliseconds:", duration.count());
                    debug("\033[31m", "A", "end minimax...");
                    decide2(curpos, itmain + 1, left);
                    int mineval = 100;
                    bool isd = 0;
                    for(int i = 6; i > -1; i--){
                        if(currentminimax[i] < mineval and left[i] > 0)
                            mineval = currentminimax[i];
                        cout << currentminimax[i] << " ";
                    }
                    cout << endl;
                    long long maxwin = 0;
                    for(int i = 6; i > -1; i--){
                        if(currentminimax[i] == mineval and left[i] > 0 and prob[i] > maxwin){
                            maxwin = prob[i];
                            last = i;
                        }
                    }
                    if(mineval < 0)
                        debug("\033[35m", "A", "Guess who's losing in", safedepth + mineval, "moves");
                    changes = 1;
                    cache[curpos] = pl.size();
                    pl.push_back(curpos);
                    pr.push_back(last);
                }
                debug("\033[32m", "D", "move: ", last + 1);
                curpos = modificate2(curpos, last, left[last]);
				if (cw(curpos.sec, last, left[last]))
				{
					cout << "Looks like pc won" << endl;
					for (int u = 41; u > -1; u--)
					{
						if(((curpos.fir >> u) & 1) == 1)
							cout << "X";
						else if(((curpos.sec >> u) & 1) == 1)
							cout << "O";
						else
							cout << ".";
						if(u % 7 == 0)
							cout << endl;
					}
					//system("pause");
					break;
				}
				left[last]--;
				if (itmain == 20)
				{
					cout << "DRAW" << endl;
					break;
				}
            }
            if(changes == 1){
                remove("AI.bin");
                ofstream dumpai("AI.bin", ios::binary);
                long long size1 = pl.size();
                //cout << "dumping size1: " << size1 << endl;
                dumpai.write(reinterpret_cast<const char*>(&size1), sizeof(long long));
                for (long long i = 0; i < pl.size(); i++){
                    long long temp1 = pl[i].fir, temp2 = pl[i].sec;
                    dumpai.write(reinterpret_cast<const char*>(&temp1), sizeof(long long));
                    dumpai.write(reinterpret_cast<const char*>(&temp2), sizeof(long long));
                }
                for(long long i = 0; i < pl.size(); i++)
                    dumpai.write(reinterpret_cast<const char*>(&pr[i]), sizeof(unsigned short));
                dumpai.close();
            }
        }
	}
}