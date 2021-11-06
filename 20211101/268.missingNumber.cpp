#include <bits/stdc++.h>

using namespace std;
int missingNumber(vector<int>& nums) {

    std::sort(nums.begin(), nums.end()); 
    for (int i = 0; i < nums.size(); i++) {
       if (nums[i] != i) {
           return i;
       } 
    }
    return 0;
}
int main() {

    return 0;
}

