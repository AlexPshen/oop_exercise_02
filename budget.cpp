#include "budget.h"

#include <iostream>
#include <cstdlib>
#include <cmath>

Budget::Budget(){
    a = 0;
    b = 0;
}

Budget::Budget(double ch1, double ch2){
    a = round(ch1 * 100) / 100;
    b = round(ch2 * 100) / 100;
}

std::istream& operator>> (std::istream& is, Budget& bud){ 
    is >> bud.a >> bud.b;
    bud.a = round(bud.a * 100) / 100;
    bud.b = round(bud.b * 100) / 100;
    return is;
}

std::ostream& operator<< (std::ostream& os, Budget& bud){
    os << bud.a << " " << bud.b << '\n' << '\n';
    return os;
}

bool operator== (const Budget& lhs, const Budget& rhs){
    return (lhs.a == rhs.a) && (lhs.b == rhs.b);
}

bool operator!= (const Budget& lhs, const Budget& rhs){
    return (lhs.a != rhs.a) || (lhs.b != rhs.b);
}

bool operator> (const Budget& lhs, const Budget& rhs){
    return (lhs.a > rhs.a) && (lhs.b > rhs.b);
}

bool operator< (const Budget& lhs, const Budget& rhs){
    return (lhs.a < rhs.a) && (lhs.b < rhs.b);
}

Budget& operator+= (Budget& lhs, const Budget& rhs){
     lhs.a += rhs.a;
     lhs.b += rhs.b;
     return lhs;
} 

Budget& operator-= (Budget& lhs, const Budget& rhs){
     lhs.a = fabs(lhs.a - rhs.a);
     lhs.b = fabs(lhs.b - rhs.b);
     return lhs;
}

Budget operator+ (const Budget& lhs, const Budget& rhs){
    Budget res{};
    res = lhs;
    res += rhs;
    return res;
}

Budget operator- (const Budget& lhs, const Budget& rhs){
    Budget res{};
    res = lhs;
    res -= rhs;
    return res;
}

Budget operator* (const Budget& lhs, const Budget& rhs){
    Budget res{};
    res.a = round(lhs.a * rhs.a * 100) / 100;
    res.b = round(lhs.b * rhs.b * 100) / 100;
    return res;
}

Budget operator/ (const Budget& lhs, const Budget& rhs){
    Budget res{};
    res.a = round(lhs.a / rhs.a * 100) / 100;
    res.b = round(lhs.b / rhs.b * 100) / 100;
    return res;
}

/*Budget operator"" _bud(std::string str){
    std::istringstream is(str);
    Budget bud;
    is >> bud;
    return bud;   
}*/

