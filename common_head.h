#pragma once
#include <vector>
#include <algorithm>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* DFS(vector<int> &nums, int start, int end) {
	if (start >= end) {

		return nullptr;
	}
	auto i = max_element(nums.begin(), nums.end());
	vector<int> t1;
	vector<int> t2;
	for (auto it = nums.begin(); it != nums.end(); it++) {
		if(it < i) {
			t1.push_back(*it);
		}
		if (it > i) {
			t2.push_back(*it);
		}
	}
	TreeNode *t = new TreeNode();
	t->val  = *i;
	int mid = i - nums.begin();

	t->left = DFS(t1,0, t1.size());
	t->right = DFS(t2,0, t2.size());
	return t;
}
TreeNode* constructMaximumBinaryTree(vector<int>& nums) {

	return DFS(nums, 0, nums.size());
}

