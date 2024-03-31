/*
 * @lc app=leetcode.cn id=2908 lang=cpp
 *
 * [2908] 元素和最小的山形三元组 I
 *
 * https://leetcode.cn/problems/minimum-sum-of-mountain-triplets-i/description/
 *
 * algorithms
 * Easy (72.98%)
 * Likes:    36
 * Dislikes: 0
 * Total Accepted:    20.1K
 * Total Submissions: 27.6K
 * Testcase Example:  '[8,6,1,5,3]'
 *
 * 给你一个下标从 0 开始的整数数组 nums 。
 *
 * 如果下标三元组 (i, j, k) 满足下述全部条件，则认为它是一个 山形三元组 ：
 *
 *
 * i < j < k
 * nums[i] < nums[j] 且 nums[k] < nums[j]
 *
 *
 * 请你找出 nums 中 元素和最小 的山形三元组，并返回其 元素和 。如果不存在满足条件的三元组，返回 -1 。
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：nums = [8,6,1,5,3]
 * 输出：9
 * 解释：三元组 (2, 3, 4) 是一个元素和等于 9 的山形三元组，因为：
 * - 2 < 3 < 4
 * - nums[2] < nums[3] 且 nums[4] < nums[3]
 * 这个三元组的元素和等于 nums[2] + nums[3] + nums[4] = 9 。可以证明不存在元素和小于 9 的山形三元组。
 *
 *
 * 示例 2：
 *
 *
 * 输入：nums = [5,4,8,7,10,2]
 * 输出：13
 * 解释：三元组 (1, 3, 5) 是一个元素和等于 13 的山形三元组，因为：
 * - 1 < 3 < 5
 * - nums[1] < nums[3] 且 nums[5] < nums[3]
 * 这个三元组的元素和等于 nums[1] + nums[3] + nums[5] = 13 。可以证明不存在元素和小于 13 的山形三元组。
 *
 *
 * 示例 3：
 *
 *
 * 输入：nums = [6,5,4,3,4,5]
 * 输出：-1
 * 解释：可以证明 nums 中不存在山形三元组。
 *
 *
 *
 *
 * 提示：
 *
 *
 * 3 <= nums.length <= 50
 * 1 <= nums[i] <= 50
 *
 *
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumSum(vector<int> &nums) {
        int size = nums.size();

        if (size < 3) {
            return -1;
        }
        vector<int> min_ele(size, 0);
        int a = INT_MAX;
        for (size_t i = 1; i < nums.size(); i++) {
            if (nums[i - 1] < a) {
                min_ele[i] = nums[i - 1];
                a = nums[i - 1];
            } else {
                min_ele[i] = a;
            }
        }
        // for (auto i : min_ele) {
        //     cout << i << " ";
        // }
        // cout << endl;

        int b = nums[size - 1];
        int res = -1;
        for (size_t i = size - 2; i > 0; i--) {
            // cout << b << " ";
            if (min_ele[i] < nums[i] && nums[i] > b) {
                if (res == -1) {
                    res = min_ele[i] + nums[i] + b;
                }
                res = min(res, min_ele[i] + nums[i] + b);
            }
            b = min(nums[i], b);
        }
        return res;
    }
};
// @lc code=end
