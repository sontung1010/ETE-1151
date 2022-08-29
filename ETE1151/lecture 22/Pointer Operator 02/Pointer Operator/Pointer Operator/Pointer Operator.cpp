// Pointer Operator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double squareByValue(double x) {
	x = x * x;
	return x;
}

double squareByReference(double& x) {
	x = x * x;
	return x;
}

double squareByPointer(double* xPtr) {
	*xPtr = *xPtr * *xPtr;
	return *xPtr;
}

int main()
{
	int count = 5;
	int *countPtr = &count;		// put address of the count into countPtr

	double x = 1.3;
	double *xPtr;

	xPtr = &x;		// put address of the x into xPtr
														// value of x is 1.3
	cout << "Address of x = " << &x << "\n";			// value of &x is the address of x 
	cout << "Value of xPtr = " << xPtr << "\n";			// value of xPtr is the address of x (value of a pointer is an address)
	cout << "Adress of xPtr = " << &xPtr << "\n";		// value of &xPtr is the address of xPtr
														// value of *xPtr is value of x
	cout << "Address of count = " << &count << "\n";
	cout << "Value of countPtr = " << countPtr << "\n";
	cout << "Adress of countPtr = " << &countPtr << "\n";

	cout << "count = " << count << "\n";
	cout << "*countPtr = " << *countPtr << "\n";		// dereference

	cout << "use dereferencing to change value of count\n";
	*countPtr = 10;
	cout << "count = " << count << "\n";
	cout << "*countPtr = " << *countPtr << "\n";

	// * and & are inverses of each other (cancel each other out)
	cout << "*&countPtr = \t" << *&countPtr << "\n";
	cout << "Value of countPtr = " << countPtr << "\n";
	cout << "&*countPtr = \t" << &*countPtr << "\n";

	cout << "===========================\n";
	x = 10.0;
	cout << "before: x = " << x << "\n";
	cout << "squareByValue returns " << squareByValue(x) << "\n";
	cout << "after squareByValue call: x = " << x << "\n";

	x = 10.0;
	cout << "before: x = " << x << "\n";
	cout << "squareByReference returns " << squareByReference(x) << "\n";
	cout << "after squareByReference call: x = " << x << "\n";

	x = 10.0;
	cout << "before: x = " << x << "\n";
	cout << "squareByPointer returns " << squareByPointer(&x) << "\n";
	cout << "after squareByPointer call: x = " << x << "\n";

	system("pause");
	return 0;
}