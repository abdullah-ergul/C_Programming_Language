/**
 * @file 4-Insert_to_Array.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 28-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes an array and a number from the user then inserts number into the array.
 */

#include <stdio.h>

void insert(int [], int);


int main() {
	int i, number, array[6];
	
	for (i=0 ; i<5 ; i++) {
		printf("Enter %dth element of array: ", i+1);  scanf("%d", &array[i]);
	}
	
	printf("Enter the number you want to insert: ");  scanf("%d", &number);
	
	insert(array, number);
	

	return 0;
}

void insert(int array[], int number) {
	int i;

	array[5] = number;			// Firstly add the number to the end of the array.
								// (It could be deleted later. We garantee that if max number is entered, it will be added to the end of the array.)
	
	for (i=4 ; i>=0 && number<array[i]  ; i--)	// Find the index of the number that is smaller than the number to be inserted.
		array[i+1] = array[i];
	
	array[i] = number;			// Insert the number to the array.

	printf("\nNew array: ");
	for (i=0 ; i<6 ; i++)		// Print the new array.
		printf("%d ", array[i]);
}
