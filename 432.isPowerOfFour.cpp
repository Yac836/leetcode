#include <iostream>

using namespace std;

bool isPowerOfFour(int num){
	 return num > 0 && (num & (num - 1)) == 0 && num % 3 == 1;
}

int main(){
	cout << isPowerOfFour(5) << endl;
	cout << isPowerOfFour(16) << endl;
	
}
