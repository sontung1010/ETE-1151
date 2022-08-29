// homework due 10212019.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Name:			Tung Do 
// Course:			ETE1151-02
// Assignment:		Project 01
// Due date:		10/23/2019
// Description: 
//		Write code to get the maximum number from random input number

#include <iostream>
using namespace std;

int main()
{
	int N;
	int num;
	int max;

	cout << "TUNG DO\n\n";
	cout << "Enter N: ";
	cin >> N;
	cout << "Enter num: ";
	cin >> num;
	max = num;
	for (int i = 1; i < N; i++) {
		cout << "Enter num: ";
		cin >> num;
		if (num > max) {
			max = num;
		}
	}
	cout << "\nMax = " << max;
}

