/**
 * @file 6-Sum_Below.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 29-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Questions: Write a program that takes a number from the user then calculates the sum of numbers below it. Use recursive function.
 */

#include <stdio.h>

int sum_below(int);


int main() {
	int n;
	
	printf("Number: ");  scanf("%d", &n);
	
	printf("Sum of numbers below %d: %d", n, sum_below(n));
	
	return 0;
}

int sum_below(int i) {		// Recuesive function means that function calls itself. We can call itself on line 37.
	if (i == 0)				// If the condition is true, we can return i. And this state is called the "exit case".
		return i;			// * In the exit case, we shouldn't call the function itself.
	
	return i + sum_below(i-1);	// If the condition is false, we should call the function itself.
								// When i = 0, recursion will stop and return i + i-1 each time. Its mean i + i-1 + i-2 + ... + 0
}
