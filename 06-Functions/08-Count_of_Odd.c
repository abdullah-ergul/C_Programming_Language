/**
 * @file 8-Count_of_Odd.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 29-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a recursive function that counts the number of odd numbers in an array.
 */

#include <stdio.h>

int count_odd(int [], int);


int main() {
	int arr[] = {7, 9, 5, 4, 2, 11};
	
	printf("Count of odd: %d", count_odd(arr, 5));
	

	return 0;
}

int count_odd(int arr[], int i) {
	if (i == -1)		// Exit case. We use -1 because we want to look for arr[0] too.
		return 0;
	
	// And we choose from 2 different return statements according to arr[i] is odd or not.
	if (arr[i] % 2 == 1)	
		return 1 + count_odd(arr, i-1);		// If arr[i] is odd, we add 1 to the count and call the function again.
	else
		return count_odd(arr, i-1);			// If arr[i] is even, we don't add anything to the count and call the function again.
}
