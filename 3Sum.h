//
// Created by Zhao,Hongyan on 2020/3/14.
//

#ifndef LEETCODE_3SUM_H
#define LEETCODE_3SUM_H

#endif //LEETCODE_3SUM_H

#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                for (int k = j + 1 ; k < nums.size(); ++k) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        res.push_back(vector<int>{nums[i],nums[j],nums[k]});
                    }
                }

            }
        }
        return  res;
    }
};