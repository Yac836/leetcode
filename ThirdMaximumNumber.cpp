#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using std::cout;
using std::endl;
using std::vector;
using std::sort;
using std::greater;
int thirdMax(vector<int>& nums) {
	if (nums.size() == 0)
		return 0;
	sort(nums.begin(), nums.end(), greater<int>());
	if (nums.size() < 3)
		return *(nums.begin());
	int i = 1;
	int min = nums[0];
	for (auto e : nums) {
		if (e < min) {
			i++;
			min = e;
		}
		if (i == 3) 
			
			break;
		
		
	}
	if(i != 3)
		return *(nums.begin());
	return min;

}
int main() {
	vector<int> v = {1,3,2};
	cout << thirdMax(v);
}