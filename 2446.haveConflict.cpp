#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool haveConflict(vector<string> &event1, vector<string> &event2) {
        if (event1[0] > event2[1] || event1[1] < event2[0]) {
            return false;
        }
        return true;
    }
};
int main() {
    return 0;
}