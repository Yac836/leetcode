#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int minMoves(vector<int>& nums) {
	int sum = 0;
	for (auto e : nums)
		sum = sum + e;
	auto min = *min_element(nums.begin(), nums.end());
	return sum - nums.size() * min;

}

int main() {

}