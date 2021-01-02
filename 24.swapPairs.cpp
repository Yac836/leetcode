//
// Created by zhaohongyan on 2020/10/17.
//

#include <ListNode.h>

#include <bits/stdc++.h>

using namespace std;
//
// head  ->1    ->2   ->3 -> 4
//  tmp first second
ListNode* swapPairs(ListNode* head){
    auto *dummyHead = new ListNode(0);
    dummyHead->next = head;
    ListNode *tmp = dummyHead;
    while(tmp->next && tmp->next->next){
        ListNode * first = tmp->next;
        ListNode * second = tmp->next->next;

        tmp->next = second;
        first->next = second->next;
        second -> next = first;
        tmp = first;
    }
    return dummyHead->next;
}
