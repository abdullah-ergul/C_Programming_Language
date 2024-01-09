/**
 * @file 13-Decimal_to_Binary.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 29-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes a number from the user and converts it to binary.
 */

#include <stdio.h>

int binary (int);


int main() {
	int num;
	
	printf("Enter a number: ");  scanf("%d", &num);
	
	printf("\n%d(10) = %d(2)", num, binary(num));
	

	return 0;
}

int binary (int num) {
	if (num == 0)
		return num;

	return num%2 + 10*binary(num/2);
}
