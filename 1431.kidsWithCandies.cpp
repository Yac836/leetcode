#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    auto maxPos = max_element(candies.begin(),candies.end());
    auto maxVale= *maxPos;
    vector<bool> res;
    for(auto e : candies){
        if(e + extraCandies >= maxVale) {
            res.push_back(true);
        }
        else{
            res.push_back(false);
        }

    }
    return res;
}
int main(){

    return 0;
}
