//
//  TowersOfHanoi.cpp
//  01072016
//
//  Created by James Tiller on 2/29/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#include "TowersOfHanoi.hpp"

void MoveTowerHanoi (int n)
{
    std::array<std::stack<int>, 3> pegs;
    for (int i = n; i > 0; --i)
    {
        pegs[0].push(i);
    }
    
    Transfer(n, pegs, 0, 1, 2);
}

void Transfer(int remaining, std::array<std::stack<int>, 3>& pegs, int from, int to, int inbetween)
{
    if(remaining > 0)
    {
        Transfer(remaining-1, pegs, from, inbetween, to);
        pegs[to].push(pegs[from].top());
        pegs[from].pop();
        std::cout << "Move " << pegs[to].top() << " from peg " << from << " to peg " << to << std::endl;
        Transfer(remaining-1, pegs, inbetween, to, from);
    }
}