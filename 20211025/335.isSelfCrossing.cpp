#include <bits/stdc++.h>

using namespace std;
bool isSelfCrossing(vector<int>& distance) {
    int n = distance.size();
    for (int i = 3; i < n; i++) {
        if (distance[i] >= distance[i - 2] && distance[i - 1] <= distance[i - 3]){
            return true;
        }
        if (i == 4 && 
                (distance[3]==distance[1]
                 && distance[4] >= distance[2] - distance[1])){
            return true;
        }
        if (i >= 5 && (distance[i - 3] - distance[i - 5] <= distance[i - 1]
                    && distance[i - 1] <= distance[i - 3]
                    && distance[i] >= distance[i - 2] - distance[i - 4]
                    && distance[i - 2] > distance[i - 4])) {
            return true;
        }

    }

    return false;
}

int main() {

    return 0;
}

