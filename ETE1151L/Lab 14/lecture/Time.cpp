// your header comments

// Here will hold the implementation for the Class Time

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include "Time.h"

using namespace std;

// constructor: initialize all the attributes to 0
Time::Time() {
	
   // your code
   
   
}

// command 1: set hour, min, sec
// if user hour is not valid then do not change the hour attribute.
// if user minute is not valid then do not change the minute attribute.
// if user second is not valid then do not change the second attribute
void Time::setTime(int h, int m, int s) {
	
   //your code
   
   
   
}  // Time::setTime

// command 2: print the time in hh:mm:ss format to the outFile
// use two digits for each. Example:  02:09:08
void Time::print(ofstream &outFile) {
	
   // your code
   
   
   
}

// command 3: set hour
// if user hour is not valid then do not change the hour attribute.
void Time::setHour(int h) {
	
   // your code
   
   
   
}  // Time::setHour()

// command 4: set minute
// if user minute is not valid then do not change the minute attribute.
void Time::setMinute(int m) {
	
   // your code
   
   
   
}  // Time::setMinute()

// command 5: set second
// if user second is not valid then do not change the second attribute.
void Time::setSecond(int s) {
	
   // your code
   
   
   
}  // Time::setSecond()

// command 6: increment second
// if the current seconds is 59, after increment it should be 0 and
// minute should be incremented by 1. For other cases seconds 
// is incremented by 1.
void Time::incrementSecond() {
	
   // your code
   
   
   
}  // Time:incrementSecond()

// command 7: increment minute
// if the current minutes is 59, after increment it should be 0 and
// hour should be incremented by 1. For other cases minutes
// is incremented by 1.
void Time::incrementMinute() {
	
   // your code
   
   
   
   
}  // Time:incrementMinute()

// command 8: increment hour
// if the current hour is 23, after increment it should be 0.
// For other cases, hour is incremented by 1.
void Time::incrementHour() {
	
   // your code
   
   
   
}  // Time:incrementHour()

// command 9: compare current object with t1 object
// return true if both have the same time, i.e. hours, minutes and 
// seconds match.
bool Time::compareTime(Time t1) {

   // your code
   
   
   
   
}  // Time:compareTime()
									