#include <iostream>
#include <string>
#include <cctype>

using namespace std;
bool isVowel(char c) {
	c = tolower(c);
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		return true;
	else
		return false;

}
string reverseVowels(string s) {
	if (s.empty())
		return "";
	string::size_type begin = 0, end = s.size() - 1;
	while (begin < end) {
		while (begin <= end&&!isVowel(s[begin]) )
			begin++;
		while (end > begin&&!isVowel(s[end]))
			end--;
		if(begin < end){
		char temp = s[begin];
		s[begin] = s[end];
		s[end] = temp;
		begin++;
		end--;
		}
	}
	return s;
}

int main() {
	string test = "., ";
	cout << reverseVowels(test);
}