//
// Created by Zhao,Hongyan on 2020/3/12.
//

#ifndef LEETCODE_MINSTACK_H
#define LEETCODE_MINSTACK_H

#endif //LEETCODE_MINSTACK_H

#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

class MinStack {
private:
    /** initialize your data structure here. */
    stack<int> s1;
    stack<int> s2;
public:
    void push(int x) {
        s1.push(x);
        if (s2.empty() || x <= getMin())  s2.push(x);
    }
    void pop() {
        if (s1.top() == getMin())  s2.pop();
        s1.pop();
    }
    int top() {
        return s1.top();
    }
    int getMin() {
        return s2.top();
    }
};
