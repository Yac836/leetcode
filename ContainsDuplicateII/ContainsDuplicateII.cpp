#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using std::cout;
using std::endl;
using std::vector;
using std::set;
//超时
/*bool containsNearbyDuplicate(vector<int>& nums, int k) {
	vector<int>::size_type index;
	vector<int>::size_type len = nums.size();
	for (index = 0;index < nums.size();index++) {
		for (auto temp = index + 1; temp <= index + k && temp < len; temp++) {
			if (nums[index] == nums[temp])
				return true;
		}
	}
	return false;
}*/
bool containsNearbyDuplicate(vector<int>& nums, int k) {
	
	set<int> is;
	for (vector<int>::size_type index = 0; index < nums.size();index++) {
		if (index > k)
			is.erase(nums[index - k - 1]);
		if (!(is.insert(nums[index]).second))
			return true;

	}
	return false;
}
int main() {
	vector<int> n = { -1,-1 };
	set<int> is{1,2,3};
	is.erase(1);
	for (auto e : is)
		cout << e << endl;
	cout << containsNearbyDuplicate(n,1)<<endl;
	return 0;
}