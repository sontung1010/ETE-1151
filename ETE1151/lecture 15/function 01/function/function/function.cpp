// function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>		// built-in math functions 
using namespace std;

// write function my_sum. It has 2 argument num1, num2
// return sum of num1 and num2
// all the argument and the return value are integers
// <<return type> <function_name>(<arg1> <arg2>)

int my_sum(int num1, int num2) 
{
	int answer;

	answer = num1 + num2;
	return answer;
}	// int my_sum()

double convert_to_radians(double degrees) {

	return (degrees * 3.14159265359) / 180;

} // double convert_to_radians()

// given in degrees, remove multiple 360s
double scale_angle(double degrees) {
	int x = (int)(degrees / 360.0);			//fraction portion is thrown away 
	return degrees - x * 360.0;
}

// factorial it has 1 argument n, it returns n!
unsigned long long factorial(int n) {
	unsigned long long answer;
	answer = 1;
	for (int i = 1; i <= n; i++) {
		answer *= i;
	}

	return answer;
}

int main()
{
	int sum;
	sum = my_sum(10, 12);
	cout << "sum = " << sum << "\n";

	cout << "my_sum(sum, sum) = " << my_sum(sum, sum) << "\n";

	cout << my_sum(my_sum(1, 2), my_sum(3, 4)) << "\n";

	cout << "===================================================\n";
	// pow(x,y) return x^y
	// returns a double number, x and y are doubles 

	double answer = pow(2.0, 3.0);
	cout << "answer = " << answer << "\n";
	cout << "pow(2.0, 3.1) = " << pow(2.0, 3.1) << "\n";

	cout << "====================================================\n";

	// sin() has one argument. This argument is in radians. And returns a double number which is sin of the angle
	cout << "sin(30) = " << sin(30) << "\n";
	cout << "sin(0.523598) = " << sin(0.523598) << "\n";

	double radians = convert_to_radians(30);
	cout << "radians = " << radians << "\n";
	cout << "sin(radians) = " << sin(radians) << "\n";

	cout << "sin(convert_to_radians(90)) = " << sin(convert_to_radians(90.0)) << "\n";

	cout << "=========================================================\n";
	cout << "scale_angle(901) = " << scale_angle(901) << "\n";

	cout << "factorial(4) = " << factorial(4) << "\n";

	system("pause");
	return 0;
}

