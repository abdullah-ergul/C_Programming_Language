/**
 * @file 16-Factorial.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 29-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a recursive function that finds the factorial of a number.
 */

#include <stdio.h>

int factorial(int);


int main() {
	int num;
	
	printf("Enter a number: ");  scanf("%d", &num);
	
	printf("Factorial of %d is: %d", num, factorial(num));
	

	return 0;
}

int factorial(int num) {
	if(num == 1)	// exit case
		return 1;

	return num * factorial(num-1);	// num * (num-1) * (num-2) * ... * 1
}
