//
// Created by zhaohongyan on 2020/6/26.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool wordBreak( string s, vector<string>& wordDict) {
    vector<bool> dp(s.size()+1);
    dp[0] = true;
    for (int i = 1; i <= s.size(); ++i) {
        for(int j = 0; j < i; j++){
            if(dp[j] &&find(wordDict.begin(),wordDict.end(),s.substr(j,i-j)) != wordDict.end()){
                dp[i] = true;
                break;
            }
        }
    }

    return dp[s.size()];
}
int main(){
    vector<string> a{"leet","code"};
    string s = "leetcode";
    cout << wordBreak(s,a) << endl;

}