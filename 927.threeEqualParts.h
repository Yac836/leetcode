#pragma once
#include <vector>
using namespace std;
/*
arr[0], arr[1], ..., arr[i] 为第一部分；
arr[i + 1], arr[i + 2], ..., arr[j - 1] 为第二部分；
arr[j], arr[j + 1], ..., arr[arr.length - 1] 为第三部分。

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/three-equal-parts
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

*/
string getSum(const std::vector<int> &arr, int start ,int end) {
    string sum;
    for (int i = start; i <= end ; i++) {
        if (sum.empty() && arr[i] == 0) {
            continue;
        }
        else {
            sum += std::to_string(arr[i]);
        }
    }

    return sum;
}
 vector<int> threeEqualParts(vector<int>& arr) {
     int n = arr.size();
     int flag = 0;
     vector<int> res{-1,-1};
     for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (i+1 < j) {


                string t1 = getSum(arr, 0, i);
                cout << 0 <<"_"<< i << "_" << t1 << " ";
                string t2 = getSum(arr, i + 1,j - 1);
                cout << i + 1 <<"_"<< j - 1 << "_" << t2 <<" ";
                string t3 =  getSum (arr, j, n-1);
                cout << j <<"_"<< n - 1 << "_" << t3 <<endl;
                if (t1 == t2 && t2 == t3) {
                    flag = 1;
                    res.clear();
                    res.push_back(i);
                    res.push_back(j);
                    break;
                }
            }
        }
        if (flag == 1) {
            break;
        }
     }
     return res;
}
