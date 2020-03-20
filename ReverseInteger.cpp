#include<iostream>
#include<vector>
using namespace std;
int reverse(int x);
int main() {
	int x = -2147483412;
	cout << reverse(x);
	return 0;
}
int reverse(int x) {
	vector<int> ivct;
	//2147483647
	vector<int> maxInt{ 2,1,4,7,4,8,3,6,4,7 };
	int flag = 1;
	int res = 0;
	if (x == 0 || x == -2147483647 - 1)
		return 0;
	if (x < 0) {
		x = -x;
		flag = -1;
	}
	while (x != 0) {
		ivct.push_back(x % 10);
		x = x / 10;
	}
	decltype(ivct.size()) len = ivct.size();
	if (len == 10) {
		if (ivct > maxInt)
			return 0;
	}
	for (decltype(ivct.size()) index = 0; index < ivct.size(); index++)
		res = res * 10 + ivct[index];
	res = res * flag;
	return res;
}
