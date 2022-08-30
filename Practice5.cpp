#include <iostream>
using namespace std;

int numOdds(int n);

void Practice5() {
	int yourNumber;
	cout << "Enter a positive integer" << endl;
	cin >> yourNumber;
	cout << "The number of odd numbers lower than your int is " << numOdds(yourNumber) << endl;
}

int numOdds(int n) {
	int count = 0;
	for (int i = n; i > 0; i--) {
		if (i % 2 == 1) {
			count++;
		}
	}
	return count;
}