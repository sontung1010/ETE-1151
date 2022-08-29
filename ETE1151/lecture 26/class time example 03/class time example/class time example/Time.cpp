// Here will hold the implementation for the class Time 

#include <iostream>
#include "Time.h"
using namespace std;

// constructor: initialize all the attributes to 0
Time::Time() {
	hour = 0;
	minute = 0;
	second = 0;
}

void Time::setTime(int h, int m, int s) {
	hour = h;		// should be 0-23, you should do error checking 
	minute = m;		// should be 0-59
	second = s;		// should be 0-59
}	// Time::setTime

void Time::setHour(int h) {
	hour = h;		// should be 0-23, you should do error checking 
}	// Time::setHour

int Time::getHour() {
	return hour;
}

void Time::print() {
	cout << hour << ":" << minute << ":" << second << "\n";
}