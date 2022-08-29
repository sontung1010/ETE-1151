// Dynamic Memory Management.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int size;

	cout << "Enter number of elements to create dynamically: ";
	cin >> size;

	// if person typed 100, we want to create an array that will hold 100 elements
	int* numArrayPtr = new int[size];
	for (int i = 0; i < size; i++) {
		numArrayPtr[i] = i * 10;
	}

	// print array
	for (int i = 0; i < size; i++) {
		cout << numArrayPtr[i] << " ";
	} 
	cout << "\n";

	delete numArrayPtr;			// release the memory

	cout << "=======================================================\n";
	cout << "Enter number of elements to create dynamically: ";
	cin >> size;

	// if person typed 100, we want to create an array that will hold 100 elements
	numArrayPtr = new int[size];
	for (int i = 0; i < size; i++) {
		numArrayPtr[i] = -i * 10;
	}

	// print array
	for (int i = 0; i < size; i++) {
		cout << numArrayPtr[i] << " ";
	}
	cout << "\n";

	delete numArrayPtr;			// release the memory

	system("pause");
	return 0;
}