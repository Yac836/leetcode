//
// Created by zhaohongyan on 2020/10/25.
//

#include <bits/stdc++.h>
using namespace std;
int longestMountain(vector<int>& A) {
    int n = A.size();
    if(n <= 2){
        return 0;
    }
    vector<int> left(n);
    for (int i = 1; i < n; ++i) {
        left[i] = A[i] > A[i-1] ? (left[i-1] + 1):0;
    }
    vector<int> right(n);
    for (int j = n - 2; j > 0  ; j--) {
        right[j] = A[j] > A[j+1] ? (right[j + 1] + 1):0;
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (left[i] > 0 && right[i] > 0) {
            ans = max(ans, left[i] + right[i] + 1);
        }
    }
    return ans;
}
