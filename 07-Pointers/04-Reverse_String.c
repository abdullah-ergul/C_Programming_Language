/**
 * @file 4-Reverse_String.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 09-12-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes a string from the user and prints it in reverse.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>	// strlen() function is in this library.


int main() {
	char str[50];
	
	printf("Enter your string: ");
	gets(str);	// gets() function is used to get a string from the user.
	
	for(int i=strlen(str)-1 ; i>= 0 ; i--)	// Same as the previous question. But this is a string and we use strlen() function to find the length of the string.
		printf("%c", *(str+i));
	
	
	return 0;
}
