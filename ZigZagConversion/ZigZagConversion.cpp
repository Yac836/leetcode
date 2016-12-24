#include <iostream>
#include <string>
#include <vector>
using namespace std;
string convert(string s, int numRows) {
	if (s.empty())
		return "";

	vector<string> tres(numRows);
	vector<string>::size_type index;
	string res;
	auto len = s.size();
	for (index = 0; index < len; ) {
		for (int i = 0; i < numRows && index < len; i++)
			tres[i] = tres[i] + s[index++];
		for (int j = numRows - 2; j > 0 && index < len; j--)
			tres[j] = tres[j] + s[index++];
	}
	for (const string e : tres)
		res = res + e;

	return res;
}
int main() {
	string test = "A";
	cout << convert(test, 1);
}