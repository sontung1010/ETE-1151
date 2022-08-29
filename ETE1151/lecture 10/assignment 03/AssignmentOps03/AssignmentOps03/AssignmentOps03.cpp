// AssignmentOps03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;

	a = 2;
	// add 1 to a 
	a = a + 1; 
	cout << "a = " << a << "\n";

	// add 5 to a 
	a += 5;			// equivalent to a = a + 5;
	cout << "a = " << a << "\n";

	cout << "==========================\n";
	a = 11;
	b = 4;
	a %= 4;			// equivalent to a = a % 4
	cout << "a = " << a << "\n";

	cout << "==========================\n";
	a = 20;
	b = 30;
	// increment a by 1, decrement b by 1
	a++;		// post increment	a = a + 1
	b--;		// post decrement	b = b - 1 
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";

	cout << "==========================\n";
	a = 50;
	b = 100;
	// use pre-increment to add 1 to a 
	++a;		// pre increment	a = a + 1

	// use pre-increment to subtract 1 from b 
	--b;		// pre decrement	b = b - 1 
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";

	cout << "==========================\n";
	a = 10;
	b = 20;
	c = a++ + b;		// equivalent two statements	c = a + b;		a++;
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";
	cout << "c = " << c << "\n";

	cout << "==========================\n";
	a = 20;
	b = 30;
	c = ++a + b;		// equivalent two statements	++a;		c = a + b;
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";
	cout << "c = " << c << "\n";

	cout << "==========================\n";
	a = 100;
	b = 60; 
	c = a-- + ++b;			// ++b;			c = a + b;		a++
	c = a-- + ++b;			// ++b;			c = a + b;		a++
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";
	cout << "c = " << c << "\n";


	system("pause");
	return 0;
}

