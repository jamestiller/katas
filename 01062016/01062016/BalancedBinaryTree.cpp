//
//  BalancedBinaryTree.cpp
//  01062016
//
//  Created by James Tiller on 2/28/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#include "BalancedBinaryTree.hpp"


bool IsBST (const std::unique_ptr<BSTNode<int>>& root)
{
    return IsBSTHelper(root, std::numeric_limits<int>::min(), std::numeric_limits<int>::max());
}

bool IsBSTHelper (const std::unique_ptr<BSTNode<int>>& root, int lower, int upper)
{
    if (!root)
        return true;
    else if (root -> data < lower || root -> data > upper)
        return false;
    else
        return IsBSTHelper(root->left, lower, root->data) && IsBSTHelper(root->right, root->data, upper);
}