// Lab 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Name:				Tung Do 
// Course:				ETE1151L-02
// Assignment:			Lab 12
// Due date:			11/13/2019
// Description:		
//		write code to use recursion, passing pointers and references to functions

#include <iostream>
using namespace std;

int product(int m, int n) {
	if (n == 1) {
		return m;
	}
	else {
		return m * (n - 1) + m;
	}
}

void sum(double* aPtr, double* bPtr, double* cPtr) {
	double a_copy, b_copy, c_copy;
	a_copy = *aPtr;
	b_copy = *bPtr;
	c_copy = *cPtr;
	*aPtr = b_copy + c_copy;
	*bPtr = a_copy + c_copy;
	*cPtr = b_copy + a_copy;
}

void order(double& a, double &b, double &c) {
	double temp;
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	if (a > c) {
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c) {
		temp = b;
		b = c;
		c = temp;
	}
}

int main()
{
	cout << "TUNG DO\n\n"; 

	cout << "===== Step 1: call product() that uses recursion =====\n";
	int m;
	int n;
	cout << "Enter m, n: ";
	cin >> m >> n;
	cout << "product(" << m << ", " << n << ") = " << product(m, n) << "\n\n";

	cout << "===== Step 2: call sum() that uses pointers =====\n";
	double a;
	double b;
	double c;
	double* aPtr;
	double* bPtr;
	double* cPtr;
	cout << "Enter a, b, c: ";
	cin >> a >> b >> c;
	cout << "a = " << a << ", b = " << b << ", c = " << c << "\n";
	sum(&a, &b, &c);
	cout << "After call to sum(): a = " << a << ", b = " << b << ", c = " << c << "\n\n";
	
	cout << "===== Step 3: call order() that uses references =====\n";
	for (int i = 0; i < 6; i++) {
		cout << "Enter a, b, c: ";
		cin >> a >> b >> c;
		cout << "a = " << a << ", b = " << b << ", c = " << c << "\n";
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
		order(a, b, c);
		cout << "After call to order(): a = " << a << ", b = " << b << ", c = " << c << "\n\n";
	}
	
	system("pause");
	return 0;
}