/**
 * @file 2-Four_Operations.c
 * @author Abdullah Ergul 
 * @version 2.0
 * @date 26-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes two numbers from the user and performs one of the four operations.
 */

#include <stdio.h>


int main() {
	int num1, num2, operation;
	double ans;
	
	printf("Enter 1st number: ");
	scanf("%d", &num1);
	
	printf("Enter 2nd number: ");
	scanf("%d", &num2);
	
	printf("1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\nYour choice: ");
	scanf("%d", &operation);
	
	// We use switch-case structure to perform the operation according to the user's choice.
	switch (operation) {		// The variable in the parentheses is the variable we want to check.
		case 1:					// If the value of the variable is 1, the code in the case 1: section will run.
			ans = num1+num2;
			break;				// This line is used to exit the switch-case structure.
		case 2:
			ans = num1-num2;
			break;
		case 3:
			ans = num1*num2;
			break;
		case 4:
			ans = num1/num2;
			break;
		default:			// If the value of the variable is not 1, 2, 3, 4, the code in the default: section will run.
			printf("Wrong choice!");
			return 0;		// If the user enters a number other than 1, 2, 3, 4, the program will end.
	}
	
	printf("\nAnswer= %lf", ans);


	return 0;
}