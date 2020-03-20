#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int singleNumber(vector<int>& nums) {
	int res = 0;
	for (const auto e : nums)
		res ^= e;
	return res;
}

int singleNumber1(vector<int>& nums) {
	int count = 1;
	sort(nums.begin(), nums.end());
	for (size_t i = 0; i < nums.size(); i++) {
		if (nums[i] == nums[i + 1]) {
			count++;
		}
		else {
			if (count < 2)
				return nums[i];
			count = 1;
		}
	}
}
int main() {
	vector<int> test = { 1,2,3,4,4,3,1 };
	cout << singleNumber1(test);
	
}