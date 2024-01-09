/**
 * @file 14-GCD_Recursive.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 29-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes two numbers from the user and finds the greatest common divisor (GCD) of these numbers.
 // ? Note: Use recursive function.
 */

#include <stdio.h>

int gcd(int, int, int);


int main() {
	int num1, num2;
	
	printf("1st Number: ");  scanf("%d", &num1);
	printf("2nd Number: ");  scanf("%d", &num2);
	
	int smaller = (num1 < num2) ? num1 : num2;
	printf("GCD of %d and %d: %d", num1, num2, gcd(num1, num2, smaller));
	

	return 0;
}

int gcd(int num1, int num2, int i) {
	if (num1%i == 0 && num2%i == 0)
		return i;
	
	return gcd(num1, num2, i-1);
}
