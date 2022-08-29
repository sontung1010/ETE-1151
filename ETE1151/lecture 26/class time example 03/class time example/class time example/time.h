#pragma once
// This file contains the class definition (not implementation)
class Time {
public:
	Time();			// constructor
	~Time() {};		// deconstructor
	void setTime(int h, int m, int s);		// set hour, min, seconds
	void setHour(int h);					// set hour
	int getHour();							// return current hour 
	void print();							// print the time 

private: 
	int hour;		// 0 - 23	(24-hour clock format)
	int minute;		// 0 - 59	
	int second;		// 0 - 59

};	// class Time