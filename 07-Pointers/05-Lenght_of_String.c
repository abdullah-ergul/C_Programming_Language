/**
 * @file 5-Lenght_of_String.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 09-12-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes a string from the user and prints its length.
 */

#include <stdio.h>


int main() {
	char str[20]={"Abdullah"};
	int i=0;
	
	// Just like using strlen() function.
	while(str[i] != '\0')
		i++;
	
	printf("%d", i);
	

	return 0;
}
