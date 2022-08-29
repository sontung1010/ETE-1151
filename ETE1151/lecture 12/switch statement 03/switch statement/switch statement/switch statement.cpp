// switch statement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int door;
	int carCount;
	int ovenCount;
	int mealCount;

	carCount = 0;
	ovenCount = 0;
	mealCount = 0;

	for (int i = 0; i < 10; i++) {
		cout << "\n\nSelect door number 1 to 4 for your prize: ";
		cin >> door;

		// switch provides multiple-selection statements
		switch (door) {
		case 1: 
			cout << "you won a car\n";
			carCount++;
			break;

			// for either case 2 or 3 we want to give a meal 
		case 2: 
		case 3: 
			cout << "you won a meal\n";
			mealCount++;
			break;
			
		case 4: 
			cout << "you won an oven\n";
			ovenCount++;
			break;

		default: //catch all phrase 
			cout << "Invalid choice\n";
			break;

		} // switch 

	} // for 
	
	cout << "\nWe gave away " << carCount << " cars today\n";
	cout << "\nWe gave away " << mealCount << " cars today\n";
	cout << "\nWe gave away " << ovenCount << " cars today\n";
}
