// seekg example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inFile("test.txt", ifstream::binary);
	if (!inFile) {		// if cannot open file 
		cout << "Cannot open test.txt\n";
		system("pause");
	}

	// get length of the file 
	inFile.seekg(0, ios::end);
	int length = inFile.tellg();
	cout << "length = " << length << "\n";

	inFile.seekg(0, ios::beg);
	char* buffer = new char[length];

	// read data as a block 
	inFile.read(buffer, length);

	// print content to the screen
	cout.write(buffer, length);
	cout << "\n";

	delete[] buffer;

	system("pause");
	return 0;
}