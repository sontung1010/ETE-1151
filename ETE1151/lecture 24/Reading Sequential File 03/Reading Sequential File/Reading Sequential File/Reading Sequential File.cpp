// Reading Sequential File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>		// file stream
#include <string> 
#include <iomanip>

using namespace std;

void outputLine(int account, const string name, double balance) {
	// have 10 spaces left justified for account 
	// have 13 spaces for name
	// have 7 spaces for balance, precision 2 decimal places, right justified

	cout << left << setw(10) << account <<
		setw(13) << name <<
		setw(7) << setprecision(2) << right << balance <<
		"\n";
}

int main()
{
	ifstream inClientFile("clients.txt", ios::in);
	if (!inClientFile) {		// if cannot open file
		cerr << "File cannot be opened\n";
		system("pause");
		exit(1);
	}

	int account;
	string name;
	double balance;

	/*cout << fixed << showpoint;*/
	cout << fixed << noshowpoint;

	while (inClientFile >> account >> name >> balance) {
		outputLine(account, name, balance);
	}

	system("pause");
	return 0;
}