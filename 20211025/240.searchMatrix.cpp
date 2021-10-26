#include <bits/stdc++.h>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if (matrix.size() == 0) {
        return 0;
    }
    int i = 0, j = matrix[0].size() - 1;
    int row = matrix.size();
    while (i < row && j >= 0) {
        if (matrix[i][j] == target) {
            break;
        }
        else if (matrix[i][j] < target) {
            i++;
        }
        else {
            j--;
        }
    } 
    return (i < row && j >=0)? true:false;
}
int main() {

    return 0;
}

