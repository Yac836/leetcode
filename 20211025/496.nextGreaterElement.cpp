#include <bits/stdc++.h>

using namespace std;
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> res;
    for (int i = 0; i < nums1.size(); i++) {
        bool flag = false;
        bool aa = false;
        for (int j = 0; j < nums2.size(); j++) {
            if (nums2[j] == nums1[i]){
                aa = true;
            }
            if (aa && nums2[j] > nums1[i]){
                res.push_back(nums2[j]);
                flag = true;
                break;
            }
        }
        if(!flag) {
            res.push_back(-1);
        }
    }
    return res;
}
int main() {

    return 0;
}

