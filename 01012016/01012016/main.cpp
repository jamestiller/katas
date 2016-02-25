//
//  main.cpp
//  01012016
//
//  Created by James Tiller on 1/1/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#include <iostream>
#include "Parity.hpp"

int main(int argc, const char * argv[]) {
    unsigned long toBeParityChecked = 1;
    while (toBeParityChecked)
    {
        std::cout << "Enter a number to calculate it's parity, 0 to exit" << std::endl;
        std::cin >> toBeParityChecked;
        int answer = GetParityBit(toBeParityChecked);
        std::cout << toBeParityChecked << " has a parity bit of " << answer << std::endl;
    }
    return 0;
}
