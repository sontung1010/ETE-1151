// employee class example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
	// create 2 employee objects
	Employee employee1("List", "Roberts", 4500);
	Employee employee2("Mark", "Stein", 4000);

	employee1.print;
	employee2.print;

	employee1.setFirstName("Lisa");
	cout << "============ after name correction =================\n";
	employee1.print();

	cout << "====== print Mark's salary =============\n";
	cout << "Mark's salary = " << employee2.getMonthlySalaray() << "\n";

	system("pause");
	return 0;
}