/*
Find all possible combinations of k numbers that add up to a number n,
given that only numbers from 1 to 9 can be used and each combination should be a unique set of numbers.
Example 1:

Input: k = 3, n = 7

Output:

[[1,2,4]]

Example 2:

Input: k = 3, n = 9

Output:

[[1,2,6], [1,3,5], [2,3,4]]
*/
#include <iostream>
#include <vector>

using namespace std;

void res(int k, int n, int level, vector<int> &temp, vector<vector<int> > &result) {
	cout << "[";
	for (auto t : temp)
		cout << t << " ";
	cout << "]" << endl;
	if (n < 0) return;
	if (n == 0 && temp.size() == k) result.push_back(temp);
	for (int i = level; i <= 9; ++i) {
		temp.push_back(i);
		res(k, n - i, i + 1, temp, result);
		temp.pop_back();
	}
}


vector<vector<int> > combinationSum3(int k, int n) {
	vector<vector<int> > result;
	vector<int> temp;
	res(k, n, 1, temp, result);
	return result;


}

int main() {
	vector<vector<int>> a = combinationSum3(3, 9);
	for(auto e : a){
		cout << "[";
		for (auto t : e)
			cout << t << " ";
		cout << "]" << endl;

	}
}