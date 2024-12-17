#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b) {
            return a[0] < b[0];
        });

        int end = intervals[0][1];
        int start = intervals[0][0];

        vector<vector<int>> ans;

        for (const auto i : intervals) {
            if (ans.empty() || ans.back()[1] < i[0]) {
                ans.push_back(i);
            } else {
                ans.back()[1] = max(ans.back()[1], i[1]);
            }
        }

        return ans;
    }
};