// default argument.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// in function below
// argument num1 is mandatory 
// arguments num2, num3, num4 have default values 
// ALl default arguments must be last in the argument list 
int add_numbers(int num1, int num2 = 1, int num3 = 2, int num4 = 3) {
	return (num1 + num2 + num3 + num4);
}

int main()
{
	cout << "add_numbers(10) = " << add_numbers(10) << "\n";	// 10 + 1 + 2 + 3
	cout << "add_numbers(10, 20) = " << add_numbers(10, 20) << "\n";	// 10 + 20 + 2 + 3

	// following is not allowed 
	// add_numbers(10, , 30);
	cout << "add_numbers(10,1,30) = " << add_numbers(10, 1, 30) << "\n";	//10 + 1 + 30 + 3
	cout << "add_numbers(10,1,30) = " << add_numbers(10, 1, 30) << "\n";	//10 + 1 + 30 + 3
	cout << "add_numbers(10,20,30,40) = " << add_numbers(10, 20, 30, 40) << "\n";	// 100

	
	system("pause");
	return 0;
}