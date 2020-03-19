//
// Created by Zhao,Hongyan on 2020/3/17.
//

#ifndef LEETCODE_EXCELSHEETCOLUMNNUMBER_H
#define LEETCODE_EXCELSHEETCOLUMNNUMBER_H

#endif //LEETCODE_EXCELSHEETCOLUMNNUMBER_H

#include <string>
using namespace std;
class Solution {
public:
    int titleToNumber(string s) {
        int res = 0;
        for(auto e : s){
            int i = e - 'A'  + 1;
            res = res * 26 + i;
        }
        return res;
    }
};