#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> ans;
void mySortArray(vector<int> &nums,vector<int> res, int start, int end){
    if(start > end){
        ans.push_back(res);
    }
    else{
        for(int i = start; i <= end; i++){
            res.push_back(nums[i]);
            swap(nums[i],nums[start]);
            mySortArray(nums,res,start+1,end);
            swap(nums[i],nums[start]);
            res.pop_back();
        }

    }
}

vector<vector<int>> sortArray(vector<int> &nums){
    vector<int> res;
    mySortArray(nums,res,0,nums.size()-1);
    return ans;
}

int main(){
    vector<int> c{1,2,3};
    auto a = sortArray(c);
    for(auto e : a){
        for(auto b : e){
            cout << b << " ";
        }
        cout << endl;
    }
    return 0;
}