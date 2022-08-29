// calculations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num1 = 7;
	int num2 = 4; 
	int ans = num1 / num2; 
	cout << "ans = " << ans << "\n";			// 1

	double ans2 = num1 / num2;
	cout << "ans2 = " << ans2 << "\n";			// 1.0

	double ans3 = (double)num1 / (double)num2;
	cout << "ans3 = " << ans3 << "\n";			// 1.75

	double ans4 = num1 / 4.0;
	cout << "ans4 = " << ans4 << "\n";			// 1.75

	int ans5 = 7.0 / 4.0;
	cout << "ans5 = " << ans5 << "\n";			// 1

	system("pause");
}

