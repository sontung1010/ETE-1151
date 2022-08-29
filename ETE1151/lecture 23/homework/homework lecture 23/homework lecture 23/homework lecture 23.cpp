// homework lecture 23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Name:			Tung Do 
// Course:			ETE1151-02
// Assignment:		homework
// Due date:		11/25/2019
// Description:		
//		write code using function and pointers

#include <iostream>
using namespace std;

void swapByReference(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swapByPointer(int *aPtr, int *bPtr) {
	int temp;
	temp = *aPtr;
	*aPtr = *bPtr;
	*bPtr = temp;
}

int main()
{
	cout << "TUNG DO \n\n";

	int a, b;
	cout << "Enter a and b: ";
	cin >> a >> b;
	cout << "a = " << a << ", b = " << b << "\n";
	swapByReference(a, b);
	cout << "After the call to swapByReference: a = " << a << ", b = " << b << "\n\n";

	cout << "Enter a and b: ";
	cin >> a >> b;
	cout << "a = " << a << ", b = " << b << "\n";
	swapByPointer(&a, &b);
	cout << "After the call to swapByPointer: a = " << a << ", b = " << b << "\n\n";
	
	system("pause");
	return 0;
}