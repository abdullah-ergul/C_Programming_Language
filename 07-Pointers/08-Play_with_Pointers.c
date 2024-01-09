/**
 * @file 8-Play_with_Pointers.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 09-12-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
	int i;
	int *ptr = (int*)malloc(5*sizeof(int));	 // malloc() function allocates dynamic memory in heap
											 // malloc() function returns void pointer (void*). so we need to cast it to (int*)
	for(i=0; i<5; i++)		// ptr = {0, 1, 2, 3, 4}
		*(ptr+i)=i;
	
	printf("%d ", *ptr++);		// Output: 0  |  Prints value at ptr and then increments ptr
	printf("%d ", *(ptr)++);	// Output: 1  |  Prints value at ptr and then increments ptr
	printf("%d ", *ptr);		// Output: 2  |  Prints value at ptr
	printf("%d ", *++ptr);		// Output: 3  |  Increments ptr and then prints value at ptr
	printf("%d ", ++*ptr);		// Output: 4  |  Increments value at ptr and then prints value at ptr
	printf("%d ", *ptr);		// Output: 4  |  Prints value at ptr, ptr was not changed in previous line
	

	return 0;
}
