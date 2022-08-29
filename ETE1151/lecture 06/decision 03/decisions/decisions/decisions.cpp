// decisions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num;
	bool xx;

	cout << "enter a num: ";
	cin >> num;

	xx = (num > 20);
	if (xx == true) {
		cout << "hello";
	}
	else {
		cout << "hi\n";
	}

	if (2) {				// nonzero value evalues to true
		cout << "my friend\n";
	}
	else {
		cout << "my enemy\n";
	}

	if (0) {				// zero value evalues to false
		cout << "BOY\n";
	}
	else {
		cout << "GIRL\n";
	}

}