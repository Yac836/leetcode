//
// Created by Zhao,Hongyan on 2020/3/9.
//

#ifndef LEETCODE_BALANCEDBINARYTREE_H
#define LEETCODE_BALANCEDBINARYTREE_H

#endif //LEETCODE_BALANCEDBINARYTREE_H

#include "TreeNode.h"

#include <math.h>
using namespace std;

class Solution {
public:
    bool isBalanced(TreeNode* root) {

        if (root == NULL) {
            return true;
        }
        int left = 0;
        int right  = 0;
        if(root->left){
            left = high(root->left);
        }
        if(root->right){
            right = high(root->right);
        }

        return abs(left - right) <= 1 && isBalanced(root->left) && isBalanced(root->right);

    }

    int high(TreeNode* root){
        if(root == NULL) {
            return  0;
        }
        if(root->right == NULL && root ->left == NULL){
            return 1;
        }
        int left = 0;
        int right = 0;
        if(root->right){
            right = high(root->right);
        }
        if(root->left) {
            left = high(root->left) ;
        }

        return right > left ? right + 1 : left + 1;

    }
};