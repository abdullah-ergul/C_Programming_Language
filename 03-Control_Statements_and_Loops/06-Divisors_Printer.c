/**
 * @file 6-Divisors_Printer.c
 * @author Abdullah Ergul 
 * @version 2.0
 * @date 26-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes a number as input and prints all its divisors.
 */

#include <stdio.h>


int main() {
	int number, i;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	printf("\n");
	for (i=1 ; i <= number ; i++) {		// For loop means "for (initialization ; condition ; increment/decrement)". It is used when we know the number of iterations.
		if (number%i == 0)
			printf("%d ", i);	// If we write a single command, we don't need to write the curly brackets of if statement
	}


	return 0;
}