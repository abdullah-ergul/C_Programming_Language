/**
 * @file 1-Find_Two_Biggest.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 27-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes 10 numbers from the user and finds the two biggest numbers.
 */

#include <stdio.h>
#define SIZE 10		// We can use #define or const int to define a constant.

void twoBiggestNumbers(int []);	// Function prototype. If we want to use a function after main(), we have to declare it before main().


int main() {	// main() is also a function. It is the first function that is called when the program is executed.
	int i, arr[SIZE];	// We can use const int instead of #define SIZE 10.
	
	for (i=0 ; i<10 ; i++) {
		printf("Enter %dth element: ", i+1);  scanf("%d", &arr[i]);
	}
	
	twoBiggestNumbers(arr);		// Function call. We dont assign the return value of the function to any variable. Because fntion is a void function.

	return 0;	// return 0 is also a return statement. It means that the program is ended successfully.
}

void twoBiggestNumbers(int arr[]) {	// Function definition.
	int i, max1, max2;

	// Firstly, we compare the first two elements of the array.
	// Because if we define max1 and max2 as 0, we can't find the biggest number if the biggest number is negative.
	// Also we can't define max1 and max2 as arr[0] and arr[1] because we don't know which one is bigger.
	if (arr[0] > arr[1]) {
		max1 = arr[0];
		max2 = arr[1];
	}
	else {
		max1 = arr[1];
		max2 = arr[0];
	}
	
	
	// We start from 2 because we already compared the first two elements.
	for (i=2 ; i<SIZE ; i++) {
		if (arr[i] > max1) {
			max2 = max1;
			max1 = arr[i];
		}
		else if (arr[i] > max2) {
			max2 = arr[i];
		}
	}
	
	printf("\nThe biggest number is %d and the second biggest number is %d.", max1, max2);

	// This function doesn't return anything, so we don't need to use return statement.
}	// Function definition ends.
