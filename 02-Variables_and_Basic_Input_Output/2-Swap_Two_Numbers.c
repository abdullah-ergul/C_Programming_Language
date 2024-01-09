/**
 * @file 2-Swap_Two_Numbers.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 26-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes 2 numbers from the user and swaps these numbers.
 */

#include <stdio.h>


int main() {
    int num1, num2, temp;

    printf("Enter first number: ");
	scanf("%d", &num1);    // Automatically switches to a new line after scanf finishes

    printf("Enter second number: ");
	scanf("%d", &num2);

    temp = num2;
    num2 = num1;
    num1 = temp;

    printf("1st number: %d\n", num1);   // \n is used to print a new line.
    printf("2nd number: %d", num2);


    // ? If we had to work with only 2 variables? ------------------------------------------------------------

    printf("Enter first number: ");
	scanf("%d", &num1);

    printf("Enter second number: ");
	scanf("%d", &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("1st number: %d\n", num1);
    printf("2nd number: %d", num2);


    return 0;
}