/**
 * @file 17-Fibonacci.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 02-12-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 // ? Question: Write a program that prints the Fibonacci series up to the number of terms entered by the user.
 */

#include <stdio.h>

int fibonacci(int);


int main() {
    int num;
    printf("Enter the number of terms: ");  scanf("%d", &num);

    printf("Fibonacci Series: ");
    for (int i = 0; i < num; i++)
        printf("%d ", fibonacci(i));

    
    return 0;
}

int fibonacci(int n) {
    if (n <= 1) {		// exit case
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);		// fib(n) = fib(n-1) + fib(n-2). So we call the function twice.
}
