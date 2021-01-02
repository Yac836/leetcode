//
// Created by zhaohongyan on 2020/6/30.

#include <bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int> &nums){
    if(nums.empty()){
        return;
    }
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = 0; j < nums.size() - i - 1 ; ++j) {
            if(nums[j] > nums[j + 1]) {
                int tmp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = tmp;
            }
        }
    }
}
void insert_sort1(vector<int> &nums){
    if(nums.empty()){
        return;
    }
    vector<int> res;

    res.push_back(nums[0]);
    for (int i = 1; i < nums.size(); ++i) {
        bool flag = true;
        for(auto it = res.begin(); it != res.end(); it++){
            if(*it > nums[i]){
                res.insert(it ,nums[i]);
                flag = false;
                break;
            }
        }
        if(flag){
            res.push_back(nums[i]);
        }
    }
    swap(nums,res);
}
void insert_sort(vector<int> &nums){
    if(nums.empty()){
        return;
    }
    vector<int> res;

    for (int i = 1 ; i <  nums.size(); ++i) {
        bool flag = true;
        int tmp = nums[i];
        for(int j = i - 1 ; j >= 0; j--){
            if(tmp < nums[j]){
                nums[j+1] = nums[j];
            }
            else{
                nums[j + 1] = tmp;
                flag = false;
                break;
            }
        }
        if(flag){
            nums[0] = tmp;
        }

    }
}
void selection_sort(vector<int> &nums){
    for (int i = 0; i < nums.size(); ++i) {
        int min = i;
        for (int j = 0; j < nums.size() ; ++j) {
            if(nums[j] < nums[min]){
                min  = j;
            }
            int tmp = nums[i];
            nums[i] = nums[min];
            nums[min] = tmp;

        }
    }
}
int main(){
    vector<int> a = {7,4,3,5,6};
    for(auto e : a){
        cout << e << " ";
    }
    cout << endl;
    selection_sort(a);
    for(auto e : a){
        cout << e << " ";
    }


}