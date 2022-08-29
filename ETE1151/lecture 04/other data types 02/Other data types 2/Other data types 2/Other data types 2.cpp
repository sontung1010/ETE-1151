// Other data types 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	char ch;
	ch = 'A';
	printf("%c %d\n", ch, ch);

	ch = ch + 1;
	printf("%c %d\n", ch, ch);

	printf("=========================\n");
	float x, y;		// x and y declared as type float 
	x = 1.0;		// x assigned value 1.0 
	y = 2.0;
	printf("The sum of x and y is %f\n", x + y);
	printf("%f + %f = %f\n", x, y, x + y);

	x = 11.23456789;
	printf("%f\n", x);

	printf("===========================\n");
	printf("123456789012345678901234567890\n");
	printf("%8.2f %.4f %13f\n", x, x, x);

	system("pause");

	return 0;

}

