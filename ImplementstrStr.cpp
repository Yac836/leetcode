#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int strStr(string haystack, string needle) {
	if (needle.empty())
		return 0;
	auto pos = haystack.find(needle);
	if (pos == string::npos)
		return -1;
	else
		return 	pos;
}


int main() {


}