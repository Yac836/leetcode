#include <iostream>
#include <string>
using namespace std;
int myAtoi(string str);
int main() {
	string s = "abc";
	cout << myAtoi(s);
	return 0;
}
int myAtoi(string str) {
	int i = 0;
	int flag = 0;
	double res = 0;
	int sign = 1;
	for (auto c : str) {
		if (!isdigit(c)) {
			i++;
		}
		else
			break;
	}
	int temp = i - 1;
	for (int index = 0; index < temp; index++) {
		if (isspace(str[index]))
			continue;
		else {
			flag = 1;
			break;
		}
	}
	if (flag)
		return 0;
	if (i > 0) {
		if (str[i - 1] == '+' || isspace(str[i - 1]))
			sign = 1;
		else if (str[i - 1] == '-')
			sign = -1;
		else
			return 0;
	}
	for (decltype(str.size()) index = i; index < str.size(); index++)
		if (isdigit(str[index]))
			res = res * 10 + (str[index] - '0');
		else
			break;
	res = res * sign;
	if (res > 2147483647)
		return 2147483647;
	if (res < -2147483647 - 1)
		return -2147483647 - 1;
	return res;
}
