/**
 * @file 1-Arrays.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 26-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes 10 numbers from the user and performs the following operations on the array.
 // ? 1-) Sum array's elements.
 // ? 2-) Find array's average.
 // ? 3-) Find array's elements that are bigger than average.
 // ? 4-) Print array's elements in reverse order.
 // ? 5-) Find array's biggest and smallest elements.
 // ? 6-) Sort array's elements in ascending order.
 // ? -1-) Exit.
 // ? If user enters none of the above, print "Wrong choice! Try again." and show the menu again.
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int n, choice, i, sum, avg;
	int A[10] = {0};		// Initialize array with 10 elements and all elements are 0.
	
	for (i=0 ; i < 10 ; i++) {	// Take 10 numbers from the user.
		printf("Enter array's %dth element: ", i+1);  scanf("%d", &A[i]);	// We can write two different statements in one line.
	}
	
	while (1) {		// Menu, enters the loop until user enters -1.
		printf("\n\n 1 - Sum array's elements.");
		printf("\n 2 - Find array's average.");
		printf("\n 3 - Find array's elements that are bigger than average.");
		printf("\n 4 - Print array's elements in reverse order.");
		printf("\n 5 - Find array's biggest and smallest elements.");
		printf("\n 6 - Sort array's elements in ascending order.");
		printf("\n-1 - Exit.");
		
		printf("\n\nEnter your choice: ");  scanf("%d", &choice);
		printf("\n");
		
		
		if (choice == 1) {	// Sum array's elements.
			sum = 0;
			for (i=0 ; i<10 ; i++) 
				sum += A[i];
			printf("\nSum of array's elements is %d.", sum);
		}
		
		else if (choice == 2) {		// Find array's average.
			sum = 0;
			for (i=0 ; i<10 ; i++)
				sum += A[i];
			avg = sum/10;
			printf("\nAverage of array's elements is %d.", avg);
		}
		
		else if (choice == 3) {		// Find array's elements that are bigger than average.
			sum = 0;
			for (i=0 ; i<10 ; i++)
				sum += A[i];
			avg = sum/10;
			
			printf("\nArray's elements that are bigger than average: ");
			for (i=0 ; i<10 ; i++)
				if(A[i] > avg)
					printf("%d, ", A[i]);
		}
		
		else if (choice == 4) {		// Print array's elements in reverse order.
			printf("\nArray's elements in reverse order: ");
			for (i=10 ; i > 0 ; i--)
				printf("%d, ", A[i-1]);
		}
		
		else if (choice == 5) {		// Find array's biggest and smallest elements.
			int max = A[0], min = A[0];
			for (i=0 ; i<10 ; i++) {
				if (A[i] > max)
					max= A[i];
				else if (A[i] < min)
					min= A[i];
			}
			printf("\nArray's biggest element is %d and smallest element is %d.", max, min);
		}
		
		else if (choice == 6) {		// Sort array's elements in ascending order.
			int j, temp;
			for (i=0 ; i<10 ; i++) {
				for (j=i+1 ; j<10 ; j++) {
					if (A[i] > A[j]) {		// If A[i] is bigger than A[j], swap them.
						temp = A[i];
						A[i] = A[j];
						A[j] = temp;
					}
				}
			}
			printf("\nArray's elements sorted in ascending order: ");
			for (i=0 ; i<10 ; i++)
				printf("%d, ", A[i]);
			
		}
		
		else if (choice == -1) {	// Exit.
			printf("\nExit...");
			break;
		}
		
		else						// Wrong choice.
			printf("\nWrong choice! Try again.");
		
	}	// End of while loop.


	return 0;
}
