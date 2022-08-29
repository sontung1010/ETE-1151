// homework due 10.30.201.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Name:			Tung Do 
// Course:			ETE1151-02
// Assignment:		Homework 5
// Due date:		10/30/2019
// Description:		
//		write code to generate 2 matrices 

#include <iostream>
#include <string>
using namespace std;

void fill_matrix(string s, int x[2][3], int i, int j) {
	for (i = 0; i < 2; i++) {
		cout << "Enter values of " << s << " : ";
		for (j = 0; j < 3; j++) {
			cin >> x[i][j];
		}
		cout << "\n";
	}
}

void print_matrix(string s, int x[2][3], int i, int j) {
	cout << s << "\n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			cout << x[i][j] << "\t";
		}
		cout << "\n";
	}
}

void sum_matrix(int x[2][3], int y[2][3], int sum[2][3], int i, int j) {
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			sum[i][j] = x[i][j] + y[i][j];
		}
		cout << "\n";
	}
}


int main()
{
	cout << "TUNG DO\n\n";

	int const rows = 2;
	int const columns = 3;
	int a[rows][columns];
	int b[rows][columns];
	int sum[rows][columns];

	fill_matrix("a", a, rows, columns);
	fill_matrix("b", b, rows, columns);

	print_matrix("Matrix a", a, rows, columns);
	cout << "\n";
	print_matrix("Matrix b", b, rows, columns);
	sum_matrix(a, b, sum, rows, columns);
	print_matrix("Sum of 2 matrix", sum, rows, columns);
	cout << "\n";

	system("pause");
	return 0;
}