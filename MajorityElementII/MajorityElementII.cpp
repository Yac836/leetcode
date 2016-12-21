/*
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
The algorithm should run in linear time and in O(1) space.
*/
#include <iostream>
#include <vector>
using namespace std;
vector<int> majorityElement(vector<int>& nums) {
	int res1 = 0, res2 = 0;
	int cnt1 = 0, cnt2 = 0;
	vector<int> result;
	for (auto e : nums) {
		if (e == res1)
			cnt1++;
		else if (e == res2)
			cnt2++;
		else if (cnt1 == 0) {
			res1 = e;
			cnt1 = 1;
		}
		else if (cnt2 == 0) {
			res2 = e;
			cnt2 = 1;
		}
		else {
			cnt1--;
			cnt2--;
		}

	}
	cnt1 = 0, cnt2 = 0;
	for (auto e : nums) {
		if (e == res1)
			cnt1++;
		else if (e == res2)
			cnt2++;

	}
	if (cnt1 > nums.size() / 3) {
		result.push_back(res1);
	}
	if (cnt2 > nums.size() / 3) {
		result.push_back(res2);
	}
	return result;

}
int main() {
	vector<int> test{ 1,1,2,2,2,3,3,3 };
	auto res = majorityElement(test);
	for (auto e : res)
		cout << e << endl;
}