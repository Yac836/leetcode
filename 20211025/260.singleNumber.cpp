#include <bits/stdc++.h>

using namespace std;
vector<int> singleNumber(vector<int>& nums) {
    if (nums.size() <= 2) {
        return nums;
    }
    unordered_map<int, int> freq;
    for (int i : nums) {
        ++freq[i];
    }
    vector<int> ans;
    for (const auto& [num, occ] : freq) {
        if (occ == 1) {
            ans.push_back(num);
        }

    }
    return ans;
}
vector<int> singleNumber2(vector<int>& nums) {
    int tmp = 0;
    for (int i :nums) {
        tmp = tmp ^ i;
    }
    int lsb = (tmp == INT_MIN ? tmp : tmp & (-tmp));
    int res1 = 0, res2 = 0;
    for (int i : nums) {
        if (i & lsb) {
            res1 ^= i; 
        }
        else {
            res2 ^= i;
        }
    }
    return {res1, res2};
}
int main() {

    return 0;
}

