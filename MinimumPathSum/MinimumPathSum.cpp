#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int moveStep(vector<vector<int>>& grid, int m, int n) {
	int row = grid.size();
	int col = grid[0].size();
	int a = 0;
	int b = 0;
	if (row == m && col == n)
		return grid[m - 1][n - 1];
	if (m < row && n < col) {
		 a = moveStep(grid, m + 1, n);
		 b = moveStep(grid, m, n + 1);
		 if (a > b)
			 a = b;
	
	}
	else if(m < row && n == col) {
		a = moveStep(grid, m + 1, n);
		
		
	}
	else if (m == row && n < col) {
		a = moveStep(grid, m, n + 1);
	
	}
	
		
	return grid[m - 1][n - 1] + a;

}

int minPathSum1(vector<vector<int>>& grid) {
	int b = 1;
	int a = moveStep(grid, b, b);

	return a;
}
int minPathSum2(vector<vector<int> > &grid) {
	if (grid.size() == 0)
		return 0;
	vector<vector<int>> res(grid);
	int i, j;
	for (int j = 1; j<res[0].size(); ++j) {
		res[0][j] += res[0][j - 1];
	}
	for (int j = 1; j<res.size(); ++j) {
		res[j][0] += res[j - 1][0];
	}
	for (i = 1; i<res.size(); ++i) {
		for (int j = 1; j<res[i].size(); ++j) {
			res[i][j] = min(res[i - 1][j], res[i][j - 1]) + grid[i][j];
		}
	}
	return res[grid.size() - 1][grid[0].size() - 1];    
}
int main() {
	//vector<vector<int>> a = { {1,2,3},{4,5,6},{7,8,9} };
	vector<vector<int> > a(4, vector<int>(4));


	// π”√ø’º‰  
	for (int j = 0;j < 4;j++)
		for (int k = 0;k< 4;k++)
			a[j][k] = rand() % 10;
	cout << "[";
	int i = 1;
	for (auto e : a) {
		cout << "[";
		for (auto le : e) {
			if(i != 4)
				cout << le << ",";
			else 
				cout << le;
			i++;
		}
		cout << "],";
		i = 1;
	}
	cout << "]"<<endl;
	cout << minPathSum1(a);
}