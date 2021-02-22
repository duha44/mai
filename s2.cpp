#include <iostream>
using namespace std;

int main() {
	int number, n, sum = 0;
	cout << "Write a number" << endl;
	cin >> number;
	
	while (number > 0) {
	sum = sum + number % 10;
	number = number / 10;
	n++;
	}
	
	cout << n << endl;
	cout << sum << endl;
}
