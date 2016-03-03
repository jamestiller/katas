//
//  Amaglams.cpp
//  01132016
//
//  Created by James Tiller on 3/3/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//
//  Version does not cache dictionary map

#include "Amaglams.hpp"

std::string FindAmaglams(const std::vector<std::string>& dictionary, const std::string& str)
{
    std::unordered_map<std::string, std::vector<std::string>> hash_table;
    std::string result = "";
    
    for (const std::string& word : dictionary)
    {
        std::string sorted(word);
        sort(sorted.begin(), sorted.end());
        hash_table[sorted].emplace_back(word);
    }
    
    std::string sorted(str);
    sort(sorted.begin(), sorted.end());
    
    for (const std::string& word : hash_table[sorted])
    {
        result += word + ";";
    }
    
    return result;
}