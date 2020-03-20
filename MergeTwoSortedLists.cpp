#include <iostream>
#include "ListNode.h"
using namespace std;
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
	if (!l1 && !l2)
		return  nullptr;
	if (!l1)
		return l2;
	if (!l2)
		return l1;
	ListNode* tres;
	if (l1->val < l2->val) {
		tres = l1;
		l1 = l1->next;
	}
	else {
		tres = l2;
		l2 = l2->next;
	}
	ListNode* res = tres;
	while (l1&&l2) {
		if (l1->val < l2->val) {
			tres->next = l1;
			l1 = l1->next;
		}
		else {
			tres->next = l2;
			l2 = l2->next;
		}
		tres = tres->next;
	}
	if (l1)
		tres->next = l1;
	if (l2)
		tres->next = l2;
	return res;
}
int main() {
	ListNode a1(1);
	ListNode b1(2);
	ListNode c1(3);
	ListNode d1(4);
	ListNode e1(5);
	ListNode *head1;
	a1.next = &b1;
	b1.next = &c1;
	c1.next = &d1;
	d1.next = &e1;
	head1 = &a1;
	ListNode a2(1);
	ListNode b2(2);
	ListNode c2(3);
	ListNode d2(4);
	ListNode e2(5);
	ListNode *head2;
	a2.next = &b2;
	b2.next = &c2;
	c2.next = &d2;
	d2.next = &e2;
	head2 = &a2;
	while (head1) {
		cout << head1->val << " ";
		head1 = head1->next;
	}
	cout << endl;
	while (head2) {
		cout << head2->val << " ";
		head2 = head2->next;
	}
	cout << endl;
	head2 = &a2;
	head1 = &a1;
	head1 = mergeTwoLists(head1, head2);
	while (head1) {
		cout << head1->val << " ";
		head1 = head1->next;
	}
}