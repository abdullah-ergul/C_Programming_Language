/**
 * @file 13-Dynamic_Array.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 18-12-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes a number from the keyboard until -1 is entered and stores it in an array. -1 will not be included in the series
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
	int size = 0, num;
	int *arr = (int*)malloc(sizeof(int));
	
	// Get first number
	printf("%dth Number: ", size+1);
	scanf("%d", &num);

	// Check -1 and add the element to the array
	while (num != -1) {
		arr = (int *)realloc(arr, (1 + size)*sizeof(int));		// Reallocate array.
		*(arr+size) = num;										// Assign value to array
		size++;													// Increase size
		printf("%dth Number: ", size+1);  scanf("%d", &num);	// Get a new number
	}
	
	// Print numbers
	for (int i=0; i<size ; i++)
		printf("%d ", *(arr+i));
	

	return 0;
}
