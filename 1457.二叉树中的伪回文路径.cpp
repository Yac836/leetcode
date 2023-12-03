/*
 * @lc app=leetcode.cn id=1457 lang=cpp
 *
 * [1457] 二叉树中的伪回文路径
 *
 * https://leetcode.cn/problems/pseudo-palindromic-paths-in-a-binary-tree/description/
 *
 * algorithms
 * Medium (64.14%)
 * Likes:    74
 * Dislikes: 0
 * Total Accepted:    13.9K
 * Total Submissions: 21.8K
 * Testcase Example:  '[2,3,1,3,1,null,1]'
 *
 * 给你一棵二叉树，每个节点的值为 1 到 9 。我们称二叉树中的一条路径是 「伪回文」的，当它满足：路径经过的所有节点值的排列中，存在一个回文序列。
 *
 * 请你返回从根到叶子节点的所有路径中 伪回文 路径的数目。
 *
 *
 *
 * 示例 1：
 *
 *
 *
 *
 * 输入：root = [2,3,1,3,1,null,1]
 * 输出：2
 * 解释：上图为给定的二叉树。总共有 3 条从根到叶子的路径：红色路径 [2,3,3] ，绿色路径 [2,1,1] 和路径 [2,3,1] 。
 * ⁠    在这些路径中，只有红色和绿色的路径是伪回文路径，因为红色路径 [2,3,3] 存在回文排列 [3,2,3] ，绿色路径 [2,1,1]
 * 存在回文排列 [1,2,1] 。
 *
 *
 * 示例 2：
 *
 *
 *
 *
 * 输入：root = [2,1,1,1,3,null,null,null,null,null,1]
 * 输出：1
 * 解释：上图为给定二叉树。总共有 3 条从根到叶子的路径：绿色路径 [2,1,1] ，路径 [2,1,3,1] 和路径 [2,1] 。
 * ⁠    这些路径中只有绿色路径是伪回文路径，因为 [2,1,1] 存在回文排列 [1,2,1] 。
 *
 *
 * 示例 3：
 *
 *
 * 输入：root = [9]
 * 输出：1
 *
 *
 *
 *
 * 提示：
 *
 *
 * 给定二叉树的节点数目在范围 [1, 10^5] 内
 * 1 <= Node.val <= 9
 *
 *
 */

#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() :
        val(0), left(nullptr), right(nullptr) {
    }
    TreeNode(int x) :
        val(x), left(nullptr), right(nullptr) {
    }
    TreeNode(int x, TreeNode *left, TreeNode *right) :
        val(x), left(left), right(right) {
    }
};
// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans = 0;
    vector<int> nums;
    bool ishuiwen(vector<int> &tmp_nums) {
        std::unordered_map<int, int> tmp;
        int num_1 = 0;
        int num_2 = 0;
        for (const auto &i : tmp_nums) {
            tmp[i]++;
        }
        for (auto i : tmp) {
            if (i.second % 2 != 0) {
                num_1++;
            }
        }
        if (num_1 != 1) {
            return false;
        }
        return true;
    }
    void dfs(TreeNode *root) {
        if (root->left == nullptr && root->right == nullptr) {
            if (ishuiwen(nums)) {
                ans++;
            }
            return;
        }
        nums.push_back(root->val);
        if (root->left) {
            dfs(root->left);
            nums.pop_back();
        }

        if (root->right) {
            dfs(root->right);
            nums.pop_back();
        }
    }
    int pseudoPalindromicPaths(TreeNode *root) {
        dfs(root);
        return ans;
    }
};
// @lc code=end
int main() {
    TreeNode node1(2);
    TreeNode node2(3);
    TreeNode node3(1);
    TreeNode node4(3);
    TreeNode node5(1);
    TreeNode node6(1);
    node1.left = &node2;
    node1.right = &node3;
    node2.left = &node4;
    node2.right = &node5;
    node3.right = &node6;
    cout << Solution().pseudoPalindromicPaths(&node1) << endl;
    cout << 123 << endl;
    return 0;
}