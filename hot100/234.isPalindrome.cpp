#include <bits/stdc++.h>
using namespace std;
class Solution {
    ListNode *frontPointer;

public:
    bool recursivelyCheck(ListNode *currentNode) {
        if (currentNode != nullptr) {
            if (!recursivelyCheck(currentNode->next)) {
                return false;
            }
            if (currentNode->val != frontPointer->val) {
                return false;
            }
            frontPointer = frontPointer->next;
        }
        return true;
    }

    bool isPalindrome(ListNode *head) {
        frontPointer = head;
        return recursivelyCheck(head);
    }
};
