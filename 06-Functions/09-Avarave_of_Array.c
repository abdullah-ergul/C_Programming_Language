/**
 * @file 9-Avarave_of_Array.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 29-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a recursive function that calculates the average of the elements in the array.
 */

#include <stdio.h>

double avg(double [], int);


int main() {
	double arr[] = {1, 2, 3, 4, 5, 6};
	
	printf("Avarage of array: %.2lf", avg(arr, 5));
	

	return 0;
}

double avg(double arr[], int i) {
	static double sum = 0;		// We use static variable because we don't want to reset it every time we call the function.
								// Static veriables are global veriables of the function.
	
	if (i == -1)
		return sum / 6;			// In exit case, we return the sum divided by the number of elements in the array.
	
	sum += arr[i];
	return avg(arr, i-1);
}
