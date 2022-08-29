// array example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void fill_matrix(int a[3][4], int numrows, int numcols) {
	for (int i = 0; i < numrows; i++) {
		cout << "Enter " << numcols << " numbers for row " << i << ": ";
		for (int j = 0; j < numcols; j++) {
			cin >> a[i][j];
		}
		cout << "\n";
	}
}

void print_matrix(int a[3][4], int numrows, int numcols) {
	for (int i = 0; i < numrows; i++) {
		for (int j = 0; j < numcols; j++) {
			cout << a[i][j] << "\t";
		}
		cout << "\n";
	}
}

int main()
{
	const int rows = 3;
	const int columns = 4;
	int a1[rows][columns];

	fill_matrix(a1, rows, columns);
	print_matrix(a1, rows, columns);

	cout << "===========================================\n";

	int a2[rows][columns] = {
	{1, 9, 4, -2},		// row 0
	{8, 0, 3, 2},		// row 1
	{5, 11, 12, 21}  	// row 2 
	};

	print_matrix(a2, rows, columns);

	cout << "===========================================\n";
	print_matrix(a2, 2, 3);
	 

	system("pause");
	return 0;
}