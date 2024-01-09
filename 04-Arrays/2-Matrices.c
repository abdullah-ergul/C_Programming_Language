/**
 * @file 2-Matrices.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 27-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes two matrices matrix1 and Nmatrix2 from the user and performs the following operations on the matrices.
 // ? 1 - Print the Matrix1.
 // ? 2 - Print the Matrix2.
 // ? 3 - Add two matrices.
 // ? 4 - Print the transpose of Matrix1.
 // ? 5 - Multiply two matrices.
 // ? 6 - Perform a symmetric check for Matrix1.
 // ? 7 - Take the inverse of matrix Matrix1.
 // ? -1 - Exit.
 // ? If user enters none of the above, print "Wrong choice! Try again." and show the menu again.
 */

#include <stdio.h>


int main() {
	int choice=0, i, j, k;
	
	int matrix1[3][3];
	int matrix2[3][3];
	int sum_matrix[3][3];
	int transpose_matrix[3][3];
	int mult_matrix[3][3];
	int inverse_matrix[3][3];
	
	printf("As Matrix1(3x3) and Matrix2(3x3)\n");
	printf("\n-------------------------\n\nFor Matrix1;\n\n");
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			printf("Element of Matrix1[%d][%d] : ", i, j);  scanf("%d", &matrix1[i][j]);
		}
	}
	
	printf("\n-------------------------\n\nFor Matrix2;\n\n");
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			printf("Element of Matrix2[%d][%d] : ", i, j);  scanf("%d", &matrix2[i][j]);
		}
	}
	
	printf("\n-------------------------");
	
	while (1) {
		
		printf("\n\n 1 - Print the Matrix1.");
		printf("\n 2 - Print the Matrix2.");
		printf("\n 3 - Add two matrices.");
		printf("\n 4 - Print the transpose of Matrix1.");
		printf("\n 5 - Multiply two matrices.");
		printf("\n 6 - Perform a symmetric check for Matrix1.");
		printf("\n 7 - Take the inverse of matrix Matrix1.");
		printf("\n-1 - Exit.");
		
		printf("\n\nEnter your choice: ");  scanf("%d", &choice);
		printf("\n");
		
		
		// * ---------------------------------------------------------------------------

		if (choice == 1) {			// Print the Matrix1.

			for (i=0 ; i<3 ; i++) {
				for (j=0 ; j<3 ; j++)
					printf("%d ", matrix1[i][j]);
				printf("\n");
			}
			printf("\n-------------------------");
		}

		// * ---------------------------------------------------------------------------

		else if (choice == 2) {		// Print the Matrix2.

			for (i=0 ; i<3 ; i++) {
				for (j=0 ; j<3 ; j++)
					printf("%d ", matrix2[i][j]);
				printf("\n");
			}
			printf("\n-------------------------");
		}

		// * ---------------------------------------------------------------------------

		else if (choice == 3) {			// Add two matrices.
			
			for (i=0 ; i<3 ; i++) {
				for (j=0 ; j<3 ; j++) {
					sum_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
					printf("%d ", sum_matrix[i][j]);
				}
				printf("\n");
			}
			printf("\n-------------------------");
		}

		// * ---------------------------------------------------------------------------
		
		else if (choice == 4) {		// Print the transpose of Matrix1.

			for (i=0 ; i<3 ; i++) {
				for (j=0 ; j<3 ; j++) {
					transpose_matrix[i][j] = matrix1[j][i];
					printf("%d ", transpose_matrix[i][j]);
				}
				printf("\n");
			}
			printf("\n-------------------------");
		}

		// * ---------------------------------------------------------------------------
		
		else if (choice == 5) {		// Multiply two matrices.
			
			for (i=0 ; i<3 ; i++) {
				for (j=0 ; j<3 ; j++) {
					mult_matrix[i][j] = 0;
					for (k=0 ; k<3 ; k++) {
						mult_matrix[i][j] = mult_matrix[i][j] + matrix1[i][k] * matrix2[k][j];
					}
					printf("%d ", mult_matrix[i][j]);
				}
				printf("\n");
			}
			printf("\n-------------------------");
		}

		// * ---------------------------------------------------------------------------
		
		else if (choice == 6) {		// Perform a symmetric check for Matrix1.
			
			int symmetric = 1;
			
			for (i=0 ; i<3 ; i++) {
				for (j=0 ; j<3 ; j++) {
					if (matrix1[i][j] != matrix1[j][i]) {
						symmetric = 0;
						break;
					}
				}
			}
			
			if (symmetric == 1)
				printf("Matrix1 is symmetric.\n");
			else
				printf("Matrix1 is not symmetric.\n");

			printf("\n-------------------------");
		}

		// * ---------------------------------------------------------------------------
		
		else if (choice == 7) {		// Take the inverse of Matrix1.
			
			for (i=0 ; i<3 ; i++) {
				for (j=0 ; j<3 ; j++) {
					inverse_matrix[i][j] = 0;
					for (k=0 ; k<3 ; k++) {
						inverse_matrix[i][j] = inverse_matrix[i][j] + matrix1[i][k] * matrix2[k][j];
					}
					printf("%d ", inverse_matrix[i][j]);
				}
				printf("\n");
			}
			
			printf("\n-------------------------");
		}

		// * ---------------------------------------------------------------------------
		
		else if (choice == -1) {	// Exit.
			printf("Exit...");
			break;
		}

		// * ---------------------------------------------------------------------------
		
		else {						// Wrong choice! Try again.
			printf("Wrong choice! Try again.\n");
			printf("\n-------------------------");
		}
		
	}	// end of while
	

	return 0;
}
