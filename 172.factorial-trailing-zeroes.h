//
// Created by Zhao,Hongyan on 2020/3/19.
//

#ifndef LEETCODE_172_FACTORIAL_TRAILING_ZEROES_H
#define LEETCODE_172_FACTORIAL_TRAILING_ZEROES_H

#endif //LEETCODE_172_FACTORIAL_TRAILING_ZEROES_H

#include "commonheader.h"

class Solution{
public:
    int trailingZeros(int n){
        int res = 0;
        while(n){
            res = res + n / 5;
            n = n / 5;
        }
        return res;
    }
};