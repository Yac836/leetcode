#include <bits/stdc++.h>
using namespace std;
int minMoves(vector<int>& nums) {
    if (nums.size() == 0) {
        return 0;
    }
    int size = nums.size();
    int min = nums[0];
    int sum = 0;
    for (auto i : nums) {
        sum = sum + i;
        if (i < min) {
            min = i;
        }
    }
    return sum - size * min;
}
int main() {
    vector<int> test{1,2,3};
    cout << minMoves(test) << endl;
    return 0;
}
