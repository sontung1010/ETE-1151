// array example 2.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	const int array_size = 7;		// ignore index 0
	int freq[array_size] = {};		// freq[i] is set to 0

	srand(time(0));			// see random number generator with current time
	// roll the dice 6000000
	for (int roll = 1; roll <= 6000000; roll++) {
		// int n = freq[1 + rand() % 6]++;
		int n = 1 + rand() % 6;
		freq[n]++;
		// add 1 to freq[1] each time a 1 occurs
		// add 1 to freq[2] each time a 2 occurs
		// so on
	}

	for (int face = 1; face <= 6; face++) {
		cout << "face = " << face << ": " << freq[face] << "\n";
	}
	

	system("pause");
	return 0;
}

