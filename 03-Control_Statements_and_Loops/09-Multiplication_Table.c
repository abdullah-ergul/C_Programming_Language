/**
 * @file 9-Multiplication_Table.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 26-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that prints the multiplication table of the numbers from 1 to 10.
 */

#include <stdio.h>


int main() {
	int i, j;
	for (i=1; i<=10; i++) {		// Outer loop for numbers from 1 to 10.
		for (j=1; j<=10; j++)	// Inner loop for numbers from 1 to 10.
			printf("%dx%d = %d\n", i, j, i*j);
		printf("\n");			// Print a new line after each outer loop.
	}


	return 0;
}
