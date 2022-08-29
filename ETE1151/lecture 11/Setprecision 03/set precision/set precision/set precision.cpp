// set precision.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>			// std::cout				std::fixed
#include <iomanip>			// std::setprecision
using namespace std;

int main()
{
	double f = 3.14159;
	cout << "f = 3.14159\n";
	cout << "setprecision(1): " << setprecision(1) << f << "\n";
	cout << "setprecision(2): " << setprecision(2) << f << "\n";
	cout << "setprecision(5): " << setprecision(5) << f << "\n";
	cout << "setprecision(9): " << setprecision(9) << f << "\n";

	//fixed point notation
	cout << "====================================================\n";
	cout << fixed;
	cout << "f = 3.14159\n";
	cout << "setprecision(1): " << setprecision(1) << f << "\n";
	cout << "setprecision(2): " << setprecision(2) << f << "\n";
	cout << "setprecision(5): " << setprecision(5) << f << "\n";
	cout << "setprecision(9): " << setprecision(9) << f << "\n";

	//scientific point notation
	cout << "====================================================\n";
	cout << scientific;
	cout << "f = 3.14159\n";
	cout << "setprecision(1): " << setprecision(1) << f << "\n";
	cout << "setprecision(2): " << setprecision(2) << f << "\n";
	cout << "setprecision(5): " << setprecision(5) << f << "\n";
	cout << "setprecision(9): " << setprecision(9) << f << "\n";

	
	cout << "====================================================\n";
	f = 1435.2340875;
	cout << scientific;
	cout << "f = 1435.2340875\n";
	cout << "setprecision(1): " << setprecision(1) << f << "\n";
	cout << "setprecision(2): " << setprecision(2) << f << "\n";
	cout << "setprecision(5): " << setprecision(5) << f << "\n";
	cout << "setprecision(9): " << setprecision(9) << f << "\n";

	cout << "====================================================\n";
	cout << fixed;
	cout << "f = 1435.2340875\n";
	cout << "setprecision(1): " << setprecision(1) << f << "\n";
	cout << "setprecision(2): " << setprecision(2) << f << "\n";
	cout << "setprecision(5): " << setprecision(5) << f << "\n";
	cout << "setprecision(9): " << setprecision(9) << f << "\n";

	system("pause");
	return 0;
}

