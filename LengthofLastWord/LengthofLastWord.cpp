#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;
int lengthOfLastWord(string s) {
	vector<string> tokens;
	istringstream iss(s);
	copy(istream_iterator<string>(iss),
		istream_iterator<string>(),
		back_inserter(tokens));
	if (tokens.empty())
		return 0;
	auto last = tokens.end() - 1;
	auto len = (*last).size();
	return len;
}
int main() {
	string s = "  ";
	cout << lengthOfLastWord(s);

}