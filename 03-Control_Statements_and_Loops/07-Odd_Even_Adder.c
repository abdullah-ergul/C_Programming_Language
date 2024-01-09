/**
 * @file 7-Odd_Even_Adder.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 26-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes a number from the user and calculates the sum of all numbers from 1 to the number entered.
 */

#include <stdio.h>


int main() {
	int number, sum_all, sum_odd, sum_even, i;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	for (i=1 ; i <= number ; i++) {
		sum_all += i; 		// "n+=i" means "n=n+i"
		if (i%2 == 0) {		// If a number is mod by 2 and the remainder is 0, it is an even number
			sum_even += i;
		}
		else {				// If a number is mod by 2 and the remainder is not 0, it is an odd number
			sum_odd += i;
		}
	}
	printf("\n1 to %d;\nSum of all numbers= %d\nSum of odd numbers= %d\nSum of even numbers= %d", number, sum_all, sum_odd, sum_even);

	
	return 0;
}