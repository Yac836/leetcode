//
// Created by zhaohongyan on 2020/10/14.
//


#include <bits/stdc++.h>
using namespace std;

vector<string> commonChars(vector<string>& A) {
    vector<string> res;
    map<char,int> cnt;
    map<char,int> aa;
    for(auto i  : A[0]){
        cnt[i] ++ ;
        aa[i] = 1;
    }
    for(int i = 1; i < A.size(); i++){
        map<char,int> tmp;
        for(auto e : A[i]){
            tmp[e]++;
        }
        if(cnt.size()> tmp.size()){
            for(auto e : tmp){
                if(cnt.count(e.first)){
                    cnt[e.first] = min(cnt[e.first],e.second);
                    aa[e.first] ++ ;
                }
            }
        }
    }
    for(auto i : cnt){
        if(aa[i.first] == A.size()){
            string tmp = "";
            tmp = tmp + i.first;
            res.emplace_back(tmp);
        }

    }
    return res;
}

int main(){
    vector<string> a = {"bella","label","roller"};
    commonChars(a);
}