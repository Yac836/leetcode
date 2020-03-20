#include <iostream>
#include <string>
using namespace std;
string countAndSay(int n) {
	int i = 1;
	int index;
	int count = 1;
	string preRes;
	string res = "1";
	while (i < n) {
		preRes = "";
		char c = res[0];
		for (index = 1;index < res.size(); index++) {
			if (res[index] == c) {
				count++;
			}
			else {
				preRes = preRes + to_string(count) + c;
				c = res[index];
				count = 1;
			}
		}
		preRes = preRes + to_string(count) + c;
		count = 1;
		res = preRes;
		i++;
	}
	return res;
}
int main() {
	cout << countAndSay(5);
}