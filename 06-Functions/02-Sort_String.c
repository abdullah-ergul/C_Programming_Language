/**
 * @file 2-Sort_String.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 28-11-2023
 * 
 * @copyright Copyright (c) 2023
 * 
 * 
 // ? Question: Write a function that sorts the characters in a string in alphabetical order.
 */

#include <stdio.h>

void sorter(char []);


int main() {
	char str[20];
	
	printf("Enter a string: ");  gets(str);
	
	sorter(str);


	return 0;
}

void sorter(char str[]) {
	int i, j;
	char c;
	
	for (i=0 ; str[i] != '\0' ; i++) {
		for (j = i+1 ; str[j] != '\0' ; j++) {
			if (str[i] > str[j]) {
				c = str[i];
				str[i] = str[j];
				str[j] = c;
			}
		}
	}
	
	printf("\nSorted string: %s", str);
}
