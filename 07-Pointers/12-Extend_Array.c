/**
 * @file 12-Extend_Array.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 17-12-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes an array from the user and extends the array by the number of elements entered by the user.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int size, extra;
	
	// Get size of array from user and create an array
	printf("Value of array lenght: ");  scanf("%d", &size);
	int *ptr = (int *)malloc(size*sizeof(int));
	
	for (int i=0 ; i<size ; i++) {
		printf("%dth number: " ,i+1);  scanf("%d", ptr+i);
	}
	
	// Get extra size of array from user and extend an array
	printf("Value of extra array lenght: ");  scanf("%d",&extra);
	ptr = (int *)realloc(ptr, extra*sizeof(int));	// realloc() function changes the size of the memory block pointed to by ptr
													// realloc() function returns void pointer (void*). so we need to cast it to (int*)
	
	for (int i=0 ; i<extra ; i++) {
		printf("%dth extra number: ", i+1);  scanf("%d", ptr+size+i);
	}
	
	// Print array
	printf("\n");
	for (int i=0; i<size+extra ; i++)
		printf("%d ",*(ptr+i));
	

	return 0;
}
