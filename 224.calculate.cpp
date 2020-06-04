#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;
string aa(string aa);
int calculate(string s) {
    std::stack<char> num;
    string b = "";
    for(auto e : s){
        if(e != ')' && e != ' ') {
            num.push(e);
        }
        else if(e == ' '){

        }
        else{
            while( !num.empty() && num.top() != '(' ){
                auto t = num.top();
                b = b + t;
                num.pop();
            }
            if(!num.empty()){
                num.pop();
            }
            reverse(b.begin(),b.end());
            string tmp = aa(b);
            for(auto i : tmp) {
                num.push(i);
            }
            b = "";
        }
    }
    while(!num.empty()){
        b = b + num.top();
        num.pop();
    }
    reverse(b.begin(),b.end());
    string tmp = aa(b);
    return atoi(tmp.c_str());

}
string aa(string s){
    unsigned int sum = 0;
    unsigned int tmp = 0;
    char op = '#' ;
    for(auto e : s){
        if(isdigit(e)){
            tmp = tmp * 10 + e - '0';
        }
        else {
            if(op == '#' ) {
                sum = sum + tmp;
            }
            else{
                if(op == '-') {
                    sum = sum -tmp;
                }
                else{
                    sum = sum + tmp;
                }
            }
            tmp = 0;
            op = e;
        }

    }
    if(tmp != 0) {
            if(op == '-') {
                sum = sum - tmp;
            }
            else {
                sum = sum + tmp;
            }
        }

        return to_string(sum);
}
int main(){
    cout << calculate("1-(2+3)") <<endl;
    return 0;
}

