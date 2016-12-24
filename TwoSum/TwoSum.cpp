#include<iostream>
#include<vector>
using std::vector;
using std::cout;
vector<int> twoSum(vector<int>& nums, int target);
int main() {
	vector<int> nums{ 2,7,11,15 };
	int target = 9;
	vector<int> res;
	res = twoSum(nums, target);

	for (auto i : res)
		cout << i << std::endl;
	return 0;
}
vector<int> twoSum(vector<int>& nums, int target) {
	decltype(nums.size()) len = nums.size();
	vector<int> res;
	for (decltype(nums.size()) i = 0; i < len; i++) {
		for (decltype(nums.size()) j = i + 1; j < len; j++) {
			if (nums[i] + nums[j] == target) {
				res.push_back(i);
				res.push_back(j);
			}
		}
	}
	return res;
}
