/**
 * @file 5-GCD.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 28-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes two numbers from the user and finds the greatest common divisor of these numbers.
 */

#include <stdio.h>

int gcd(int, int);


int main() {
	int num1, num2;
	
	printf("1st Number: ");  scanf("%d", &num1);
	printf("2nd Number: ");  scanf("%d", &num2);
	
	printf("GCD of %d and %d: %d", num1, num2, gcd(num1, num2));
	

	return 0;
}

int gcd(int num1, int num2) {
	int gcd, i;
	int smaller = (num1 < num2) ? num1 : num2;	// We can find the smaller number with ternary operator.
	
	for (i=smaller ; i>0 ; i--) {		// We can find the gcd with for loop.
		if (num1%i == 0 && num2%i == 0) {
			gcd = i;
			break;
		}
	}
	
	return gcd;
}
