//
// Created by kosten on 30.10.2021.
//

#include <iostream>
#include "assert.h"

int DaysInYear(int got);

int DaysInYear(int got){
    assert(got >= 0);
    if  (got % 4 == 0 && !(got % 100 == 0 && got % 400 != 0)) return 366;
    else return 365;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
