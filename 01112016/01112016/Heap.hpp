//
//  Heap.hpp
//  01112016
//
//  Created by James Tiller on 3/3/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#ifndef Heap_hpp
#define Heap_hpp

#include <stdio.h>
#include <vector>
#include <queue>
#include <iterator>

using namespace std;

struct CurrentAndEndIterator {
    bool operator<(const CurrentAndEndIterator& rhs) const
    {
        return *current < *(rhs.current);
    }
    
    bool operator()(const CurrentAndEndIterator& lhs, const CurrentAndEndIterator& rhs) const
    {
        return lhs < rhs;
    }
    
    vector<int>::iterator current;
    vector<int>::iterator end;
};

vector<int> MergeSortedArrays(const vector<vector<int>>& sort);

#endif /* Heap_hpp */
