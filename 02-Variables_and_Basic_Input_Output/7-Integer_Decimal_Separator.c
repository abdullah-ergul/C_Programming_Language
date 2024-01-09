/**
 * @file 7-Integer_Decimal_Separator.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 26-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes a number from the user and prints the integer and decimal parts of the number separately.
 */

#include <stdio.h>


int main() {
	double number;
	
	printf("Enter a number: ");
	scanf("%lf", &number);

	int integer = number/1;
	double decimal = number-integer;
	
	printf("\nInteger part of the number you entered: %d", integer);
	printf("\nDecimal part of the number you entered: %lf", decimal);


	return 0;
}
