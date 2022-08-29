// Lab 13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Name:			Tung Do 
// Course:			ETE1151L-02
// Assignment:		Lab 13
// Due date:		12/4/2019
// Description: 
//		write code to read a sequential file and create a sequential file 

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inputText("my_input_file.txt", ios::in);
	if (!inputText) {		// if cannot open file
		cerr << "File cannot be opened\n";
		system("pause");
		exit(1);
	}

	ofstream outputText("my_output_file.txt", ios::out);
	if (!outputText) {		// if cannot open file
		cerr << "File could not be opened\n";
		exit(1);		// terminates the program
	}

	outputText << "TUNG DO\n\n";

	enum Command {SET_TIME = 1, PRINT_OBJ = 2, SET_HR = 3, SET_MIN = 4, SET_SEC = 5, INCRE_SEC = 6, INCRE_MIN = 7, INCRE_HR = 8, COMPARE = 9};

	int obj;
	int objx;
	int hr;
	int min;
	int sec; 
	int cmd;

	inputText >> cmd;

	while (cmd != -1) {
		switch (cmd) {
		case SET_TIME: 
			inputText >> obj >> hr >> min >> sec;
			outputText << "set time for object " << obj << " to ";
			if ((hr >= 0) && (hr <= 9)) {
				outputText << "0" << hr << ":";
			}
			else {
				outputText << hr << ":";
			}
			if ((min >= 0) && (min <= 9)) {
				outputText << "0" << min << ":";
			}
			else {
				outputText << min << ":";
			}
			if ((sec >= 0) && (sec <= 9)) {
				outputText << "0" << sec << "\n";
			}
			else {
				outputText << sec << "\n";
			}
			break;
		case PRINT_OBJ:
			inputText >> obj;
			outputText << "print object " << obj << "\n";
			break;
		case SET_HR: 
			inputText >> obj >> hr;
			outputText << "set hour for object " << obj << " to " << hr << "\n";
			break;
		case SET_MIN:
			inputText >> obj >> min;
			outputText << "set minute for object " << obj << " to " << min << "\n";
			break;
		case SET_SEC:
			inputText >> obj >> sec;
			outputText << "set second for object " << obj << " to " << sec << "\n";
			break;
		case INCRE_SEC:
			inputText >> obj;
			outputText << "increment seconds for object " << obj << "\n";
			break;
		case INCRE_MIN:
			inputText >> obj;
			outputText << "increment minutes for object " << obj << "\n";
			break;
		case INCRE_HR:
			inputText >> obj;
			outputText << "increment hours for object " << obj << "\n";
			break;
		case COMPARE:
			inputText >> obj >> objx;
			outputText << "compare object " << obj << " and object " << objx << "\n";
			break;
		}  // switch
		inputText >> cmd;
	}  // while
	
	system("pause");
	return 0;
}