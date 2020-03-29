//
// Created by Zhao,Hongyan on 2020/3/28.
//

#include "commonheader.h"
class Solution {
public:
    int minIncrementForUnique(vector<int>& A) {
        sort(A.begin(),A.end());
        int count = 0;
        for (size_t i = 1; i < A.size(); ++i) {
            if (A[i] <= A[i-1]) {
                int tmp = A[i];
                A[i] = A[i-1]+1;
                count = count + (A[i] - tmp);
            }
        }
        return  count;
    }
};