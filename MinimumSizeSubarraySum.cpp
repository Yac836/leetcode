/*
Given an array of n positive integers and a positive integer s, find the minimal length of a subarray of which the sum ¡Ý s. If there isn't one, return 0 instead.

For example, given the array [2,3,1,2,4,3] and s = 7,
the subarray [4,3] has the minimal length under the problem constraint.

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int minSubArrayLen(int s, vector<int>& nums) {
	if (nums.size() == 0)
		return 0;
	vector<int>::size_type start = 0, end = 0,len = nums.size(), res = nums.size() + 1;
	int sum = 0;
	while (end < nums.size()) {
		while (sum < s && end < len)
			sum = sum + nums[end++];
		if (sum < s)
			break;
		while (sum >= s && start < end)
			sum = sum - nums[start++];
		res = min(res, end - start + 1);
	}
	if (res == nums.size() + 1)
		return 0;
	return res;
}
int main() {
	vector<int> test = { 1,2,6,7 };
	cout << minSubArrayLen(7, test);

}