// subtotal and average.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 


// Name:					Tung Do 
// Course:					ETE1151L-02
// Assignment:				Project 6 
// Due date:				10/09/2019
// Description: 
//		write code to take subtotal and average of Fibonacci 

#include <iostream>
using namespace std;

int main()
{
	int N;
	int a;
	int sum;
	int b;
	char name;

	cout << "TUNG DO\n\n";

	cout << "Enter N: ";
	cin >> N;
	cout << "\n";
	sum = 0;
	for (a = 0; a <= N; ++a) {
		b = a * a;
		sum = sum + b;
	}
	cout << "Sum square of 1 to " << N << " = " << sum << "\n";


	cout << "===============================================================\n";
	cout << "\n";

	int f1;
	int f2;
	int fN;
	double average;

	cout << "Enter N (N >= 2): ";
	cin >> N;
	cout << "\n";
	cout << "First " << N << " Fibonacci numbers are: \n";
	f1 = 1;
	f2 = 1;
	sum = f1 + f2;
	cout << "F(1) = " << f1 << "\n";
	cout << "F(2) = " << f2 << "\n";
	for (a = 3; a <= N; ++a) {
		fN = f1 + f2;
		cout << "F(" << a << ") = " << fN << "\n";
		sum = fN + sum;
		f1 = f2;
		f2 = fN;
	}
	average = (double) sum / (double) N;
	cout << "\n";
	cout << "Sum of the first " << N << " Fibonacci numbers = " << sum << "\n";
	cout << "Average of the first " << N << " Fibonacci numbers = " << average << "\n";

	
	system("pause");
	return 0;
}


