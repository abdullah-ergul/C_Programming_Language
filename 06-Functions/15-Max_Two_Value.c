/**
 * @file 15-Max_Two_Value.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 29-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a recursive function that finds the two largest values in an array.
 */

#include <stdio.h>

void max_two_value(int [], int, int, int);


int main() {
	int arr[] = {10, 123, 99, 86, 203, 74, 1, 46, 7, 23};
	
	max_two_value(arr, 0, 1, 9);
	
	
	return 0;
}

void max_two_value(int arr[], int max1, int max2, int i) {
	if (i == -1) {		// Exit Case
		printf("Max1: %d\nMax2: %d", max1, max2);
		return;
	}
	
	if (arr[i] > max1) {
		max2 = max1;
		max1 = arr[i];
	}
	else if (arr[i] > max2) {
		max2 = arr[i];
	}
	
	max_two_value(arr, max1, max2, i-1);
}
