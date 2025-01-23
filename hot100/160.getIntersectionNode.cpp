
#include <bits/stdc++.h>
using namespace std; // namespace name

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) {
            return nullptr;
        }
        ListNode *pA = headA, *pB = headB;
        while (pA != pB) {
            pA = pA == nullptr ? headB : pA->next;
            pB = pB == nullptr ? headA : pB->next;
        }
        return pA;
    }
};

class Solution1 {
public:
    int getLen(ListNode *head) {
        if (head == NULL) {
            return 0;
        }
        ListNode *tmp = head;
        int len = 0;
        while (tmp) {
            len++;
            tmp = tmp->next;
        }
        return len;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1 = getLen(headA);
        int len2 = getLen(headB);
        if (len1 == 0 || len2 == 0) {
            return NULL;
        }
        ListNode *p = headA;
        ListNode *q = headB;

        int pre = 0;
        if (len1 < len2) {
            pre = len2 - len1;
            while (pre) {
                q = q->next;
                pre--;
            }
        } else {
            pre = len1 - len2;
            while (pre) {
                p = p->next;
                pre--;
            }
        }
        while (p && q) {
            if (p == q) {
                return p;
            }
            p = p->next;
            q = q->next;
        }
        return NULL;
    }
};