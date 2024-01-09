/**
 * @file 1-Array_Printer.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 06-12-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that prints the elements of the array.
 */

#include <stdio.h>


int main() {
	int i, arr[10]= { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	
	for (i=0 ; i<10 ; i++)
		printf("%d ", *(arr+i));	// If we use '*' before a pointer, it will show the value of the address that the pointer points to.
	
	
	return 0;
}
