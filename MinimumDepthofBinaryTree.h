//
// Created by Zhao,Hongyan on 2020/3/7.
//

#ifndef LEETCODE_MINIMUMDEPTHOFBINARYTREE_H
#define LEETCODE_MINIMUMDEPTHOFBINARYTREE_H

#endif //LEETCODE_MINIMUMDEPTHOFBINARYTREE_H

#include "TreeNode.h"

class Solution {
public:

     int minDepth(TreeNode* root) {
         int left = 0;
         int right = 0;
         if(root == NULL) {
             return 0;
         }
         if(root->right == NULL && root->left == NULL){
             return 1;
         }
         if(root->left) {
             left = minDepth(root->left);
         }
         if(root->right){
             right = minDepth(root->right);
         }
         if(right && left)

             return left < right ? left + 1:right+1;
         else if(left != 0)
             return left + 1;
         else
             return right + 1;
    }
};