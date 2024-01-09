/**
 * @file 10-Multiplication_Table_Side.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 26-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that prints the multiplication table of the numbers from 1 to 10.
 // ? But this time, first 5 numbers will be print side by side and the other 5 numbers will be print side by side on the buttom.
 */

#include <stdio.h>


int main() {
    int i, j;
    
    for (i=1; i<=10; i++) {      // Outer loop
        for (j=1; j<=5; j++) {   // Inner loop
            // * If the result of the multiplication is great than 10, we need to print a tab character instead of a space character.
            // * So we can use %2d instead of %d. Its mean that we will print 2 characters.
            // ! Otherwise, the table will be distorted.
            printf("%dx%d = %2d\t", j, i, i*j);
            
        }
        printf("\n");
    }

    printf("\n\n");     // Print two new lines to seperate the tables.

    for (i=1; i<=10; i++) {      // Outer loop
        for (j=6; j<=10; j++) {  // Inner loop
            // * If the result of the multiplication is great than 10, we need to print a tab character instead of a space character.
            // * So we can use %2d instead of %d. Its mean that we will print 2 characters.
            // ! Otherwise, the table will be distorted.
            printf("%dx%d = %2d\t", j, i, i*j);
        }
        printf("\n");
    }


    return 0;
}
