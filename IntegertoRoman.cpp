#include <iostream>
#include <string>

using namespace std;
string intToRoman(int num) {
	string romanDict[][10] = {
		{ "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" },
		{ "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" },
		{ "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" },
		{ "", "M", "MM", "MMM", "", "", "", "", "", "" },
	};
	return romanDict[3][num / 1000] +
		romanDict[2][num % 1000 / 100] +
		romanDict[1][num % 100 / 10] +
		romanDict[0][num % 10];

}
int main() {
	cout << intToRoman(3333);
}