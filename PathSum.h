//
// Created by Zhao,Hongyan on 2020/3/10.
//

#ifndef LEETCODE_PATHSUM_H
#define LEETCODE_PATHSUM_H

#endif //LEETCODE_PATHSUM_H

#include "TreeNode.h"

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {

        if(root == NULL) {
            return false;
        }
        if(root->right == NULL && root->left == NULL && sum == root->val) {
            return true;
        }

        bool left = hasPathSum(root->left, sum - root->val);
        bool right = hasPathSum(root->right, sum - root->val);

        return left || right;
    }
};