#include <iostream>
#include <vector>
#include <set>
using std::cout;
using std::endl;
using std::vector;
using std::multiset;
//void moveZeroes(vector<int>& nums) {
//
//	auto begin = nums.begin();
//	auto end = nums.end() - 1;
//	while (begin < end) {
//		while (*begin != 0)
//			begin++;
//		while (*end == 0)
//			end--;
//		*begin = *end;
//		*end = 0;
//		begin++;
//		end--;
//
//	}
//
//}
void moveZeroes(vector<int>& nums) {
	auto len = nums.size();
	for (auto begin = nums.begin(); begin != nums.end();) {
		if (*begin == 0)
			begin = nums.erase(begin);
		else 
			begin++;
	}
	nums.insert(nums.end(), len - nums.size(), 0);
}
int main() {
	vector<int> a{  };
	moveZeroes(a);
	for (auto e : a)
		cout << e << " ";


}