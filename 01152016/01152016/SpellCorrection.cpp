//
//  SpellCorrection.cpp
//  01152016
//
//  Created by James Tiller on 3/3/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#include "SpellCorrection.hpp"

int NumberOfEditsRequired(std::string start, std::string target){
    
    if (start.size() < target.size())
    {
        std::swap(start,target);
    }
    
    std::vector<int> result(target.size() + 1);
    std::iota(result.begin(), result.end(), 0);
    
    for (int i = 1 ; i <= start.size(); ++i)
    {
        int previous = result[0];
        result[0] = i;
        for (int j = 1; j <= target.size(); ++j)
        {
            int current = result[j];
            result[j] = start[i - 1] == target[j - 1] ? previous : 1 + std::min(previous, std::min(result[j-1],result[j]));
            previous = current;
        }
    }
    
    return result.back();
}