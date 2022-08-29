// My linear search.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	const int arraySize = 10; 
	int data[arraySize] = { 10, 12, 13, 14, 15, 12, 17, 18, 19 };
	int num;
	int indexFound; 

	cout << "Enter a number: ";
	cin >> num;

	// code for linear search
	// search for num in the array. If it finds it we want to know the index or location where the number is at, otherwise we return -1 meaning
	// the num is not in the array.
	indexFound = -1;		// assume number is not in the array 
	for (int i = 0; i < arraySize; i++) {
		if (data[i] == num) {
			indexFound = i;
			break;		// with break the first location where the number is at is returned. 
						// you exit the loop. thus your code is faster 
		}
		else {
			cout << "num is not in location " << i << "\n";
		}
	}

	if (indexFound == -1) {
		cout << num << " is not in the array\n";
	}
	else {
		cout << num << " is at location " << indexFound << "\n";
	}

	system("pause");
	return 0;
}