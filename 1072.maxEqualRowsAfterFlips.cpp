#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>> &matrix) {
        int m = matrix.size(), n = matrix[0].size();
        unordered_map<string, int> mp;
        for (size_t i = 0; i < m; i++) {
            string s = string(n, '0');
            for (size_t j = 0; j < n; j++) {
                s[j] = '0' + (matrix[i][j] ^ matrix[i][0]);
            }
            mp[s]++;
        }
        int res = 0;
        for (auto i : mp) {
            res = max(res, i.second);
        }
        return res;
    }
};
int main() {
    return 0;
}