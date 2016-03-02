//
//  main.cpp
//  01082016
//
//  Created by James Tiller on 2/29/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#include <iostream>
#include "FootballScores.hpp"

int main(int argc, const char * argv[]) {
    int combinations = FindScoringCombinations(14);
    std::cout << combinations;
    return 0;
}
