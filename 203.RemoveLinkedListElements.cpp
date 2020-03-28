//
// Created by Zhao,Hongyan on 2020/3/26.
//

#include "commonheader.h"

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL ){
            return NULL;
        }
        if(head->next == NULL && head->val == val){
            return NULL;
        }
        ListNode p;
        p.next = head;
        ListNode *start = &p;
        ListNode *next = (&p)->next;
        while(next){
            if(next->val == val){
                start->next = next->next;
                next = start->next;
            } else{
                start = next;
                next = next->next;
            }

        }
        return p.next;
    }
};

