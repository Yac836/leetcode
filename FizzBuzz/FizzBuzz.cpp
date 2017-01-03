#include <iostream>
#include <string>
#include <vector>
using namespace std;


vector<string> fizzBuzz(int n) {
	vector<string> res;
	int count = 1;
	while (count <= n) {
		if (count % 3 == 0 && count % 5 == 0)
			res.push_back("FizzBuzz");
		else if (count % 3 == 0)
			res.push_back("Fizz");
		else if (count % 5 == 0)
			res.push_back("Buzz");
		else
			res.push_back(to_string(count));
		count++;
	}
	return res;
}
int main() {
	vector<string> res = fizzBuzz(15);
	for (const auto e : res)
		cout << e << " ";
}