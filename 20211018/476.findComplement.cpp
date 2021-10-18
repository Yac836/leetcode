#include <bits/stdc++.h>
using namespace std;
int findComplement(int num) {
    bitset<33> a(num);
    std::string c = a.to_string();
    string rest = "";
    bool flag = true;
    for(auto i : c) {
        if ( i == '1') {
            rest = rest + "0";     
            flag = false;
        }
        else {
            if (flag) {
                continue;
            } 
            rest = rest + "1";     
        
        }
    }
    bitset<33> d(rest);
    return d.to_ulong();
}

int main() {

    findComplement(1);

    return 0;
}
