#include <bits/stdc++.h>
using namespace std;
int quickpowmod(int n, int m) {
   if(m == 0) {
        return 1;
   } 
   int res = 1;
   while (m != 0) {
       if ((m & 1) != 0) {
            res = res * n % 1337;
       } 
       m >>= 1;
       n = n * n % 1337;
   }
   return res;

}
int dfs(int a, vector<int> b, int u) {
    if (u == -1) {
        return 1;
    }
    return quickpowmod(dfs(a,b,u-1), 10) * quickpowmod(a, b[u]) % 1337;
}
int superPow(int a, vector<int> &b) {
    return dfs(a, b , b.size() - 1);
}


int main() {

    return 0;
}

