#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isValid(string s) {
	if (s.empty())
		return true;
	auto len = s.size();
	string::size_type index;
	stack<char> cs;
	cs.push(s[0]);
	for (index = 1; index < len; index++) {
		if (cs.empty())
			if (s[index] != ')'&&s[index] != '}'&&s[index] != ']') {
				cs.push(s[index]);
				continue;
			}
			else {
				return false;
			}
			char e = cs.top();
			if (e == '(') {
				if (s[index] == ')')
					cs.pop();
				else
					cs.push(s[index]);
			}
			else if (e == '{') {
				if (s[index] == '}')
					cs.pop();
				else
					cs.push(s[index]);
			}
			else if (e == '[') {
				if (s[index] == ']')
					cs.pop();
				else
					cs.push(s[index]);
			}
	}
	if (cs.empty())
		return true;
	else
		return false;
}
int main() {
	string test = "([)";
	cout << isValid(test);
}