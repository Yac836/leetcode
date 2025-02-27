#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() :
        val(0), next(nullptr) {
    }
    ListNode(int x) :
        val(x), next(nullptr) {
    }
    ListNode(int x, ListNode *next) :
        val(x), next(next) {
    }
};
class Solution1 {
public:
    ListNode *swapPairs(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode *newHead = head->next;
        head->next = swapPairs(newHead->next);
        newHead->next = head;
        return newHead;
    }
};

class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        ListNode *dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode *temp = dummyHead;
        while (temp->next != nullptr && temp->next->next != nullptr) {
            ListNode *node1 = temp->next;
            ListNode *node2 = temp->next->next;
            temp->next = node2;
            node1->next = node2->next;
            node2->next = node1;
            temp = node1;
        }
        ListNode *ans = dummyHead->next;
        delete dummyHead;
        return ans;
    }
};
