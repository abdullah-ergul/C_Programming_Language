/**
 * @file 7-Repetition_Count
 * @author Abdullah Ergul
 * @version 2.0
 * @date 06-12-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that prints the number of repetitions of each letter in the word.
 */

#include <stdio.h>


int main() {
	int counter=0;
	char str[20];
	
	printf("Enter a sentence: ");  gets(str);
	
	for (int i=65 ; i<=90 ; i++) {		// In ASCII table, A=65 and Z=90. Also we use characters as integer.
		for (int j=0; *(str+j) != '\0'; j++) {	// Inner loop for checking the whole sentence for each character.
			if (*(str+j) == i)
				counter++;
		}
		if (counter != 0)
			printf("There are %d of the character %c\n", counter, i);	// %c is used for characters. If we use %d, it will print the ASCII value of the character.
		counter=0;
	}
	

	return 0;
}
