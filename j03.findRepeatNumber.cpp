//
// Created by zhaohongyan on 2020/6/15.
//

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
int findRepeatNumber(vector<int>& nums) {
    for(int i = 0; i != nums.size();i++){
        while(nums[i] != i){
            if(nums[nums[i]] != nums[i]){
                int tmp = nums[nums[i]];
                nums[nums[i]] = nums[i];
                nums[i] = tmp;
            }
            else{
                return nums[i];
            }
            for_each(nums.begin(),nums.end(),[](int a){
               cout << a << " ";
            });
            cout << endl;
        }
    }
    return 0;
}
int main(){
    vector<int> a = {2, 3, 1, 0, 2, 5, 3};
    /**
     *
     * 3, 1, 2, 0, 2, 5, 3

     */
    cout << findRepeatNumber(a);
}