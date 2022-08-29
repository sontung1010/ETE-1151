#pragma once

using namespace std;

// This file contains the class definition (not implementation)
class Time {
public:
	Time();          // constuctor
	~Time() {};      // deconstructor
	void setTime(int h, int m, int s);  // command 1: set hour, min, sec
	void print(ofstream &outFile);      // command 2: print the time to the file
	void setHour(int h);                // command 3: set hour
	void setMinute(int m);              // command 4: set minute
	void setSecond(int s);              // command 5: set second
	void incrementSecond();             // command 6: increment second
	void incrementMinute();             // command 7: increment minute
	void incrementHour();               // command 8: increment hour
	bool compareTime(Time t1);          // command 9: compare current
										// object with t1

private:
	int hour;     // 0 - 23    (24-hour clock format)
	int minute;   // 0 - 59
	int second;   // 0 - 59
};  // class Time
