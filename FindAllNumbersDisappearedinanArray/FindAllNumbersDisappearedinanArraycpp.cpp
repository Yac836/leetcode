#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;
using std::cout;
using std::cin;
using std::sort;
vector<int> findDisappearedNumbers(vector<int>& nums) {
	
	vector<int> temp(nums.size());
	vector<int> res;
	for (auto e : nums) {
		temp[e-1]++;
		
	}
	int i = 1;
	for (auto e : temp) {
		if (e == 0)
			res.push_back(i);
		i++;
	}
	return res;
		
	
		
}
int main() {
	vector<int> n = { 4,3,2,7,8,2,3,1 };
	vector<int> a = findDisappearedNumbers(n);
	for (auto e : a)
		cout << e << " ";
}