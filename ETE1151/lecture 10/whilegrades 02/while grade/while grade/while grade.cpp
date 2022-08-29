// while grade.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double total;		// sum of grades 
	int gradeCounter;	// number of grade entered so far
	double average;		// hold class average
	double grade;		// one single grade 
	
	// initialize 
	total = 0;
	gradeCounter = 0;

	cout << "Enter grade ";			//prompt the use to enter grade 
	cout << (gradeCounter + 1) << "(-1 to end): ";
	cin >> grade; 

	while (grade != -1) {
		total = total + grade;
		gradeCounter = gradeCounter + 1;
		cout << "Enter grade ";			//prompt the use to enter grade 
		cout << (gradeCounter + 1) << "(-1 to end): ";
		cin >> grade; 
	} // end the while 

	if (gradeCounter != 0) {
		average = total / gradeCounter; 
		// display total and average of grades 
		cout << "\nTotal of all " << gradeCounter;
		cout << " grade is " << total << "\n";
		cout << "Class average = " << average << "\n";
	}
	else {
		cout << "\nNo student grades entered\n";
	}

	system("pause");
	return 0;
}

