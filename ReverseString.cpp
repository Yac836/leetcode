#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
/*
³¬³öÄÚ´æ
*/
string reverseString1(string s) {
	int index = s.size()-1;
	string res;
	for (;index>= 0;index--)
		res = res + s[index];
	return res;
}
string reverseString2(string s) {
	if (s.size() == 0)
		return string();
	string::size_type last = s.size() - 1;
	string::size_type begin = 0;
	char ts;
	for (;begin < last;begin++, last--) {
		ts = s[begin];
		s[begin] = s[last];
		s[last] = ts;
	}
	return s;
}
string reverseString(string s) {
	reverse(s.begin(), s.end());
	return s;
}


int main() {
	string test = "a.";
	cout << reverseString(test);
	return 0;

}