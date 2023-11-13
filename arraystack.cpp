#include <bits/stdc++.h>
using namespace std;
class ArrayStack{
private:
    vector<int> stack;
public:
    int size() {
        return stack.size();
    }
    bool isEmpty() {
        return stack.size() == 0;
    }
    void push(int num) {
        stack.push_back(num);
    }
    void pop() {
        int oldTop = top();
        stack.pop_back();
    }
    int top() {
        if (isEmpty()) {
            throw out_of_range("stack is empty");
        }
        return stack.back();
    }
    vector<int> toVector() {
        return stack;
    }
};
