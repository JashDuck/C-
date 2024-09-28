#include <iostream>
#include "utilities.cpp"

using namespace std;

int main() {
	double num = 0.0;
	double result = 0.0;

	cout << "Enter a Number : \n";

	Utilities u;
	while (true) {
		if (u.isNum(num) < 0) cout << 'Try again: \n';
		else break;
	}

	for (int i = 0; i < num; i++) {
		cout << i << endl;
		result += i;
	}

	cout << 'The sum is ' << result << endl
}