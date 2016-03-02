//
//  MergeList.hpp
//  01042016
//
//  Created by James Tiller on 2/27/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#ifndef MergeList_hpp
#define MergeList_hpp

#include <memory>

template <typename T>
struct ListNode {
    T data;
    std::shared_ptr<ListNode<T> > next;
};


std::shared_ptr<ListNode<int> > MergeList(std::shared_ptr<ListNode<int> > _a,
                                          std::shared_ptr<ListNode<int> > _b);
void AppendNodeAndAdvance(std::shared_ptr<ListNode<int> >* head,
                          std::shared_ptr<ListNode<int> >* tail,
                          std::shared_ptr<ListNode<int> >* node);
void AppendNode(const std::shared_ptr<ListNode<int> >& node,
                std::shared_ptr<ListNode<int> >* head,
                std::shared_ptr<ListNode<int> >* tail);

#endif /* MergeList_hpp */
