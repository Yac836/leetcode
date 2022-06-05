//
// Created by Zhao,Hongyan on 2020/3/21.
//

#ifndef LEETCODE_UTILS_H
#define LEETCODE_UTILS_H
#endif //LEETCODE_UTILS_H

#include "stdc++.h"
#include "ListNode.h"
#include "TreeNode.h"
using namespace std;
int stringToInteger(string input);
void trimRightTrailingSpaces(string &input);
vector<int> stringToIntegerVector(string input);
ListNode *stringToListNode(string input);
string integerVectorToString(vector<int> list, int length);
string listNodeToString(ListNode *node);
void prettyPrintLinkedList(ListNode *node);
void prettyPrintTree(TreeNode *node, string prefix, bool isLeft);
string stringToString(string input);
void trimLeftTrailingSpaces(string &input);
TreeNode *stringToTreeNode(string input);
string treeNodeToString(TreeNode *root);
bool stringToBool(string input);
string boolToString(bool input);
int quickpow(int n, int m);
