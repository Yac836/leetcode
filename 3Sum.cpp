//
// Created by Zhao,Hongyan on 2020/3/14.

/*
 *
Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0?
Find all unique triplets in the array which gives the sum of zero.

Note:

The solution set must not contain duplicate triplets.

Example:

Given array nums = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]
 */



#ifndef LEETCODE_3SUM_H
#define LEETCODE_3SUM_H

#endif //LEETCODE_3SUM_H

#include "commonheader.h"

vector<int> twoSum(vector<int>& numbers, int target) {
    map<int, int> m;
    vector<int>::size_type i ;
    vector<int> res;
    for (i = 0; i < numbers.size(); i++) {
        auto flag = m.insert(make_pair(numbers[i], i));
        m.insert(make_pair(target - numbers[i], i));
        if (!flag.second) {
            if (target - flag.first->first == numbers[flag.first->second]) {
                res.push_back(numbers[flag.first->second]);
                res.push_back(numbers[i]);
                break;
            }
        }
    }
    return res;
}

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); ++i) {

            int a = 0 - nums[i];
            vector<int> tmp(nums.begin()+i,nums.end());

            vector<int> tt = twoSum(tmp,a);
            if (!tt.empty()){
                tt.push_back(nums[i]);
                res.push_back(tt);
            }
        }
        return  res;
    }
};


int main(){
    vector<int>a = {-1,0,1,2,-1,-4};
    Solution{}.threeSum(a);
    return 0;
}