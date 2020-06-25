//
// Created by zhaohongyan on 2020/6/15.
//

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
int maxScoreSightseeingPair(vector<int>& A) {
        int res = -1;
        for(int i = 0; i != A.size(); i++){
            for(int j = i+1; j != A.size(); j++){
                if(A[j] + A[i] + i - j > res){
                    res = A[j] + A[i] + i - j;
                    cout << A[j] << " " << A[i] << " " << i <<" " << j << " ";
                    cout << res << endl;
                }
            }
        }
        return res;
}
int main(){
    vector<int> a = {2, 3, 1, 0, 2, 5, 3};
    cout << maxScoreSightseeingPair(a) << endl;
}