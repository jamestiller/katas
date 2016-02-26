//
//  Interconvert.cpp
//  01032016
//
//  Created by James Tiller on 2/26/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#include "Interconvert.hpp"
#include <Math.h>
#include <algorithm>

int StringToInt(const std::string& str) {
    const bool isNegative = str[0] == '-';
    size_t size = str.size();
    int result = 0;
    for (int i = isNegative; i < size; i++)
    {
        int digit = (int)(str[i] - '0');
        result = result * 10 + digit;
    }
    
    return result;
}

std::string IntToString(int num){
    bool isNegative = false;
    if (num < 0)
    {
        num = -num;
        isNegative = true;
    }
    
    std::string result;
    while(num){
        result.push_back('0' + num % 10);
        num /= 10;
    }
    
    if(result.empty())
    {
        return "0";
    }
    
    if(isNegative)
    {
        result.push_back('-');
    }
    
    reverse(result.begin(), result.end());
    return result;
}