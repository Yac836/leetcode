#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countTime(string time) {
        int b_res = 1;
        if (time[3] == '?') {
            b_res = b_res * 6;
        }
        if (time[4] == '?') {
            b_res = b_res * 10;
        }
        int a_res = 1;
        if (time[0] == '?') {
            if (time[1] == '?') {
                a_res = 24;
            } else {
                if (time[1] <= '3') {
                    a_res = 3;
                } else {
                    a_res = 2;
                }
            }
        } else {
            if (time[0] == '0') {
                if (time[1] == '?') {
                    a_res = 10;
                } else {
                    a_res = 1;
                }
            }
            if (time[0] == '1') {
                if (time[1] == '?') {
                    a_res = 10;
                } else {
                    a_res = 1;
                }
            }
            if (time[0] == '2') {
                if (time[1] == '?') {
                    a_res = 4;
                } else {
                    a_res = 1;
                }
            }
        }

        return a_res * b_res;
    }
};
int main() {
    int a = Solution().countTime("0?:0?");
    cout << a << endl;
    return 0;
}