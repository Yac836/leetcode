//
// Created by zhaohongyan on 2020/6/13.
//

int climbStairs(int n) {
    if(n <=2)
        return n;
    int  a = 1, b =2;
    for(int i = 3; i <= n; i++){
        int t = b;
        b = a + b;
        a = t;
    }
    return b;
}