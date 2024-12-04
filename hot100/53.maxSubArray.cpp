#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        int len = nums.size();
        if (len == 0) {
            return 0;
        }
        vector<int> dp(len, 0); // 表示以i结尾的最大连续子数组和
        dp[0] = nums[0];
        int maxAns = nums[0];
        for (int i = 1; i < len; i++) {
            // 方式一
            // 当遍历到i的时候，要么加入i-1之前的数组，要么单独成为一个子数组
            // 单独成为子数组的条件为 dp[i - 1] + nums[i] < nums[i], 什么情况会发生呢，dp[i-1] < 0

            if (dp[i - 1] < 0) {
                dp[i] = nums[i];
            } else {
                dp[i] = dp[i - 1] + nums[i];
            }
            //方式二 因为 dp[i - 1] >= 0 那么 dp[i - 1] + nums[i] >= nums[i]
            // 如果 dp[i - 1] < 0 那么 dp[i - 1] + nums[i] < nums[i]
            // 因为要求的是最大的连续子数组和 所以就是要dp[i - 1] + nums[i], nums[i] 他们两者的最大值
            dp[i] = max(dp[i - 1] + nums[i], nums[i]);
            if (dp[i] > maxAns) {
                maxAns = dp[i];
            }
        }
        return maxAns;
    }
};
int main() {
    cout << "123" << endl;
    vector<int> nums{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << Solution().maxSubArray(nums) << endl;
    return 0;
}