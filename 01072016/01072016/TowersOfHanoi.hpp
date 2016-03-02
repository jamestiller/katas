//
//  TowersOfHanoi.hpp
//  01072016
//
//  Created by James Tiller on 2/29/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#ifndef TowersOfHanoi_hpp
#define TowersOfHanoi_hpp

#include <stdio.h>
#include <array>
#include <stack>
#include <iostream>

void MoveTowerHanoi (int n);
void Transfer(int remaining, std::array<std::stack<int>, 3>& pegs, int from, int to, int inbetween);


#endif /* TowersOfHanoi_hpp */
