//
//  FirstOccurenceSearch.cpp
//  01122016
//
//  Created by James Tiller on 3/3/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#include "FirstOccurenceSearch.hpp"

int FindFirstOccurence(const std::vector<int>& sortedList, int value)
{
    int left = 0, right = sortedList.size() - 1, result = -1;
    
    while (left <= right) {
        int middle = left + ((right - left) / 2);
        if (sortedList[middle] > value)
        {
            right = middle - 1;
        }
        else if (sortedList[middle] < value)
        {
            left = middle + 1;
        }
        else if (sortedList[middle] == value)
        {
            result = sortedList[middle];
            right = middle - 1;
        }
    }
    
    return result;
}