// homework due 10142019.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 

// Name:			Tung Do 
// Course:			ETE1151-02
// Assignment:		Homework 
// Due date:		10/14/2019
// Description:
//		generate random numbers

#include <iostream>
using namespace std;

int main()
{
	cout << "TUNG DO";

	unsigned seed;
	cout << "\n\nEnter seed: "; 
	cin >> seed;

	srand(seed);

	int N;
	int a;
	int M;
	int u;

	cout << "Enter N (quantity of random numbers): ";
	cin >> N;
	cout << "Enter M (quantity of random numbers per row): ";
	cin >> M;

	if (N == 0 || M == 0) {
		cout << "There is nothing to be printed";
	}
	for (int i = 1; i <= N; i++) {
		a = rand();
		cout << a;
		if (i == N) {
			break;
		}
		for (u = 1; u < M; u++) {
			a = rand();
			cout << "\t" << a;
			i++;
			if (i == N) {
				break;
			}
		}
		cout << "\n";
		if (i == N) {
			break;
		}
	}
	cout << "\n";

	cout << "=============================================================================\n";

	cout << "Enter N (quantity of random numbers): ";
	cin >> N;
	cout << "Enter M (quantity of random numbers per row): ";
	cin >> M;

	if (N == 0 || M == 0) {
		cout << "There is nothing to be printed";
	}

	for (int i = 1; i <= N; i++) {
		a = -100 + 100 * (rand() % 5);
		cout << a;
		if (i == N) {
			break;
		}
		for (u = 1; u < M; u++) {
			a = -100 + 100 * (rand() % 5);
			cout << "\t" << a;
			i++;
			if (i == N) {
				break;
			}
		}
		cout << "\n";
		if (i == N) {
			break;
		}
	}
	cout << "\n";

	system("pause");
	return 0;
}


