#include <iostream>
#include <vector>
#include <stack>

using namespace std;
int largestRectangleArea(vector<int>& heights) {
	if (heights.size() == 0) return 0;
	stack<int> st;
	int MAX = 0;
	heights.push_back(0);
	int leftarea = 0, rightarea = 0;
	for (int i = 0; i < heights.size(); ++i) {
		while (!st.empty() && heights[st.top()] > heights[i]) {
			int tmp = st.top();
			st.pop();
			leftarea = (st.empty() ? tmp + 1 : tmp - st.top()) * heights[tmp]; //��tmpΪ�߶ȣ�tmp�������Լ�������������ľ������
			rightarea = (i - tmp - 1) * heights[tmp]; //��tmpΪ�߶ȣ����ұ���������ľ������
			if ((leftarea + rightarea) > MAX) MAX = (leftarea + rightarea);
		}
		st.push(i);
	}
	return MAX;

}

int main() {
	vector<int> a{ 2, 1, 5, 6, 2, 3 };
	cout << largestRectangleArea(a);
}