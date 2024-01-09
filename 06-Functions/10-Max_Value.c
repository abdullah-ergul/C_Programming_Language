/**
 * @file 10-Max_Value.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 29-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a recursive function that finds the maximum value of the elements in the array.
 */

#include <stdio.h>

int max_value(int [], int, int);


int main() {
	int arr[] = {1, 3, 2, 7, 9};
	printf("Max value of array: %d", max_value(arr, arr[0], 4));
	

	return 0;
}

int max_value(int arr[], int max, int i) {
	if (i == -1)		// Exit case
		return max;

	if (arr[i] > max)	// If the current element is greater than the max value, we assign it to max.
		max = arr[i];

	return max_value(arr, max, i-1);
}
