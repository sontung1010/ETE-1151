// 3 point for quizz.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 

// Name:			Tung Do 
// Course:			ETE1151-02
// Assignment:		Project 01
// Due date:		9/30/2019

#include <iostream>
#define LINE_SIZE		80

int main()
{
	char ch1;
	int num1;
	char line[LINE_SIZE + 1];
	
	printf("Enter data: ");
	ch1=getchar();
	scanf_s("%d", &num1);
	getchar( );
	gets_s(line);
	printf("ch1 = %c\n", ch1);
	printf("num1 = %d\n", num1);
	printf("line = %s\n", line);

	system("pause");
	return 0;
}

