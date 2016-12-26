#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int removeElement(vector<int>& nums, int val);
int main() {
	vector<int> nums{ 3,2,2,3 };

	removeElement(nums, 3);
	for (auto i : nums)
		cout << i << endl;

	return 0;
}
//int removeElement(vector<int>& nums,int val) {
//    vector<int>::iterator iter;
//    for(iter=nums.begin(); iter!=nums.end(); ) {
//        if( *iter == val)
//            iter = nums.erase(iter);
//        else
//            iter ++ ;
//    }
//    return nums.size();
//}
int removeElement(vector<int>& nums, int val) {
	vector<int>::size_type i = 0, j = 0;
	for (;i != nums.size();i++) {
		if (nums[i] == val)
			continue;
		nums[j] = nums[i];
		j++;
	}
	return j;
}
