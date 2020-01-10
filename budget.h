#ifndef _BUDGET_H_
#define _BUDGET_H_

#include <iostream>
#include <cstdlib>
#include <cmath>

typedef struct Budget Budget;

struct Budget{
//private:
    double a; //собственная часть
    double b; //заемная часть
public:
    Budget();
    Budget(double ch1, double ch2);
    friend std::istream& operator>> (std::istream& is, Budget& bud);
    friend std::ostream& operator<< (std::ostream& os, Budget& bud);
    friend bool operator== (const Budget& lhs, const Budget& rhs);
    friend bool operator!= (const Budget& lhs, const Budget& rhs);
    friend bool operator> (const Budget& lhs, const Budget& rhs);
    friend bool operator< (const Budget& lhs, const Budget& rhs);
    friend Budget& operator+= (Budget& lhs, const Budget& rhs);
    friend Budget& operator-= (Budget& lhs, const Budget& rhs);
    friend Budget operator+ (const Budget& lhs, const Budget& rhs);
    friend Budget operator- (const Budget& lhs, const Budget& rhs);
    friend Budget operator* (const Budget& lhs, const Budget& rhs);
    friend Budget operator/ (const Budget& lhs, const Budget& rhs);
    Budget& operator= (const Budget& bud){
        a = bud.a;
        b = bud.b;
        return *this;
    }
};


#endif
