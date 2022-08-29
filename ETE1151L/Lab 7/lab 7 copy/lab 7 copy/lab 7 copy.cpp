// lab 7 copy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Name:			Tung Do 
// Course:			ETE1151L-02
// Assignment:		Project 6 
// Description: 
//		write code to generate random mathematic problems

#include <iostream>
using namespace std;

int main()
{
	cout << "TUNG DO\n";

	unsigned seed;
	cout << "\nEnter seed value: ";
	cin >> seed;
	srand(seed);

	int mathproblem;
	int choice;
	int num1;
	int num2;
	int sum;
	int difference;
	int product;
	int result;
	int z;
	int wrongCount;
	int rightCount;
	double H;

	wrongCount = 0;
	rightCount = 0;

	cout << "\nEnter number of math problems to solve: ";
	cin >> mathproblem;

	for (int a = 1; a <= mathproblem; a++) {
		do {
			cout << "\nEnter (0=addition, 1=subtraction, 2=multiplication): ";
			cin >> choice;

			if ((choice < 0) || (choice > 2)) {
				cout << "You entered " << choice << ". Wrong choice.\n";
			}
			else {
				for (int b = 0; b < 1; b++) {
					num1 = rand() % 10;
					num2 = rand() & 10;
				}
				switch (choice) {
				case 0:
					sum = num1 + num2;
					cout << num1 << " + " << num2 << " = ";
					cin >> result;
					if (sum == result) {
						rightCount++;
						for (int c = 0; c < 1; c++) {
							z = rand() % 4;
						}
						switch (z) {
						case 0:
							cout << "Good Job\n";
							break;
						case 1:
							cout << "I am proud of you\n";
							break;
						case 2:
							cout << "That is fantastic\n";
							break;
						case 3:
							cout << "You are so good at this\n";
							break;
						}
					}
					else {
						wrongCount++;
						for (int c = 0; c < 1; c++) {
							z = rand() % 3;
						}
						switch (z) {
						case 0:
							cout << "Not quite right\n";
							break;
						case 1:
							cout << "You can do it, try it again\n";
							break;
						case 2:
							cout << "A little off\n";
							break;
						}
					}
					break;
				case 1:
					difference = num1 - num2;
					cout << num1 << " - " << num2 << " = ";
					cin >> result;
					if (difference == result) {
						rightCount++;
						for (int c = 0; c < 1; c++) {
							z = rand() % 4;
						}
						switch (z) {
						case 0:
							cout << "Good Job\n";
							break;
						case 1:
							cout << "I am proud of you\n";
							break;
						case 2:
							cout << "That is fantastic\n";
							break;
						case 3:
							cout << "You are so good at this\n";
							break;
						}
					}
					else {
						wrongCount++;
						for (int c = 0; c < 1; c++) {
							z = rand() % 3;
						}
						switch (z) {
						case 0:
							cout << "Not quite right\n";
							break;
						case 1:
							cout << "You can do it, try it again\n";
							break;
						case 2:
							cout << "A little off\n";
							break;
						}
					}
					break;
				case 2: 
					product = num1 * num2;
					cout << num1 << " * " << num2 << " = ";
					cin >> result;
					if (product == result) {
						rightCount++;
						for (int c = 0; c < 1; c++) {
							z = rand() % 4;
						}
						switch (z) {
						case 0:
							cout << "Good Job\n";
							break;
						case 1:
							cout << "I am proud of you\n";
							break;
						case 2:
							cout << "That is fantastic\n";
							break;
						case 3:
							cout << "You are so good at this\n";
							break;
						}
					}
					else {
						wrongCount++;
						for (int c = 0; c < 1; c++) {
							z = rand() % 3;
						}
						switch (z) {
						case 0:
							cout << "Not quite right\n";
							break;
						case 1:
							cout << "You can do it, try it again\n";
							break;
						case 2:
							cout << "A little off\n";
							break;
						}
					}
					break;
				}
			}
		} while ((choice < 0) || (choice > 2));
	}

	cout << "==============================================================\n\n";
	cout << "Number of correct answer: " << rightCount <<"\n";
	cout << "Number of incorrect answer: " << wrongCount << "\n";
	H = ((double)rightCount / (double)mathproblem) * 100;
	cout << "Percent correct = " << H << "%\n";


	system("pause");
	return 0;
}

