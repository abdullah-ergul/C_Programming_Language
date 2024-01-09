/**
 * @file 9-Max_Value.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 16-12-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Find the maximum value in an array using pointers
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
	int n;
	
	printf("Enter size of array: ");
	scanf("%d", &n);
	
	int *arr = (int *)malloc(n*sizeof(int));
	
	// Get array elements from user
	for (int i=0 ; i<n ; i++) {
		printf("%d. Number: ", i+1);
		scanf("%d", arr+i);
	}

	// Initialize max value with first element of array
	int max = *arr;
	
	// Find max value in array
	for (int i=1 ; i<n ; i++) {
		if (max < *(arr+i))
			max = *(arr+i);
	}
	
	printf("\nMax veriable value in array: %d", max);
	

	return 0;
}
