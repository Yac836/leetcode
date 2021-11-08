#include <bits/stdc++.h>

using namespace std;
string getHint(string secret, string guess) {

    unordered_map<int ,int> res;
    int a = 0;
    int b = 0;
    string tmp = "";
    for(int i = 0 ; i < guess.size(); i++) {
        if (guess[i] == secret[i]) {
            a++;
        }
        else {
            tmp = tmp + guess[i];
            res[secret[i]] ++;
        }
    }
    for (auto i : tmp) {
        if (res.find(i) != res.end()) {
            if(res[i] != 0) {
                b++;
                res[i]--;
            }
        }
    }

    return to_string(a) + "A" + to_string(b) + "B";
}
int main() {

    return 0;
}

