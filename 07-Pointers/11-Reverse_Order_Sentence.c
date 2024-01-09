/**
 * @file 11-Reverse_Order_Sentence.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 16-12-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes a sentence from the user and prints the order of the words in the sentence in reverse order.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	char *sentence = (char *)malloc(100*sizeof(char));
	char *word = (char *)malloc(10*sizeof(char));
	
	printf("Enter the sentence: ");  gets(sentence);
	printf("\n");
	
	// Outer loop for sentence
	for (int i=strlen(sentence)-1 ; i>=0 ; i--) {
		// Inner loop for word
		for (int j=i ; j>=0 ; j--) {
			if (*(sentence+j-1) == ' ' || j==0) {
				for (int k=j ; *(sentence+k)!=' ' && *(sentence+k)!='\0' ; k++)
					printf("%c", *(sentence+k));
				printf(" ");
				i = j;	// For outer loop, to continue from the last word.
				break;
			}
		}
	}
	
	
	return 0;
}
