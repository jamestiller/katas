//
//  BalancedBinaryTree.hpp
//  01062016
//
//  Created by James Tiller on 2/28/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#ifndef BalancedBinaryTree_hpp
#define BalancedBinaryTree_hpp

#include <stdio.h>
#include <memory>

template<typename T>
struct BSTNode
{
    T data;
    std::unique_ptr<BSTNode<T> > left, right;
};

bool IsBST (const std::unique_ptr<BSTNode<int>>& root);
bool IsBSTHelper (const std::unique_ptr<BSTNode<int>>& root, int lower, int upper);


#endif /* BalancedBinaryTree_hpp */
