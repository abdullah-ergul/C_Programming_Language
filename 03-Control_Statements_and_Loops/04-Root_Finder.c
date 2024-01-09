/**
 * @file 4-Root_Finder.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 26-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes the coefficients of a quadratic equation as input and prints the roots of the equation.
 */

#include <stdio.h>
#include <math.h>


int main() {
	int a, b, c;			// Coefficients of the quadratic equation
	double delta, x1, x2;	// Delta and roots of the equation
	
	printf("Coefficient of x^2: ");
	scanf("%d", &a);
	
	printf("Coefficient of x: ");
	scanf("%d", &b);
	
	printf("Constant term: ");
	scanf("%d", &c);
	
	delta = b*b - 4*a*c;	// Delta is calculated
	
	printf("\n");
	if (delta < 0) {		// If delta is less than 0, there is no real root
		printf("There is no real root.");
	}
	else if (delta == 0) {	// If delta is equal to 0, there is only one real root
		x1 = (-1)*b / (2*a);
		printf("x1 = x2 = %lf", x1);
	}
	else {					// If delta is greater than 0, there are two real roots
		x1 = ((-1)*b - sqrt(delta)) / (2*a);
		x2 = ((-1)*b + sqrt(delta)) / (2*a);
		printf("x1 = %lf\nx2 = %lf", x1, x2);
	}

	
	return 0;
}