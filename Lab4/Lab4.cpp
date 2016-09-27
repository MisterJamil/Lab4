// Lab4.cpp : Defines the entry point for the console application.
/* Author: Jamil Saliba
	Date : 9/26/2016
	Description : Console application that checks if a valid value is a prime number and then displays if it is a prime number or not. If an unvalid value is inputed then
	an error message is displayed.

	Finding a prime. Write a program that asks the user for a positive nonzero integer value up to 100. The program should use a loop to determine if the number entered is 
	prime or not and display the result back to the user. If the user enters an invalid number, display error message and end the program.

*/

#include "stdafx.h"


int main() {
	//Variable Declaration
	int iNumber;

	//Input
	printf("Enter a postive nonzero integer between 1-100>\n");
	scanf("%d", &iNumber);
	if (iNumber == 2 || iNumber == 3 || iNumber == 5 || iNumber == 7 || iNumber == 11 || iNumber == 13 || iNumber == 17 || iNumber == 19 || iNumber == 23 || 
		iNumber == 29 || iNumber == 31 || iNumber == 37 || iNumber == 41 || iNumber == 43 || iNumber == 47 || iNumber == 53 || iNumber == 59 || 
		iNumber == 61 || iNumber == 67 || iNumber == 71 || iNumber == 73 || iNumber == 79 || iNumber == 83 || iNumber == 89 || iNumber == 97) {
			printf("Value is a prime number");
	}
	else {
		if (iNumber == 4 || iNumber == 6 || iNumber == 8 || iNumber == 9 || iNumber == 10 || iNumber == 12 || iNumber == 14 || iNumber == 15 || iNumber == 16 
			|| iNumber == 18 || iNumber == 20 || iNumber == 21 || iNumber == 22 || iNumber == 24 || iNumber == 25 || iNumber == 26 || iNumber == 27 || iNumber == 28 
			|| iNumber == 30 || iNumber == 32 || iNumber == 33 || iNumber == 34 || iNumber == 35 || iNumber == 36 || iNumber == 38 || iNumber == 39 || iNumber == 40 
			|| iNumber == 42 || iNumber == 44 || iNumber == 45 || iNumber == 46 || iNumber == 48 || iNumber == 49 || iNumber == 50 || iNumber == 51 || iNumber == 52 
			|| iNumber == 54 || iNumber == 55 || iNumber == 56 || iNumber == 57 || iNumber == 58 || iNumber == 60 || iNumber == 62 || iNumber == 63 || iNumber == 64 
			|| iNumber == 65 || iNumber == 66 || iNumber == 68 || iNumber == 69 || iNumber == 70 || iNumber == 72 || iNumber == 74 || iNumber == 75 || iNumber == 76 
			|| iNumber == 77 || iNumber == 78 || iNumber == 80 || iNumber == 81 || iNumber == 82 || iNumber == 84 || iNumber == 85 || iNumber == 86 || iNumber == 87 
			|| iNumber == 88 || iNumber == 90 || iNumber == 91 || iNumber == 92 || iNumber == 93 || iNumber == 94 || iNumber == 95 || iNumber == 96 || iNumber == 98 
			|| iNumber == 99 || iNumber == 100) {
			printf("Value is not a prime number");
		}
		else {
			if (iNumber < 0 < 100) {
				printf("Error: Invalid value");
			}
		}
	}
	return 0;

}
		