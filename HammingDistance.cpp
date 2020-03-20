#include <iostream>
#include <string>
#include <bitset>
using namespace std;


int hammingDistance(int x, int y) {
	bitset<32> temp(x ^ y);
	return temp.count();
	
}
int main() {

}