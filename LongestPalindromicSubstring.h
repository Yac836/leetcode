//
// Created by Zhao,Hongyan on 2020/3/8.
//

#ifndef LEETCODE_LONGESTPALINDROMICSUBSTRING_H
#define LEETCODE_LONGESTPALINDROMICSUBSTRING_H

#endif //LEETCODE_LONGESTPALINDROMICSUBSTRING_H

#include <string>

using namespace std;

class Solution {
public:

    string longestPalindrome(string s) {
        string res = "";
        if (s.size() == 1) {
            return s;
        }
        for (int i = 0; i < s.size(); ++i) {
            string temp1 = ishuiwen(s, i, i);
            string temp2 = ishuiwen(s, i, i + 1);
            if (temp1.size() < temp2.size()) {
               temp1 = temp2;
            }
            res = res.size() > temp1.size()?res:temp1;
        }
        return res;
    }

    string ishuiwen(string s, int begin, int end) {
        size_t len = s.size();
        string res = "";
        while (begin >= 0 && end <= len - 1) {
            if (s[begin] == s[end]) {
                begin--;
                end++;
                res = s.substr(begin + 1, end - begin -1);
            } else {
                break;
            }
        }
        return res;
    }
};

