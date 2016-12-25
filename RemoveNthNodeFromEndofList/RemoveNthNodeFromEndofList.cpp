#include "ListNode.h"
#include <iostream>

using namespace std;
ListNode* removeNthFromEnd(ListNode* head, int n) {
	ListNode *begin = head;
	int len = 1;
	while (begin->next != nullptr) {
		len++;
		begin = begin->next;
	}
	cout << len << endl;
	if (len == n)
		return head->next;
	int remove = len - n;
	begin = head;
	len = 1;
	while (len < remove) {
		begin = begin->next;
		len++;
	}
	begin->next = begin->next->next;
	return head;
}
int main() {

	ListNode a(1);
	ListNode b(2);
	ListNode c(3);
	ListNode d(4);
	ListNode e(5);
	ListNode *head;
	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = &e;
	head = &a;
	while (head) {
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;
	head = &a;
	head = removeNthFromEnd(head, 5);
	while (head) {
		cout << head->val << " ";
		head = head->next;
	}
}