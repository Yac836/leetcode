#include <bits/stdc++.h>

using namespace std;
int maxScore(string s) {
	int cnt_0 = 0;
	int cnt_1 = 0;
	for (int i = 0; i < s.size()-1; i++ ){
		if (s[i] == '0') {
			cnt_0 ++;
		}
		else {
			cnt_1 ++;
		}
	}
	int res_x = 0;
	int res_y = 0;
	int max_res = 0;
	int temp = 0;
	for (int i = 0; i < s.size() - 1; i++ ) {
		if (s[i] == '0') {
			res_x ++;
		}
		else {
			res_y ++;
		}
		int tmp_max = res_x + (cnt_1 - res_y);
		if (tmp_max > max_res ) {
			max_res = tmp_max;
		} 

	}
	if (s[s.size()-1] == '1') {
		max_res = max_res + 1;
	}
	return max_res;
}
int main() {

	maxScore("010");

	return 0;
}

