#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if (k % 2 == 0 || k % 5 == 0) {
            return -1;
        }
        int len = 1;
        int r = 1 % k;
        while (r != 0) {
            r = r * 10 + 1;
            len++;
            r = r % k;
        }
        return len;
    }
};
int main() {
    auto a = Solution().smallestRepunitDivByK(3);
    cout << a << endl;
    return 0;
}
