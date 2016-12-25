#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
	if (strs.empty())
		return "";
	if (strs.size() == 1)
		return strs[0];
	vector<string>::size_type begin;
	int	index;
	int len = strs[0].size();
	vector<string>::size_type strsLen = strs.size();
	string res;
	bool flag = true;
	for (index = 0; index < len; index++) {
		for (begin = 1;begin < strsLen; begin++) {
			if (strs[0][index] != strs[begin][index]) {
				flag = false;
				break;
			}
		}
		if (!flag) {
			break;
		}
		else {
			res = res + strs[0][index];
		}
	}
	return res;
}
int main() {
	vector<string> vs{ "a","b" };
	cout << longestCommonPrefix(vs);
}