#include <iostream>
#include "ListNode.h"

using namespace std;
ListNode* swapPairs(ListNode* head) {
	
	if (!head  || !head->next) return head;
	ListNode tempNode(0);
	ListNode *helper = &tempNode;
	ListNode *ret = head;
	ListNode *cur = helper;
	while (ret  && ret->next) {
		ListNode *next = ret->next->next;
		cur->next = ret->next;
		cur = cur->next;
		cur->next = ret;
		cur = cur->next;
		cur->next = nullptr;
		ret = next;
	}
	if (ret) cur->next = ret;
	return helper->next;
}

int main() {
	ListNode a1(1);
	ListNode b1(2);
	ListNode c1(3);
	ListNode d1(4);
	ListNode *head1 = nullptr;
	head1 = &a1;
	a1.next = &b1;
	b1.next = &c1;
	c1.next = &d1;
	while (head1) {
		cout << head1->val << " ";
		head1 = head1->next;
	}
	head1 = &a1;
	head1 = swapPairs(head1);
	while (head1) {
		cout << head1->val << " ";
		head1 = head1->next;
	}

}