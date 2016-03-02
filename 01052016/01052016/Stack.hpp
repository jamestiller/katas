//
//  Stack.hpp
//  01052016
//
//  Created by James Tiller on 2/28/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include <memory>

struct ListNode
{
    int data;
    std::shared_ptr<ListNode> next;
};

class Stack
{
public:
    Stack()
    : top(nullptr),
    max(nullptr)
    {}
    inline int Top() { return top->data; };
    inline int Max() { return max->data; }
    
    void Push(int _top);
    void Pop();
    
private:
    std::shared_ptr<ListNode> top;
    std::shared_ptr<ListNode> max;
};

#endif /* Stack_hpp */
