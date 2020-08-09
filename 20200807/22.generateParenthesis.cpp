#include <bits/stdc++.h>
using namespace std;
vector<string> res;
bool isvalid(string str){
    int balance = 0;
    for(auto e : str){
        if(e == '('){
            balance ++;
        }
        else{
            balance --;
            if(balance < 0){
                return false;
            }
        }
    }
    return balance == 0;

}
void gen(string &tmp, int n){
    if(n==0){
        if(isvalid(tmp)){
            res.push_back(tmp);
        }
    }
    else{
    
        tmp = tmp + '(';
        gen(tmp,n-1);
        tmp.pop_back();
        tmp = tmp + ')';
        gen(tmp,n-1);
        tmp.pop_back();
    }
}
vector<string> generateParenthesis(int n) {
    string tmp = "";
    gen(tmp,n * 2);
    return res;
}
int main(){
    generateParenthesis(3);
    for(auto e : res){
        cout << e << endl;
    }
    cout << "123" << endl;
    return 0;
}


