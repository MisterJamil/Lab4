// Lab4.cpp : Defines the entry point for the console application.
/* Author: Jamil Saliba
	Date : 9/26/2016
	Description : Console application that checks if a valid value is a prime number and then displays if it is a prime number or not. If an unvalid value is inputed then
	an error message is displayed.

	Finding a prime. Write a program that asks the user for a positive nonzero integer value up to 100. The program should use a loop to determine if the number entered is 
	prime or not and display the result back to the user. If the user enters an invalid number, display error message and end the program.

*/

#include "stdafx.h"


int main()
{	//Variable Declaration
	int iNumber;

	//Input
	printf("Enter a postive nonzero integer between 1-100>\n");
	scanf("%d", &iNumber);
	while (iNumber == 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97) {
		printf("Value is a prime number");
		if (iNumber == 4, 6, 8, 9, 10, 12, 14, 15, 16, 18, 20, 21, 22, 24, 25, 26, 27, 28, 30,
			32, 33, 34, 35, 36, 38, 39, 40, 42, 44, 45, 46, 48, 49, 50, 51, 52, 54,
			55, 56, 57, 58, 60, 62, 63, 64, 65, 66, 68, 69, 70, 72, 74, 75, 76, 77,
			78, 80, 81, 82, 84, 85, 86, 87, 88, 90, 91, 92, 93, 94, 95, 96, 98, 99, 100) {
			passed = true
				printf("Value is not a prime number");
		}
		else {
			passed = false
				iNumber <= 0;
			iNumber >= 100;
			printf("Error: Invalid value");
		}
		printf("Enter a postive nonzero integer between 1-100>\n");
		scanf("%d", &iNumber);
	}
}
	return 0;
}

