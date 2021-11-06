#include <bits/stdc++.h>

using namespace std;
vector<string> findWords(vector<string> &words) {
    vector<string> ans;
    string rowIdx = "12210111011122000010020202";
    for (auto word : words) {
        bool isValid = true;
        char idx = rowIdx[tolower(word[0]) - 'a'];
        for (int  i = 1 ; i < word.size(); ++i) {
            if ( idx !=  rowIdx[tolower(word[i]) - 'a']) {
                isValid = false;
                break;
            }
        }
        if (isValid) {
            ans.emplace_back(word);
        }

    }
    return ans;
}
int main() {

    return 0;
}

