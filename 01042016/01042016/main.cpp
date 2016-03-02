//
//  main.cpp
//  01042016
//
//  Created by James Tiller on 2/27/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#include <iostream>
#include "MergeList.hpp"
#include <memory>

int main(int argc, const char * argv[]) {
    std::shared_ptr<ListNode<int> > a,b,c;
    b = std::make_shared<ListNode<int> >();
    b->data = 1;
    c = std::make_shared<ListNode<int> >();
    c->data = 2;
    b->next = std::make_shared<ListNode<int> >();
    b->next->data = 3;
    c->next = std::make_shared<ListNode<int> >();
    c->next->data = 4;
    b->next->next = std::make_shared<ListNode<int> >();
    b->next->next->data = 6;
    c->next->next = std::make_shared<ListNode<int> >();
    c->next->next->data = 5;
    
    a = MergeList(b, c);
    
    std::cout << "Result: ";
    while (a)
    {
        std::cout << a->data << ", ";
        
        a = a->next;
    }
    
    return 0;
}
