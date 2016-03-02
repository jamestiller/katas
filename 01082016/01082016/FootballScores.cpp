//
//  FootballScores.cpp
//  01082016
//
//  Created by James Tiller on 2/29/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#include "FootballScores.hpp"

int FindScoringCombinations(int score)
{
    std::vector<int> combinations(score + 1, 0);
    int* scores = new int[3] {2,3,7};
    std::vector<int> scoring(scores, scores+3);
    
    combinations[0] = 1;
    for (const int& n : scoring)
    {
        for (int i = n ; i <= score ; i++)
        {
            combinations[i] += combinations[i-n];
        }
    }
    
    return combinations[score];
}