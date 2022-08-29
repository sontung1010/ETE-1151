// Create Sequential File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>		// file stream
#include <string> 

using namespace std;

int main()
{
	// we will use ofstream to create the file 
	ofstream outClientFile("clients.txt", ios::out);
	if (!outClientFile) {		// if cannot open file
		cerr << "File could not be opened\n";
		exit(1);		// terminates the program
		// argument 0 indicates the program terminate normally. Since we specified a non-zero such as 1, mean that program exitted with an error
	}
	outClientFile << "**** Tung Do\n";

	int account;		// customer account number
	string name;		// customer's name
	double balance;		// money customer owes to the company

	cout << "Enter the account, name and balance.\n";
	cout << "Enter end of file to end input.\n";
	cout << "?: ";

	// for window Ctrl Z  indicate end of file 
	while (cin >> account >> name >> balance) {
		outClientFile << account << " " << name << " " << balance << "\n";
		cout << "?: ";
	}

	system("pause");
	return 0;
}