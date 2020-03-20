#include <iostream>
using namespace std;
bool canWinNim(int n) {

	return n % 4 == 0 ? 0 : 1;
}
int main() {
	int test = 4;
	cout << canWinNim(5);
	
}