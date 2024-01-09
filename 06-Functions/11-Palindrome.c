/**
 * @file 11-Palindrome.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 29-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a recursive function that checks whether the string is palindrome or not.
 */

#include <stdio.h>
#include <string.h>

void pal(char []);


int main() {
	char str[20];
	
	printf("String: ");  gets(str);
		
	pal(str);
	

	return 0;
}

void pal(char str[]) {
	static int i = 0;

	// Exit case
	if(str[i] == '\0') {
		printf("The string is palindrome.");
		return ;	// We can use "return ;"" or "return 0;"" in void functions.
	}
	
	// If the first and last elements are not equal, the string is not palindrome. Its also an exit case.
	if(str[i] != str[strlen(str)-i-1]) {
		printf("The string is not palindrome.");
		return ;
	}

	// Recursive case
	i++;
	return pal(str);
}
