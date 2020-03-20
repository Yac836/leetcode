#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::set;
bool containsDuplicate(vector<int>& nums) {
	set<int> a(nums.begin(), nums.end());
	if (a.size() == nums.size())
		return false;
	return true;
}

int main() {
	vector<int> a{ 1,2,3 ,1};
	cout << containsDuplicate(a);
}