#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::vector;
using std::endl;
using std::rotate;
//方法一
void rotate1(vector<int>& nums, int k) {
	k = k % nums.size();
	
	rotate(nums.begin(), nums.end() - k , nums.end());
}
//方法二
void rotate2(vector<int>& nums, int k) {
	k = k % nums.size();
	if (k == 0)
		return;
	for (int i = 0; i < k; i++) {
		nums.insert(nums.begin(), *(nums.end() - 1));
		nums.pop_back();
		
	}
}
int main() {
	vector<int> a = { 1,2,3};
	//7654 321 4567 123
	
	rotate2(a, 5);

	for (auto e : a)
		cout  << e << " ";
	return 0;
}