//
// Created by kosten on 30.10.2021.
//

#include <iostream>
#include "assert.h"

int DaysInYear(int got);
int DaysInYearRange(int oneGot, int twoGot);

int DaysInYearRange(int oneGot, int twoGot){
    int s = 0;
    for (int i = oneGot; i < twoGot; ++i) {
        if  (i % 4 == 0 && !(i % 100 == 0 && i % 400 != 0)) s+= 366;
        else s+= 365;
    }
    return s;
}


int DaysInYear(int got){
    assert(got >= 0);
    if  (got % 4 == 0 && !(got % 100 == 0 && got % 400 != 0)) return 366;
    else return 365;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
