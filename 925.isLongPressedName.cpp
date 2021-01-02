#include <utility>
#include <bits/stdc++.h>
using namespace std;
bool mycomparer(std::pair<char, int> lhs, std::pair<char, int> rhs) {

    if (lhs.first == rhs.first && lhs.second > rhs.second) {
        return true;
    }
    else {
        return false;
    }
}
bool isLongPressedName(string name, string typed) {

    vector<pair<char,int> > tmp1;
    vector<pair<char,int> > tmp2;
    char t = name[0];
    int sum = 0;
    for(char e : name){
        if(t != e){
            tmp1.emplace_back(t,sum);
            t = e;
            sum = 1;
        }
        else{
            sum ++;
        }

    }
    tmp1.emplace_back(t,sum);
    sum = 0;
    t = typed[0];
    for(auto e : typed){
        if(t != e){
            tmp2.emplace_back(t,sum);
            t = e;
            sum = 1;
        }
        else{
            sum ++;
        }

    }
    tmp2.emplace_back(t,sum);
    if(tmp1.size() != tmp2.size()){
        return false;
    }
    for (int i = 0; i < tmp1.size(); ++i) {
      auto a = tmp1[i];
      auto b = tmp2[i];
      if(!(a.first == b.first && a.second <= b.second)){
          return  false;
      }
    }
    return true;

}

int main(){

    string name = "kikcxmvzi";
    string type = "kiikcxxmmvvzz";
    cout << isLongPressedName(name,type);
}
