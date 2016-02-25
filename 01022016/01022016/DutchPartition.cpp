//
//  DutchPartition.cpp
//  01022016
//
//  Created by James Tiller on 1/2/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//
//  Partitions an array into lower, equal, and higher values. Does not sort beyond that.

#include "DutchPartition.hpp"
#include <algorithm>

int DutchPartition(int* array, int length, int pivot)
{
    int iterations;
    int num = array[pivot];
    int larger = length - 1;
    int smaller = 0;
    int equal = 0;
    std::swap(array[0], array[pivot]); // Swap pivot to start of array
    while (equal < larger)
    {
        if (array[equal] < num)
        {
            std::swap(array[smaller], array[equal]); // Swaps lowest "equal" with new smaller value
            smaller++;
            equal++;
        }
        else if (array[equal] > num)
        {
            std::swap(array[equal], array[larger]); // Swaps higher value with unknown top value
            larger--;
        }
        else
        {
            equal++; // Value is equal, so we just iterate
        }
        iterations++;
    }
    return iterations;
}