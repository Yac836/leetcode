#include <bits/stdc++.h>

using namespace std;
bool splitArraySameAverage(vector<int> &nums) {
    int n = nums.size();
    int m = n / 2;
    if (n == 1) {
        return false;
    }
    int sum = accumulate(nums.begin(), nums.end(), 0);
    for (int &x : nums) {
        x = x * n - sum;
    }
    unordered_set<int> left;
    cout << (1 << m) << endl;
    cout << "234234" << endl;
    for (int i = 1; i < (1 << m); i++) {
        int tot = 0;
        for (int j = 0; j < m; j++) {
            if (i & (1 << j)) {
                // cout << (i & (1 << j)) << endl;
                tot += nums[j];
            }
        }
        if (tot == 0) {
            return true;
        }
        left.emplace(tot);
    }
    cout << (1 << (n - m)) << endl;
    cout << "234234" << endl;
    int rsum = accumulate(nums.begin() + m, nums.end(), 0);
    for (int i = 1; i < (1 << (n - m)); i++) {
        int tot = 0;
        for (int j = m; j < n; j++) {
            if (i & (1 << (j - m))) {
                tot += nums[j];
            }
        }
        if (tot == 0 || (rsum != tot && left.count(-tot))) {
            return true;
        }
    }
    return false;
}
int main() {
    vector<int> a{1, 2, 3, 4, 5, 6, 7, 8};
    cout << splitArraySameAverage(a) << endl;
    return 0;
}
