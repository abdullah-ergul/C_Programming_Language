/**
 * @file 3-Vowel_Letter .c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 28-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes a string from the user and prints the number of vowels in the string.
 */

#include <stdio.h>

void vowel(char []);


int main() {
	char str[20];
	
	printf("Enter a string: ");  gets(str);
	
	vowel(str);


	return 0;
}

void vowel(char str[]){
	int i, j, count=0;
	char vowels[] = "AEIOUaeiou";
	
	for (i=0 ; str[i]!='\0' ; i++) {
		for (j=0 ; vowels[j]!='\0' ; j++) {
			if (str[i] == vowels[j])
				count++;
		}
	}

	printf("\nNumber of vowels: %d", count);
}
