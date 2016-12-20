/*
228. Summary Ranges  

Given a sorted integer array without duplicates, return the summary of its ranges.

For example, given [0,1,2,4,5,7], return ["0->2","4->5","7"].
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;
vector<string> summaryRanges(vector<int>& nums) {
	if (nums.empty())
		return vector<string>();
	vector<int>::size_type index;
	vector<string> sv;
	string begin = to_string(nums[0]);
	string	end;
	string  res;
	for (index = 1; index < nums.size(); index++) {
		end = to_string(nums[index - 1]);

		if (nums[index] != nums[index - 1] + 1) {
			if (begin != end)
				res = begin + "->" + end;
			else
			res = begin;
			begin = to_string(nums[index]);
			sv.push_back(res);
		}
	}
	if (begin > end)
		sv.push_back(begin);
	else
		sv.push_back(begin + "->" + to_string(nums[nums.size() - 1]));
	return sv;
}
int main() {
	vector<int> nums{ 0,1,3 };
	vector<string> res = summaryRanges(nums);
	for (auto e : res)
		cout << e << " ";

}