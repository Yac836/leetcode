#include <bits/stdc++.h>

using namespace std;
int longestSubsequence(vector<int>& arr, int difference) {
    unordered_map<int, int> tmp;
    int res = 0;
    for(auto i : arr) {
        if (tmp.find(i - difference) != tmp.end()) {
            tmp[i] = tmp[i - difference] + 1;
        }
        else {
            tmp[i] = 1;
        }
        res = max(tmp[i], res); 
    }
    return res;
}

int main() {

    return 0;
}

