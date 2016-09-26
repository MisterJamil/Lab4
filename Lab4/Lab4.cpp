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
	scanf("%d", iNumber);
	
	//Output
	printf("Value is a prime number");
	printf("Value is not a prime number");
	printf("Error: Invalid value");
	
	//Calculations
    
	return 0;
}

