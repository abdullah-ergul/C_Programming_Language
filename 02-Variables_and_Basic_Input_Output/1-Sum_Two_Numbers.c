/**
 * @file 1-Sum_Two_Numbers.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 26-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes 2 numbers from the user and writes the sum of these numbers on the screen.
 */

#include <stdio.h>    // We write this Input/Output library to use printf() and scanf() functions.


int main() {        // main() is the main function of the program. Every programs starts from here.
    int num1, num2;     // We must define variables before use them. 
                        // int is used to define integer variables. We can define multiple variables in a single line.

    printf("Enter first number: ");     // printf() is used to print on the screen.
	scanf("%d", &num1);                 // scanf() is used to read from the screen.

    printf("Enter second number: ");
	scanf("%d", &num2);

    printf("%d + %d = %d", num1, num2, num1+num2);  // %d is used to print integer values between of double quotes. ( " %d " )


    return 0;    // return 0 means the program is successfully executed.
}
