/**
 * @file 11-Perfect_Number.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 26-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes a number as input and prints whether it is a perfect number or not.
 */

#include <stdio.h>


int main() {
	int number, sum=0, i=1;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	// We can use while loop instead of for loop. Just change the syntax.
	while (i < number) {	// Perfect numbes are sum of their divisors except themselves. So we dont have to check the number itself.
		if (number%i==0)	// If the number is divisible by i, add i to sum.
			sum+=i;
		i++;				// Increase i by 1. Because we use while loop, we have to increase i manually.
	}

	if (sum == number) {	// If the sum of divisors is equal to the number, it is a perfect number.
		printf("%d is a perfect number.", number);
	}
	else {					// If the sum of divisors is not equal to the number, it is not a perfect number.
		printf("%d is not a perfect number.", number);
	}
	

	return 0;
}
