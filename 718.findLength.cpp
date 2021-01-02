//
// Created by zhaohongyan on 2020/7/1.
//
#include <bits/stdc++.h>
using namespace std;

int findLength(vector<int>& A, vector<int>& B) {
    int n = A.size(), m = B.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            dp[i][j] = A[i] == B[j] ? dp[i + 1][j + 1] + 1 : 0;
            ans = max(ans, dp[i][j]);
        }
    }
    return ans;

}

int findLength1(vector<int>& A, vector<int>& B) {
    int n = A.size(), m = B.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    int ans = 0;
    for (int i = 1; i <= A.size() ; ++i) {
        for (int j = 1; j <= B.size(); ++j) {
            if(A[i-1] == B[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
                ans = max(ans,dp[i][j]);
            }
        }
    }
    return ans;

}
int main(){
    /**
     *
     */
    vector<int> a{1,2};
    vector<int> b{2,1};
    cout << findLength(a,b) << endl;
    cout << findLength1(a,b) << endl;
    return 0;
}