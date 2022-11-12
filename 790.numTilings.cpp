#include <bits/stdc++.h>
using namespace std;
int numTilings(int n) {
    vector<vector<long long>> dp(n + 1, vector<long long>(4));
    const long long mod = 1e9 + 7;
    dp[0][3] = 1;
    for (int i = 1; i <= n; i++) {
        dp[i][0] = dp[i - 1][3];
        dp[i][1] = (dp[i - 1][2] + dp[i - 1][0]) % mod;
        dp[i][2] = (dp[i - 1][1] + dp[i - 1][0]) % mod;
        dp[i][3] = (dp[i - 1][0] + dp[i - 1][3] + dp[i - 1][2] + dp[i - 1][1]) % mod;
    }
    return dp[n][3];
}
int main() {
    return 0;
}