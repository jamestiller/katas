//
//  Stack.cpp
//  01052016
//
//  Created by James Tiller on 2/28/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#include "Stack.hpp"

void Stack::Push(int _top)
{
    std::shared_ptr<ListNode> _next = top;
    top = std::make_shared<ListNode>();
    top->data = _top;
    top->next = _next;
    if (!max)
    {
        max = top;
    }
    else if (top->data > max->data)
    {
        std::shared_ptr<ListNode> _nextmax = max;
        max = std::make_shared<ListNode>();
        max->data = _top;
        max->next = _nextmax;
    }
}

void Stack::Pop() {
    if (top)
    {
        if (max && max->data == top->data)
        {
            max = max->next;
        }
        top = top->next;
    }
}