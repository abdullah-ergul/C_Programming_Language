/**
 * @file 1-Strings.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 27-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes two strings str1 and str2 from the user and performs the following operations on the strings.
 // ? 1 - Find the length of str1.
 // ? 2 - Find the length of str2.
 // ? 3 - Concatenate str1 and str2.
 // ? 4 - Find the largest character in str1.
 // ? 5 - Find the smallest character in str2.
 // ? -1 - Exit.
 // ? If user enters none of the above, print "Wrong choice! Try again." and show the menu again.
 */

#include <stdio.h>
#include <stdlib.h>		// for system("exit");


int main() {
	int i, j, choice;
	char str1[100], str2[100], str3[200], max, min;
	
	printf("Enter 1st string: ");  gets(str1);	// gets() reads a line from stdin into the buffer pointed to by str until a newline character is found.
	printf("Enter 2nd string: ");  gets(str2);	// Or we can use scanf("%[^\n]%*c", str1);

	
	while (1) {

		printf("\n 1 - Lenght of str1.");
		printf("\n 2 - Lenght of str2.");
		printf("\n 3 - Concatenate str1 and str2.");
		printf("\n 4 - Find the largest character in str1.");
		printf("\n 5 - Find the smallest character in str2.");
		printf("\n-1 - Exit.");
	
		printf("\n\nEnter your choice: ");  scanf("%d", &choice);
		printf("\n");


		switch (choice) {
		
			case 1:		// Lenght of str1
				i = 0;
				while (str1[i] != '\0')
					i++;
				printf("\nLenght of str1: %d", i);
				printf("\n-------------------------");
				break;
			
			// * ---------------------------------------------------------------------------

			case 2:		// Lenght of str2
				i = 0;
				while(str2[i] != '\0')
					i++;
				printf("\nLenght of str2: %d", i);
				printf("\n-------------------------");
				break;

			// * ---------------------------------------------------------------------------
			
			case 3:		// Concatenate str1 and str2
				i=0;
				while (str1[i] != '\0') {
					str3[i]= str1[i];
					i++;
				}
			
				j=0;
				while (str2[j] != '\0') {
					str3[i+j]= str2[j];
					j++;
				}
			
				puts(str3);		// puts() prints the string and a newline character. Or we can use printf("%s", str3);
				printf("\n-------------------------");
				break;

			// * ---------------------------------------------------------------------------

			case 4:		// Find the largest character in str1
				max = str1[0];
				i=0;
				while (str1[i] != '\0') {
					if (str1[i] > max)
						max = str1[i];
					i++;
				}

				printf("\nLargest character in str1: %c", max);
				printf("\n-------------------------");
				break;
				
			case 5:		// Find the smallest character in str2
				min= str2[0];
				i=0;
				while(str2[i] != '\0'){
					if(str2[i] < min){
						min = str2[i];
					}
					i++;
				}
				printf("\nSmallest character in str2: %c", min);
				printf("\n-------------------------");
				break;

			// * ---------------------------------------------------------------------------
				
			case -1:	// Exit
				system("exit");

			// * ---------------------------------------------------------------------------

			default:	// Wrong choice
				printf("\nWrong choice! Try again.");
				printf("\n-------------------------");
				break;
				
		}
	
	}	// end of while
	
	
	return 0;
}
