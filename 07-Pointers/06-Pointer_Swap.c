/**
 * @file 6-Pointer_Swap.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 09-12-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes two numbers from the user and swaps them using pointers.
 */

#include <stdio.h>

void fun(int *, int *);


int main() {
	int num1, num2;
	
	printf("1st Number: ");  scanf("%d", &num1);
	printf("2nd Number: ");  scanf("%d", &num2);
	
	fun(&num1, &num2);	// When we use '&' operator, we send the address of the variable.
	
	printf("\n1.Number is: %d", num1);		// Be careful, we just call a void function but a and b are changed.
	printf("\n2.Number is: %d", num2);
	
	
	return 0;
}

void fun(int *pnum1, int *pnum2) {
	int temp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = temp;
}
