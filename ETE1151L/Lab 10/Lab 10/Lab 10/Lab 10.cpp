// Lab 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Name:			Tung Do 
// Course:			ETE1151L-02
// Assignment:		Project 10
// Due date:		11/6/2019
// Description:		
//		write code to put out array 

#include <iostream>
using namespace std;

void fill_array_user_data(int array1[], int N) {
	cout << "Enter the numbers: " << "\n";
	for (int i = 1; i <= N; i++) {
		cin >> array1[i];
	}
}

void print_array(int array1[], int N) {
	for (int i = 1; i <= N; i++) {
		cout << array1[i] << "\t";
		if (i % 5 == 0) {
			cout << "\n";
		}
	}
}

void scalar_multiply(int array1[], int array2[], int N, int c) {
	for (int i = 1; i <= N; i++) {
		array2[i] = array1[i] * c;
	}
}

int main()
{
	cout << "TUNG DO\n\n";

	int N;
	int c;
	// 1) define arrays p and q to hold maximum of 100 integers
	int p[100];
	int q[100];		

	// 2) ask user to enter a value N. N to be between 1 and 100
	do {
		cout << "Enter N numbers between 1 to 100: ";
		cin >> N;
	} while (N < 1 || N > 100);
	
	// 3) call fill_array_user_data(p, N) to fill the array p with N numbers from the user
	fill_array_user_data(p, N);
	cout << "\n";

	// 4) call print_array(p, N) to print the array p contents
	cout << "P array contents: \n";
	print_array(p, N);
	cout << "\n\n";

	// 5) ask user to enter a number for c between 1 to 10
	do {
		cout << "Enter number c between 1 and 10: ";
		cin >> c;
	} while (c < 1 || c > 10);
	cout << "\n";

	// 6) call scalar_multiply to multiply array p with c and store the result in array q
	scalar_multiply(p, q, N, c);

	// 7) print array q contents
	cout << "Q array contents: \n";
	print_array(q, N);
	cout << "\n\n";

	system("pause");
	return 0;
}