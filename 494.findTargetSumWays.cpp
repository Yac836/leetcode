
#include <bits/stdc++.h>
using namespace std;
int sum = 0;
void aa(vector<int> nums,int s){
    if(nums.size() == 1) {
        if(s == nums[0] || s == -nums[0]){
            sum ++;
            if(s==0) {
                sum ++;
            }
        }
    }
    else{
        vector<int> tmp(nums.begin()+1,nums.end());
        aa(tmp,s-nums[0]);
        aa(tmp,s+nums[0]);
    }

}
int findTargetSumWays(vector<int>& nums, int S) {
    aa(nums,S);
    return sum;

}
int findTargetSumWays2(vector<int>& nums, int S) {
    int sum = 0;
    for (auto e : nums) {
        sum += e;
    }
    int t = sum * 2 + 1;
    auto len = nums.size();
    vector<vector<int> > dp(len,vector<int>(t,0));
    if(nums[0] == 0) {
        dp[0][sum] = 2;
    }
    else {
        dp[0][sum+nums[0]]  = 1;
        dp[0][sum-nums[0]]  = 1;

    }
    for (int i = 1; i < len; i++) {
        for (int j=0; j< t ; j++){
            int l = (j - nums[j]) >=0 ? j - nums[i] : 0;
            int r = (j + nums[j]) >= 0? j + nums[i] : 0;
            dp[i][j]  = dp[i-1][l] + dp[i-1][r];
        }
    }
    return dp[len -1][sum+S];
}
int findTargetSumWays1(vector<int>& nums, int S) {
    int sum = accumulate(nums.begin(), nums.end(), 0);
    if(S>sum || S<-sum) return 0;
    S += sum;
    if(S&1) return 0;
    S>>=1;
    vector<int> dp(S+1, 0);
    dp[0] = 1;
    for(int i=0, n = nums.size(); i<n; ++i){
        int t = nums[i];
        for(int j=S; j>=t; --j){
            dp[j] += dp[j-t];
        }
    }
    return dp[S];
}

int main(){
    cout << 123 << endl;
    vector<int> a(20,0);
    int S = 0;
    cout << findTargetSumWays(a,S) << endl;
    cout << findTargetSumWays1(a,S) << endl;
    cout << findTargetSumWays2(a,S) << endl;
    return 0;
}
