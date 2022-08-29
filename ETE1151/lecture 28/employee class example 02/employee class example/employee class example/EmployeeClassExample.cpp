// Employee class member function definitions
#include <iostream>
#include "Employee.h"		// employee class definition
using namespace std;

// constructor 
Employee::Employee(string fn, string ln, int sal) {
	firstName = fn;
	lastName = ln;
	monthlySalary = sal;
}

void Employee::setFirstName(string fn) {
	firstName = fn;
}

int Employee::getMonthlySalaray() {
	return monthlySalary;
}

void Employee::print() {
	cout << firstName << lastName << " salary = " << monthlySalary << "\n";
}