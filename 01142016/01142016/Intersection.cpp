//
//  Intersection.cpp
//  01142016
//
//  Created by James Tiller on 3/3/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#include "Intersection.hpp"

std::vector<int> FindIntersection(const std::vector<int>& lhs, const std::vector<int>& rhs)
{
    std::vector<int> result;
    std::vector<int>::const_iterator itLeft = lhs.begin();
    std::vector<int>::const_iterator itRight = rhs.begin();
    
    while (itLeft != lhs.end() && itRight != rhs.end())
    {
        if (*itLeft < *itRight)
        {
            itLeft++;
        }
        else if (*itLeft > *itRight)
        {
            itRight++;
        }
        else if (*itLeft == *itRight)
        {
            if (result.back() != *itLeft)
            {
                result.push_back(*itLeft);
            }
        }
    }
    
    return result;
}