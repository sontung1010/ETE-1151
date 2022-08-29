// Lab 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Name:			Tung Do 
// Course:			ETE1151L-02
// Assignment:		Lab 11 
// Due date:		11/13/2019
// Description: 
//		write code to use function prototype 

#include <iostream>
using namespace std; 

#include "lab11_func.h"

int main()
{
	cout << "TUNG DO \n\n";

	int N;
	// 1) define array p to hold maximum of 100 integers
	int p[100];
	
	// 2) ask user to enter a value for N. N to be between 1 and 100
	do {
		cout << "Enter N numbers between 1 to 100: ";
		cin >> N;
	} while (N < 1 || N > 100);
	cout << "\n";

	// 3) call fill_array_with_random_numbers(p, N) to fill the array p with N random numbers 
	fill_array_with_random_nums(p, N);

	// 4) call print_array(p, N) to print the array p contents
	print_array(p, N);
	cout << "\n\n";

	// 5) call print_search_result(p, N) to print the search results
	print_search_result(p, N);
	cout << "\n\n";

	system("pause");
	return 0;
}