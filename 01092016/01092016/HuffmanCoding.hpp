//
//  HuffmanCoding.hpp
//  01092016
//
//  Created by James Tiller on 2/29/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#ifndef HuffmanCoding_hpp
#define HuffmanCoding_hpp

#include <stdio.h>
#include <boost/dynamic_bitset.hpp>

std::pair<boost::dynamic_bitset<>, std::vector<char>> Encode(std::string word);
std::string Decode(boost::dynamic_bitset<> bits, std::vector<char> key);



#endif /* HuffmanCoding_hpp */
