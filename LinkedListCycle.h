//
// Created by Zhao,Hongyan on 2020/3/11.
//

#ifndef LEETCODE_LINKEDLISTCYCLE_H
#define LEETCODE_LINKEDLISTCYCLE_H

#endif //LEETCODE_LINKEDLISTCYCLE_H

#include "ListNode.h"
class Soultion {
public:
    bool huan(ListNode *root){
        if(root == NULL || root->next == NULL) {
            return false;
        }
        ListNode *fast = NULL;
        if(root->next) {
            if(root->next->next)
            fast = root->next->next;
        }
        if(fast == NULL) {
            return false;
        }
        ListNode *slow = root;
        while(fast) {
            if(fast->next == slow) {
                return true;
            }
            slow = slow->next;
            if(fast->next ) {
                if(fast->next->next){
                    fast = fast->next->next;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return false;
    }
};