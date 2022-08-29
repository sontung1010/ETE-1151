// decision 02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int user_entry;			// holds an integer
	char ch;			// holds a single character
	double x;			// double precision real number
	float y;			// single precision real number
	bool b1;			// boolean variable it holds true or false 

	cout << "======================\n";
	cout << "Enter a number: ";
	cin >> user_entry;
	if (user_entry) {
		cout << "User entered a non-zero number\n";
	}
	else {
		cout << "User enter 0\n";
	}

	cout << "======================\n";
	cout << "Enter a number: ";
	cin >> user_entry;
	/*if (user_entry < 0) {
		ch = '-';
	}
	else {
		ch = '+';
	}*/

	ch = (user_entry < 0) ? '-' : '+';
	cout << "ch sign = " << ch << "\n";

	cout << "Please type a number (0=ch) (1=int) (2=float) (3=double)"
		<< " (4=boolean): ";
	cin >> user_entry;

	if (user_entry == 0) {
		cout << "You want to learn about character\n";
		cout << "size of 1 character = " << sizeof(char) << "\n";
	} else if (user_entry == 1) {
		cout << "You want to learn about character\n";
		cout << "size of 1 int = " << sizeof(int) << "\n";
	} else if (user_entry == 2) {
		cout << "You want to learn about character\n";
		cout << "size of 1 float = " << sizeof(float) << "\n";
	} else if (user_entry == 3) {
		cout << "You want to learn about character\n";
		cout << "size of 1 double = " << sizeof(double) << "\n";
	} else if (user_entry == 4) {
		cout << "You want to learn about character\n";
		cout << "size of 1 boolean = " << sizeof(bool) << "\n";
	} else {
		cout << "Unknown type\n";
	}

	/*if (100) {
		cout << "a nonzero condition is always true\n";
	}

	if (0) {
		cout << "0 means false. This line does not get printed\n";
	}
	else {
		cout << "This line will be printed\n";
	}*/

	

	system("pause");
	return 0;
}

