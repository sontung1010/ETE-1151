// example scanf 02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define PI				3.14159
#define LINE_SIZE		100

int main()
{
	//float radius; 

	//printf("Input circle radius: ");
	//scanf_s("%f", &radius);
	//printf("area of circle with radius %.2f = %5.2f\n", radius, PI * radius * radius);

	///////how to read a double number 
	//double dnum;
	//printf("enter a double number: ");
	//scanf_s("%lf", &dnum);
	//printf("sqrt of %lf = %lf\n", dnum, sqrt(dnum));

	///////////difference between single precision (float) and double precision (double float) 
	//radius = 1.2345678901234567890;
	//dnum = 1.2345678901234567890;
	//printf("radius = %.20f\n", radius);
	//printf("dnum = %.20lf\n", dnum);

	////////read a line
	char line[LINE_SIZE + 1];       // In C or C++ a string ends with \0
	printf("input a line: ");
	gets_s(line, LINE_SIZE);
	printf("line = %s\n", line);   // since line is an array, you do not specify address operater &, because line is the starting address 



	system("pause");
	return 0;
}

