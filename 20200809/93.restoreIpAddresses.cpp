#include <vector>
#include <iostream>
#include <string>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>
using namespace std;
vector<string> res;
bool isValid(string ip){

    struct in_addr s;
    int valid = inet_pton(AF_INET,ip.c_str(),(void *)&s);
    return valid == 1;
}

void splitIp(string ip, string tmp, int seg){
    string aa = tmp;
    if(seg == 4){
        aa = aa + "." + ip;
        if(isValid(aa)){
            res.push_back(aa);
        }
    }
    else{
        for(int i = 1; i <= ip.size(); i++){
            string bb = ip.substr(0,i);
            if(aa == "")
                aa = bb;
            else 
                aa = aa + "." + bb;
            seg ++ ;
            splitIp(ip.substr(i),aa,seg);
            seg --;
            aa = tmp; 
        }
    }
}
vector<string> restoreIpAddresses(string s) {

    auto len = s.size();
    if(len >=4 && len <=12)
        splitIp(s,"",1);
    return res;

}
int main(){
    string s = "0000";
    auto z = restoreIpAddresses(s);
    for(auto e : z){
        cout << e << endl;
    }
    return 0;
}
