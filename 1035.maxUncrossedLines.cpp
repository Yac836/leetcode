//
// Created by zhaohongyan on 2020/6/26.


#include <bits/stdc++.h>
using namespace std;
int maxUncrossedLines(vector<int>& A, vector<int>& B){

    vector<vector<int>> dp(A.size()+1,vector<int>(B.size()+1,0));
    for (int i = 1; i <= A.size(); ++i) {
        for (int j = 1; j <= B.size(); ++j) {
            if(A[i-1] == B[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[A.size()][B.size()];

}
int main(){
    vector<int>  a = {3,1,4,1,1,3,5,1,2,2};
    vector<int>  b = {4,1,5,2,1,1,1,5,3,1,1,1,2,3,1,4,3,5,5,3,1,2,3,2,4,1,1,1,5,3};
    cout << maxUncrossedLines(a,b) << endl;
    return 0;
}
