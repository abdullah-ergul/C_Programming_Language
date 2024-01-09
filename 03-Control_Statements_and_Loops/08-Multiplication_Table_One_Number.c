/**
 * @file 8-Multiplication_Table_One_Number.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 26-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes a number as input and prints its multiplication table.
 */

#include <stdio.h>


int main() {
	int number, i;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	for (i=1 ; i <= 10 ; i++)	// We can write the for loop in one line. So we dont have to use curly braces.
		printf("%dx%d = %d\n", number, i, number*i);	// printf only prints between the double quotes.
														// So we can understand what the output is without running the code
	
	
	return 0;
}