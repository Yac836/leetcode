#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iterator>
using namespace std;
int countSegments(string s) {
	vector<string> tokens;
	istringstream  iss(s);
	copy(istream_iterator<string>(iss),
		istream_iterator<string>(),
		back_inserter(tokens));
	return tokens.size();

}

int main() {
	string test = "hello      zhao hong yan";
	cout << countSegments(test);


}