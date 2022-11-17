#include <bits/stdc++.h>
using namespace std;
bool isIdealPermutation(vector<int> &nums) {
    int n = nums.size();
    int a = 0;
    int b = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] > nums[j]) {
                a++;
                if (j == (i + 1)) {
                    b++;
                }
            }
        }
    }
    return a == b;
}
int main() {
    vector<int> nums{1, 0, 2};
    cout << isIdealPermutation(nums);
    return 0;
}