#include <iostream>
#include <string>
#include <algorithm>
#include <regex>
#include <cctype>

using namespace std;
bool isPalindrome(string s) {
	s.erase(
		remove_if(s.begin(), s.end(), static_cast<int(*)(int)>(&ispunct)),
		s.end());

	s.erase(
		remove_if(s.begin(), s.end(), static_cast<int(*)(int)>(&isspace)),
		s.end());

		transform(s.begin(), s.end(), s.begin(), ::tolower);
		string temp(s);
		reverse(s.begin(), s.end());
		if (temp == s)
			return true;
		else
			return false;
}
int main() {
	cout << isPalindrome("abb");
}