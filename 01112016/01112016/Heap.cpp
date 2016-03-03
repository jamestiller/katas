//
//  Heap.cpp
//  01112016
//
//  Created by James Tiller on 3/3/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#include "Heap.hpp"

vector<int> MergeSortedArrays(const vector<vector<int>>& sort)
{
    priority_queue<CurrentAndEndIterator, std::vector<CurrentAndEndIterator>> min_heap;
    vector<int> result;
    
    for (vector<int> vectors : sort)
    {
        CurrentAndEndIterator start { .current = vectors.begin(), .end = vectors.end() };
        min_heap.emplace(start);
    }
    
    while (!min_heap.empty())
    {
        int minValue = *(min_heap.top().current);
        result.emplace_back(minValue);
        CurrentAndEndIterator top = min_heap.top();
        min_heap.pop();
        top.current++;
        if (top.current != top.end)
        {
            min_heap.emplace(top);
        }
    }
    
    return result;
}