#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int num) : val(num) {};
};
class LinkedListStack {
private:
    ListNode *stackTop;
    int stSize = 0;
public:
    LinkedListStack() {
        stackTop = nullptr;
        stSize = 0;
    }
    ~LinkedListStack() {
        
    }
    int size() {
        return stSize;
    }
    bool isEmpty() {
        return size() == 0;
    }
    void push(int num) {
        ListNode *node = new ListNode(num);
        node->next = stackTop;
        stackTop = node;
        stSize++;
    }
    void pop() {
        int num = top();
        ListNode *tmp = stackTop;
        stackTop = stackTop->next;
        delete tmp;
        stSize--;
    }
    int top() {
        if (isEmpty()) {
            throw out_of_range("stack is empty");
        }
        return stackTop->val;
    }
    vector<int> toVector() {
        ListNode *node = stackTop;
        vector<int> res(size());
        for (int i = res.size() - 1; i >=0; i--) {
            res[i] = node->val;
            node = node->next;
        }
        return res;
    }
};
int main(int argc, char const *argv[]) {
    /* code */
    return 0;
}
