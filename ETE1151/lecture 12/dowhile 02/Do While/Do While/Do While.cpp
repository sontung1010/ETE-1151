// Do While.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int choice;

	// ask the user to pick what type of math they want to do 
	// if user entery is not correct then print invalid choice
	// and ask the question again

	do {
		cout << "What math do you want to do 1(+) 2(-) 3(*): ";
		cin >> choice;

		if ((choice < 1) || (choice > 3)) {
		cout << "Not valid choice\n";
		}

	} while ((choice < 1) || (choice > 3));

	system("pause");
	return 0;
}

