//
// Created by Zhao,Hongyan on 2020/3/16.
//

#ifndef LEETCODE_EXCELSHEETCOLUMNTITLE_H
#define LEETCODE_EXCELSHEETCOLUMNTITLE_H

#endif //LEETCODE_EXCELSHEETCOLUMNTITLE_H

#include <string>
using namespace std;

class Solution {
public:
    string convertToTitle(int n) {

        return n == 0 ? "" : convertToTitle(n / 26) + (char) (--n % 26 + 'A');
    }

    string convertToTitle1(int n) {
        string res;
        char tmp;
        while(n){
            n -= 1;
            tmp = 'A' + n % 26;
            res = tmp + res;
            n /= 26;
        }
        return res;
    }
};