/**
 * @file 2-Pointer_Sum.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 09-12-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes two numbers from the user and prints the sum of these numbers using pointers.
 */

#include <stdio.h>


int main() {
	int *pnum1, *pnum2;
	
	printf("1st Number: ");
	scanf("%d", pnum1);	// Its like scanf("%d",&a);

	printf("2nd Number: ");
	scanf("%d", pnum2);	// Its like scanf("%d",&b);
	
	printf("Sum of the numbers: %d", *pnum1+*pnum2);
	

	return 0;
}
