//
// Created by zhaohongyan on 2021/1/2.
//

#include <bits/stdc++.h>
using namespace  std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    int n = nums.size();
    priority_queue<pair<int,int>> q;
    for (int i = 0; i < k; ++i) {
        q.emplace(nums[i],i);
    }
    vector<int> ans = {q.top().first};

    for (int j = k; j < n ; ++j) {
        q.emplace(nums[j],j);
        while (q.top().second <= j - k){
            q.pop();
        }
        ans.push_back(q.top().first);
    }
    return ans;
}

int main(){
    return 0;
}
