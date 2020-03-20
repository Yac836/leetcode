#include <iostream>
using namespace std;
int addDigits1(int num) {
	while (num >= 10) {
		num = (num / 10) + num % 10;
	}
	return num;
}
int addDigits2(int num) {
	return 1 + (num - 1) % 9;
}
int main() {
	int test = 38;
	cout << addDigits1(test);

}