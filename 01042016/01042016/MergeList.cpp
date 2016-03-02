//
//  MergeList.cpp
//  01042016
//
//  Created by James Tiller on 2/27/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#include "MergeList.hpp"

std::shared_ptr<ListNode<int> > MergeList(std::shared_ptr<ListNode<int> > _a,
                                          std::shared_ptr<ListNode<int> > _b)
{
    std::shared_ptr<ListNode<int> > result = nullptr, tail = nullptr;
    
    while (_a && _b)
    {
        AppendNodeAndAdvance(&result, &tail, _a->data < _b->data ? &_a : &_b);
    }
    
    while (_a)
    {
        AppendNodeAndAdvance(&result, &tail, &_a);
    }
    
    while (_b)
    {
        AppendNodeAndAdvance(&result, &tail, &_b);
    }
    
    return result;
}

void AppendNodeAndAdvance(std::shared_ptr<ListNode<int> >* head,
                          std::shared_ptr<ListNode<int> >* tail,
                          std::shared_ptr<ListNode<int> >* node)
{
    AppendNode(*node, head, tail);
    *node = (*node)->next;
}

void AppendNode(const std::shared_ptr<ListNode<int> >& node,
                std::shared_ptr<ListNode<int> >* head,
                std::shared_ptr<ListNode<int> >* tail)
{
    *head ? (*tail)->next = node : *head = node;
    *tail = node;
}
