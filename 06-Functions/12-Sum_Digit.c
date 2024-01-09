/**
 * @file 12-Sum_Digit.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 29-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that finds the sum of the digits of the number entered by the user using the recursive function.
 */

#include <stdio.h>

int sum_digit(int num);


int main() {
	int num;
	
	printf("Number: ");  scanf("%d", &num);
	
	printf("\nSum of numbers: %d", sum_digit(num));


	return 0;
}

int sum_digit(int num) {
	if (num == 0)	// Exit case
		return 0;
	
	return num%10 + sum_digit(num/10);	// Recursive case
}
