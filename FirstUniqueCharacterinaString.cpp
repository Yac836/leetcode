#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int firstUniqChar(string s) {
	unordered_map<char, size_t> csu;
	
	int res = INT_MAX ;
	for (auto e : s)
		++csu[e];
	
	for (auto e : csu) {
		if (e.second == 1){
			auto temp = s.find_first_of(e.first);
			if (res > temp)
				res = temp;
			
		}
	}
	if (res == INT_MAX)
		res = -1;
	return res;
}
int firstUniqChar1(string s) {
	unordered_map<char, int> m;
	for (char c : s) ++m[c];
	for (int i = 0; i < s.size(); ++i) {
		if (m[s[i]] == 1) return i;
	}
	return -1;
}

int main() {
	string s = "aadb";
	cout << firstUniqChar1(s);

}
