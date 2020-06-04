#include <bits/stdc++.h>

using namespace std;
int uniqueMorseRepresentations(vector<string>& words) {
    set<string> res;
    vector<string> v = {".-","-...","-.-.","-..",".","..-.","--.",
        "....","..",".---","-.-",".-..","--","-.","---",".--.",
        "--.-",".-.","...","-","..-","...-",
        ".--","-..-","-.--","--.."};
    map<char,string> m;
    for (int i = 0; i < 26; i++) {
        m['a'+i] = v[i];
    }
    for (auto i : words) {
        string tmp = "";
        for (auto e : i) {
            tmp += m[e];
        }
        res.insert(tmp);
    }

    return res.size();
}
int main(){

    return 0;
}
