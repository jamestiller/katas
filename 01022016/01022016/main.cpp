//
//  main.cpp
//  01022016
//
//  Created by James Tiller on 1/2/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#include <iostream>
#include "DutchPartition.hpp"

int main(int argc, const char * argv[]) {
    int* testArray = new int[10]{8,5,5,5,1,2,3,7,5,9};
    int pivot = 1;
    std::cout << "Dutch Partition Start!\n";
    int iterations = DutchPartition(testArray, 10, pivot);
    std::cout << "Result: ";
    for(int i = 0; i<10; i++)
    {
        std::cout << testArray[i];
    }
    std::cout << std::endl;
    std::cout << "Complexity: " << iterations << std::endl;
    return 0;
}
