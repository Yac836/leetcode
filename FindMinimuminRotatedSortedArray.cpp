/*
Suppose a sorted array is rotated at some pivot unknown to you beforehand.

(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

Find the minimum element.

You may assume no duplicate exists in the array.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int findMin1(vector<int>& nums) {

	if (nums.size() == 1) {
		return nums[0];
	}
	int res = nums[0];
	for (decltype(nums.size()) i = 0; i < nums.size(); i++) {
		if (nums[i] < res) {
			res = nums[i];

		}
	}
	return res;

}
int findMin2(vector<int>& nums) {
	int s = 0;
	int e = nums.size() - 1;
	int m;
	while (s < e) {
		m = (s + e) / 2;
		if (nums[m] >= nums[s] && nums[s] > nums[e])
			s = m + 1;
		else
			e = m;
	}
	return nums[s];
}
int findMin3(vector<int>& nums) {
	return *min_element(nums.begin(), nums.end());
}
int main() {
	vector<int> test = { 2,3,1 };
	cout << findMin1(test);
}