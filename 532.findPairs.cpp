#include <iostream>
#include <vector>
#include <string>
#include "utils.h"
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
using namespace std;
int findPairs(vector<int>& nums, int k) {
    if(k < 0) {
        return 0;
    }
    unordered_map<int,int> map1;
    unordered_set<int> set1;
    for( size_t i = 0; i < nums.size(); i++ ){
        if (map1.count(nums[i] - k)) {
            set1.insert(nums[i]-k);
        }
        if (map1.count(nums[i] + k)) {
            set1.insert(nums[i]);
        }
        map1[nums[i]] = 1;
    }
    return set1.size();
}
int main() {
    string aa;
    cin >> aa;
    auto nums = stringToIntegerVector(aa);
    cout << findPairs(nums,2) << endl;

}
