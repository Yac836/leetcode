//
// Created by Zhao,Hongyan on 2020/3/7.
//

#include <cstddef>

#ifndef LEETCODE_TREENODE_H
#define LEETCODE_TREENODE_H

#endif //LEETCODE_TREENODE_H
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      explicit TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
