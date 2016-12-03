#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <limits>  
using std::cout;
using std::cin;
using std::vector;
using std::map;
using std::endl;
using std::numeric_limits;
//方法一
/*int majorityElement(vector<int>& nums) {
	map<int, int> im;
	for (auto e : nums)
		++im[e];
	int temp = im.begin()->second;
	int mE=im.begin()->first;
	for (auto e : im)
		if (e.second > temp){
			temp = e.second;
			mE = e.first;
		}
	return mE;

}*/
//方法二
int majorityElement(vector<int>& nums) {
	int mE = nums[0];
	vector<int>::size_type index = 0;
	int count = 0;
	for (;index<nums.size();index++) {
		if (count == 0 || mE == nums[index]) {
			mE = nums[index];
			count++;
		}  
		else 
			count--;
	}
	return mE;
}
int main() {
	int a = -2147483647-1;
	vector<int> iv{0,0};
	iv.push_back(a);
	
	
	//cout << "\t最大值：" << (numeric_limits<int>::max)();
	//cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
	cout << majorityElement(iv);
}