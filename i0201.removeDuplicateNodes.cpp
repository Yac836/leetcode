//
// Created by zhaohongyan on 2020/6/26.
//
#include <bits/stdc++.h>
#include "utils.h"
using namespace std;
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int a):val(a),next(nullptr){};
//};
/**
 *
 * @param head
 * @return
 */
 //[1, 2, 3, 3, 2, 1]
ListNode* removeDuplicateNodes(ListNode* head) {
    ListNode *cur = head;
    while(cur){
        int val = cur->val;
        ListNode *next = cur->next;
        ListNode *tmp = cur;
        while(next){
            if(next->val != val) {
                tmp = next;
                next = next->next;
            }
            else{
                tmp->next = next->next;
                next = tmp->next;
            }
        }
        cur = cur->next;
    }
    return head;
}

ListNode* removeDuplicateNodes1(ListNode* head) {
    if (head == nullptr) {
        return head;
    }
    unordered_set<int> occurred = {head->val};
    ListNode* pos = head;
    // 枚举前驱节点
    while (pos->next != nullptr) {
        // 当前待删除节点
        ListNode* cur = pos->next;
        if (!occurred.count(cur->val)) {
            occurred.insert(cur->val);
            pos = pos->next;
        } else {
            pos->next = pos->next->next;
        }
    }
    pos->next = nullptr;
    return head;
}


int main(){
    string input= "[1, 1, 1, 1, 2]";
    ListNode *l = stringToListNode(input);
    string s = listNodeToString( removeDuplicateNodes(l));
    cout << s << endl;
}