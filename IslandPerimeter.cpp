#include <iostream>
#include <vector>

using namespace std;

int islandPerimeter(vector<vector<int>>& grid) {
	if (grid.empty())
		return 0;
	vector<int>::size_type height = grid.size(), width = grid[0].size();
	vector<int>::size_type w = 0, h = 0;
	int island = 0, rd = 0;
	for(;h < height;h++ )
		for (w = 0;w < width;w++) {
			if (grid[h][w] == 1) {
				island++;
				if (h < height - 1 && grid[h + 1][w] == 1)
					rd++;
				if (w < width - 1 && grid[h][w + 1] == 1)
					rd++;
			}
		}
	return island * 4 - 2 * rd;
}

int main(){
	vector<vector<int>> test = { { 0,1,0,0 },{ 1,1,1,0 },{ 0,1,0,0 },{ 1,1,0,0 } };
	cout << islandPerimeter(test);
}