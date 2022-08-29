// function prototype.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// without function prototype my_maximum() function is not recognized

// function prototype
int my_maximum(int num1, int num2); 

int main()
{
	int num1, num2;

	cout << "Enter 2 integer numbers: ";
	cin >> num1 >> num2; 
	cout << "maximum(" << num1 << ", " << num2 << ") = " << my_maximum(num1, num2) << "\n";

	system("pause");
	return 0;
} // main()

// find maximum of 2 numbers
int my_maximum(int num1, int num2) {
	return (num1 > num2 ? num1 : num2);
}


