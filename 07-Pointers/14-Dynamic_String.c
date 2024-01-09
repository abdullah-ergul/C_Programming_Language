/**
 * @file 14-Dynamic_String.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 18-12-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes words from the user until anything is entered and stores them in a dynamic string.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	int size_chars=0, size_spaces=0;
	char *sentence= (char *)malloc(1*sizeof(char));
	char *word= (char *)malloc(10*sizeof(char));

	// Get first word
	printf("Enter a Word: ");  gets(word);

	// Check NULL and add word to sentence
	while (*word != 0) {	// Or (*word) or (*word != '\0') or (*word != NULL) ... // ! NULL means 0 in C
		sentence = (char *)realloc(sentence, (size_chars+size_spaces+1+strlen(word))*sizeof(char));		// +1 for NULL
		strcpy(sentence+size_chars+size_spaces, word);													// Copy word to sentence
		*(sentence+strlen(word)+size_chars+size_spaces) = ' ';											// Add space
		size_chars += strlen(word);																		// Update size_chars
		size_spaces++;																					// Update size_spaces
		printf("Enter a Word: ");  gets(word);															// Get next word
	}
	
	// Print sentence
	puts(sentence);
	
	// free() function is used to dynamically de-allocate the memory. If we don’t free the memory, it will lead to memory leak.
	free(word); free(sentence);
	

	return 0;
}
