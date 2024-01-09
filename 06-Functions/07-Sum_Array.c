/**
 * @file 7-Sum_Array.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 29-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes an array from the user then calculates the sum of the array. Use recursive function.
 */

#include <stdio.h>

int sum_array(int [], int);


int main() {
	int arr[] = {1, 3, 2, 7, 9};

	printf("Sum of array: %d", sum_array(arr, 4));
	
	
	return 0;
}

int sum_array(int arr[], int i) {
	if (i == 0)				// Exit case
		return arr[0];
	
	return arr[i] + sum_array(arr, i-1);	// Recursion. When i = 0, recursion will stop and return arr[i] + arr[i-1] + arr[i-2] + ... + arr[0]
}
