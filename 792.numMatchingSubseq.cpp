#include <bits/stdc++.h>
using namespace std;

int numMatchingSubseq(string s, vector<string> &words) {
    vector<vector<int>> pos(26);
    for (int i = 0; i < s.size(); i++) {
        pos[s[i] - 'a'].push_back(i);
    }
    int res = words.size();
    for (auto &w : words) {
        if (w.size() > s.size()) {
            --res;
            continue;
        }
        int p = -1;
        for (char c : w) {
            auto &ps = pos[c - 'a'];
            auto it = upper_bound(ps.begin(), ps.end(), p);
            if (it == ps.end()) {
                --res;
                break;
            }
            p = *it;
        }
    }
    return res;
}
int main() {
    vector<string> tmp{"a", "bb", "acd", "ace"};
    string word = "abcde";
    cout << numMatchingSubseq(word, tmp) << endl;
    return 0;
}