// condition.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 

// Name:			Tung Do 
// Course:			ETE1151L-02
// Assignment:		Project 05
// Due date:		10/2/2019 
// Description: 
//			write code to print a function nicely 

#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	double abs_b, abs_c; 
	
	cout << "Enter a, b and c: ";
	cin >> a >> b >> c;

	cout << "f(x) = "; 

	if (a == 0) {
		;
	}
	else {
		if (a == 1) {
			;
		}
		else if (a == -1) {
			cout << " - ";
		}
		else {
			cout << a;
		}
		cout << "x^2";
	}

	if (a == 0) {
		if (b == 0) {
			;
		}
		else {
			if (b == 1) {
				;
			}
			else if (b == -1) {
				cout << " - ";
			}
			else if (b >= 0) {
				cout << b;
			}
			else if (b <= 0) {
				abs_b = (-1) * b;
				cout << " - " << abs_b;
			}
			cout << "x";
		}
	}

	else {
		if (b == 0) {
			;
		}
		else {
			if (b == 1) {
				cout << " + ";
			}
			else if (b == -1) {
				cout << " - ";
			}
			else if (b >= 0) {
				cout << " + " << b;
			}
			else if (b <= 0) {
				abs_b = (-1) * b;
				cout << " - " << abs_b;
			}
			cout << "x";
		}
	}

	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				cout << "0\n";
			}
			else if (c >= 0) {
				cout << c << "\n";
			}
			else {
				abs_c = (-1) * c;
				cout << " - " << abs_c << "\n";
			}
		}
		else {
			if (c == 0) {
				cout << "\n";
			}
			else if (c >= 0) {
				cout << " + " << c << "\n";
			}
			else {
				abs_c = (-1) * c;
				cout << " - " << abs_c << "\n";
			}
		}
	}
	else if (b == 0) {
		if (c == 0) {
			cout << "\n";
		}
		else if (c >= 0) {
			cout << " + " << c << "\n";
		}
		else {
			abs_c = (-1) * c;
			cout << " - " << abs_c << "\n";
		}
	}
	else if (b != 0) {
		if (c == 0) {
			cout << "\n";
		}
		else if (c >= 0) {
			cout << " + " << c << "\n";
		}
		else {
			abs_c = (-1) * c;
			cout << " - " << abs_c << "\n";
		}
	}

			

	system("pause");
	return 0;
}


