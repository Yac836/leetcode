#include<iostream>
#include<vector>
#include <map>
#include <utility>
using namespace std;
//vector<int> twoSum(vector<int>& numbers, int target) {
//	auto len = numbers.size();
//	vector<int>::size_type i, j;
//	vector<int> res;
//
//	for (i = 0; i < len; i++) {
//		int temp = target - numbers[i];
//		for (j = i + 1; j < len; j++) {
//			if (numbers[j] == temp)
//				break;
//		}
//		if (j != len) {
//			res.push_back(i+1);
//			res.push_back(j+1);
//			break;
//		}
//			
//
//	}
//	return res;
//}
vector<int> twoSum(vector<int>& numbers, int target) {
	map<int, int> m;
	vector<int>::size_type i ;
	vector<int> res;
	for (i = 0; i < numbers.size(); i++) {
		auto flag = m.insert(make_pair(numbers[i], i));
		m.insert(make_pair(target - numbers[i], i));
		if (!flag.second) {
			if (target - flag.first->first == numbers[flag.first->second]) {
				res.push_back(flag.first->second + 1);
				res.push_back(i + 1);
				break;
			}
		}
	}
	return res;
}
int main() {
	vector<int> a = { 2,3,4};
	vector<int> b;
	b = twoSum(a, 6);
	for (auto e : b)
		cout << e << " ";
}