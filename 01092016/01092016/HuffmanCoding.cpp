//
//  HuffmanCoding.cpp
//  01092016
//
//  Created by James Tiller on 2/29/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#include "HuffmanCoding.hpp"

std::pair<boost::dynamic_bitset<>, std::vector<char>> Encode(std::string word)
{
    std::vector<std::pair<int,char>> charCounts;
    
    for (int i = 0; i<word.length(); i++)
    {
        charCounts[word[i] - 'a'].first++;
        charCounts[word[i] - 'a'].second = word[i];
    }
    
    std::sort(charCounts.begin(), charCounts.end(), [](std::pair<int,char> a, std::pair<int,char>b) { return a.first < b.first; });
    
    std::pair<boost::dynamic_bitset<>, std::vector<char>> result;
    boost::dynamic_bitset<> bits(5);
    std::vector<char> keyset;
    for (int i = 0; i < charCounts.size(); i++)
    {
        keyset[i] = charCounts[i].second;
    }
    result.first = bits;
    result.second = keyset;
    return result;
}



std::string Decode(boost::dynamic_bitset<> bits, std::vector<char> key)
{
    return "";
}