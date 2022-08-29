// class time example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
	Time sunset;		// sunset object is created. Constructor gets called 
	sunset.print();		// print the object 

	cout << "======== set sunset time to a new line ===========\n";
	sunset.setTime(18, 30, 45);		// set the time
	sunset.print();

	cout << "======== print the hour for the sunset ===========\n";
	cout << "sunset hour = " << sunset.getHour() << "\n";

	cout << "======== change the hour =========\n";
	sunset.setHour(19);
	sunset.print();
	cout << "sunset hour = " << sunset.getHour() << "\n";

	system("pause");
	return 0;
}