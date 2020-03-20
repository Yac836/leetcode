#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int>& nums);
int main() {
	vector<int> ivct{ 1,1,2,2,3 };
	removeDuplicates(ivct);
	for (auto i : ivct)
		cout << i << " ";
	return 0;
}
int removeDuplicates(vector<int>& nums) {
	if (nums.size() == 0)
		return 0;
	vector<int>::size_type  len = nums.size();
	vector<int>::iterator s1 = nums.begin();
	vector<int>::iterator s2 = nums.begin() + 1;
	vector<int>::iterator e = nums.end();
	while (s2 != e) {
		if (*s1 == *s2)
			s2++;
		else {
			s1++;
			*s1 = *s2;
			s2++;
		}
	}
	nums.erase(s1 + 1, e);
	return nums.size();
}
