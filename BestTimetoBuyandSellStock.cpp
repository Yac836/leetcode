#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
int maxProfit(vector<int>& prices) {
	if (prices.size() <= 1)
		return 0;
	vector<int>::size_type index;
	int profit = 0;
	int tempProfit = 0;
	int min = prices[0];
	for (index = 1;index < prices.size();index++) {
		if (prices[index] > min) {
			tempProfit = prices[index] - min;
			if (tempProfit > profit)
				profit = tempProfit;
			
		}
		if (prices[index]<min) {
			min = prices[index];

		}
	}
	return profit;
}
int main() {
	vector<int> v = { 7, 6, 4, 3, 1 };
	cout << maxProfit(v);
	return 0;

}