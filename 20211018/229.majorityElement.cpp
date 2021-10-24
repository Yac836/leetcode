#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int>& nums) {
    map<int ,int> tmp;
    for (auto i : nums) {
        tmp[i] = tmp[i] ++;
    }
    vector<int> res;
    for(auto item : tmp) {
        if (item.second > nums.size() / 3) {
            res.push_back(item.first);
        }
    }
    return res;
}
int main(){
    vector<int> a{3,2,3};
    return 0;
}
