#include <iostream>
#include <string>
#include <utility>
#include <unordered_map>
using namespace std;
char findTheDifference(string s, string t) {
	string res = s+ t;
	unordered_map<char, size_t> csu;
	for (const auto e : res)
		++csu[e];
	pair<char, size_t> c;
	for (const auto e : csu)
		if (e.second % 2 != 0) {
			c = e;
			break;
		}
		
	return c.first;
}
using namespace std;
int main() {


}