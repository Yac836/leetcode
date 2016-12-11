/*
Find the contiguous subarray within an array (containing at least one number) which has the largest product.

For example, given the array [2,3,-2,4],
the contiguous subarray [2,3] has the largest product = 6.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int maxProduct(vector<int>& nums) {
	if (nums.size() == 0)
		return 0;
	int tmax = nums[0], tmin = nums[0], maxAns = nums[0];
	for (int i = 1; i < nums.size(); i++) {
		int mx = tmax, mn = tmin;
		tmax = max(max(nums[i], mx * nums[i]), mn * nums[i]);
		tmin = min(min(nums[i], mx * nums[i]), mn * nums[i]);
		maxAns = max(tmax, maxAns);
	}
	return maxAns;
}
int main() {
	vector<int> iv = {  2,3,-2,3  };
	cout << maxProduct(iv);
}