//
//  Parity.cpp
//  01012016
//
//  Created by James Tiller on 1/1/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#include "Parity.hpp"

int GetParityBit(unsigned long num)
{
    num ^= num >> 32;
    num ^= num >> 16;
    num ^= num >> 8;
    num ^= num >> 4;
    num &= 0xF;
    
    int parityLookup = (0x6996 >> num) & 0x1;
    
    return parityLookup;
}