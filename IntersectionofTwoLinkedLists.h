//
// Created by Zhao,Hongyan on 2020/3/13.
//

#ifndef LEETCODE_INTERSECTIONOFTWOLINKEDLISTS_H
#define LEETCODE_INTERSECTIONOFTWOLINKEDLISTS_H

#endif //LEETCODE_INTERSECTIONOFTWOLINKEDLISTS_H


#include "ListNode.h"

using  namespace std;

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
                if(headA==NULL || headB == NULL) {
                    return NULL;
                }

                int len1 = len(headA);
                int len2 = len(headB);
                int diff = 0;
                bool flag = false;
                if(len1 > len2) {
                    diff = len1 - len2;
                }
                else{
                    diff = len2 - len1;
                    flag = true;
                }

                if(diff != 0){
                    if(flag) {
                        while(diff){
                            headB = headB->next;
                            diff --;
                        }
                    }
                    else{
                        while(diff){
                            headA = headA->next;
                            diff --;
                        }
                    }
                }
                while(headA && headB &&  headA != headB ){

                    headA = headA->next;
                    headB = headB->next;
                }

                return NULL;

        }

        int len(ListNode *head){
            int len = 0;
            while (head){
                head = head->next;
                len ++ ;
            }
            return len;
        }

    ListNode *getIntersectionNode1(ListNode *headA, ListNode *headB)
    {
        ListNode *p1 = headA;
        ListNode *p2 = headB;

        if (p1 == NULL || p2 == NULL) return NULL;

        while (p1 != NULL && p2 != NULL && p1 != p2) {
            p1 = p1->next;
            p2 = p2->next;

            //
            // Any time they collide or reach end together without colliding
            // then return any one of the pointers.
            //
            if (p1 == p2) return p1;

            //
            // If one of them reaches the end earlier then reuse it
            // by moving it to the beginning of other list.
            // Once both of them go through reassigning,
            // they will be equidistant from the collision point.
            //
            if (p1 == NULL) p1 = headB;
            if (p2 == NULL) p2 = headA;
        }

        return p1;
    }
};