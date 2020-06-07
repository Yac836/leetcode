#include <iostream>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
		vector<int> left(nums.size(),1);
		vector<int> right(nums.size(),1);
		vector<int> res(nums.size(),1);
		for(int i = 1 ; i != nums.size();i++){
				left[i] = left[i-1]*nums[i-1];
		}
		for(int j = nums.size()-2; j >=0 ; j--){
				right[j]  = right[j+1] * nums[j+1];
		}
		for(int i = 0; i != nums.size();i++){
				res[i] = left[i] * right[i];
		}
		return res;
}
int main(){

	return 0;
}
