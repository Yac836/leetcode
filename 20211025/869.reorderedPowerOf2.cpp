#include <bits/stdc++.h>

using namespace std;
string countDigits(int n) {
    string cnt(10, 0);
    while (n) {
        ++cnt[n % 10];
        n = n / 10;
    }
    return cnt;
}
unordered_set<string> powerOf2Digits;
int init = [](){
    for (int n = 1; n <= 1e9; n <<= 1) {
        powerOf2Digits.insert(countDigits(n));
    }
    return 0;
}();
bool reorderedPowerOf2(int n) {
   return powerOf2Digits.count(countDigits(n));
}
int main() {

    return 0;
}

