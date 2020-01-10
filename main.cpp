#include <iostream>
#include <cstdlib>
#include <cmath>
#include <exception>
#include <stdexcept>
#include <sstream>

#include "budget.h"

Budget operator""_bud(const char* str, size_t size){
    std::stringstream is(str);
    Budget bud;
    is >> bud;
    return bud;
}



int main(){
    Budget my_bud{};
    std::cin >> my_bud;
    std::cout << my_bud;
    Budget his_bud{};
    std::cin >> his_bud;
    std::cout << his_bud;
    Budget res{};
    std::cout << "Addition" << '\n';
    res = my_bud + his_bud;
    std::cout << res;
    std::cout << "Subtraction" << '\n';
    res = my_bud - his_bud;
    std::cout << res;
    std::cout << "Multiplication" << '\n';
    res = my_bud * his_bud;
    std::cout << res;
    std::cout << "Division" << '\n';
    res = my_bud / his_bud;
    std::cout << res;
    if(my_bud == his_bud){
        std::cout << "Budget1 == Budget2 - YES" << '\n' << '\n';
    }
    else{
        std::cout << "Budget1 == Budget2 - NO" << '\n' << 'n';
    }
    
    if(my_bud != his_bud){
        std::cout << "Budget1 != Budget2 - YES" << '\n' << '\n';
    }
    else{
        std::cout << "Budget1 != Budget2 - NO" << '\n' << '\n';
    }
    Budget dop = "1 5"_bud;
    std::cout << dop;
}


    
