// review.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double max;
	double min;
	double secmax;
	double a, b, c;
	cin >> a >> b >> c;
	if ((a >= b) && (a >= c)) {
		if (b > c) {
			cout << "c is the smallest\n";
			cout << "b is the second smallest\n";
		}
		else {
			cout << "b is the smallest\n";
			cout << "c is the second smallest\n";
		}
		cout << "a is the third smallest\n";
	}

	if ((c >= a) && (c >= b)) {
		if (a > b) {
			cout << "b is the smallest\n";
			cout << "a is the second smallest\n";
		}
		else {
			cout << "a is the smallest\n";
			cout << "b is the second smallest\n";
		}
		cout << "c is the third smallest\n";
	}

	if ((b >= c) && (b >= a)) {
		if (a > c) {
			cout << "c is the smallest\n";
			cout << "a is the second smallest\n";
		}
		else {
			cout << "a is the smallest\n";
			cout << "c is the second smallest\n";
		}
		cout << "b is the third smallest\n";
	}
	
}

