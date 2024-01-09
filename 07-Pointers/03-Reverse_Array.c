/**
 * @file 3-Reverse_Array.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 09-12-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that prints the elements of the array in reverse order.
 */

#include <stdio.h>


int main() {
	int arr[10]= { 3, 5, 7, 9, 11, 13, 15, 17, 19, 21 };
	
	for (int i=9 ; i>=0 ; i--)
		printf("%d ", *(arr+i));
	
	
	return 0;
}
