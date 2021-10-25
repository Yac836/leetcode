#include <bits/stdc++.h>
using namespace std;


map<vector<int>, int> memo;
int dfs(vector<int> price,const vector<vector<int>> & special, vector<int> curNeeds, vector<vector<int>> & filterSpecial, int n) {
    if(!memo.count(curNeeds)) {
        int minPrice = 0;
        for (int i = 0; i < n; ++i) {
            minPrice += curNeeds[i] * price[i];
        }
        for (auto & curSpecial : filterSpecial) {
            int specialPrice = curSpecial[n];
            vector<int> nextNeeds;
            for (int i = 0; i < n; ++i) {
                if (curSpecial[i] > curNeeds[i]) {
                    break;
                }
                nextNeeds.emplace_back(curNeeds[i] - curSpecial[i]);
            }
            if (nextNeeds.size() == n) {
                minPrice = min(minPrice, dfs(price, special, curNeeds, filterSpecial, n) + specialPrice);
            }
        }
        memo[curNeeds] = minPrice;
    }
    return memo[curNeeds];
} 

int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs) { 

    int n = price.size();
    vector<vector<int>> filterSpecial;
    for (auto &sp : special) {
        int totalCount = 0, totalPrice = 0;
        for (int i = 0; i < n ; i++) {
            totalCount += sp[i];
            totalPrice += sp[i] * price[i];
        }
        if (totalCount > 0 && totalPrice > sp[n]) {
            filterSpecial.emplace_back(sp);
        }
    }
    return dfs(price, special, needs, filterSpecial, n);
}

int main() {


    return 0;
}
