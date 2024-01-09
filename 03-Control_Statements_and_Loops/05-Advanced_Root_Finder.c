/**
 * @file 5-Advanced_Root_Finder.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 26-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 *
 * 
 // ? Question: Write a program that takes the coefficients of a quadratic equation and equations degree from the user.
 // ? Afer finds the roots of the equation.
 */

#include <stdio.h>
#include <math.h>


int main() {
	int a, b, c, degree;
	double x1, x2, delta;
	
	printf("Enter the degree of the equation: ");
	scanf("%d", &degree);
	
	if (degree == 1) {		// If the degree is 1, the equation is linear
		printf("Coefficient of x: ");
		scanf("%d", &b);
		
		printf("Constant term: ");
		scanf("%d", &c);
		
		x1 = (-1*c)/b;
		printf("x = %lf", x1);
	}
	else if (degree == 2) {	// If the degree is 2, the equation is quadratic
		
		printf("Coefficient of x^2: ");
		scanf("%d", &a);
		
		printf("Coefficient of x: ");
		scanf("%d", &b);
		
		printf("Constant term: ");
		scanf("%d", &c);
		
		delta = pow(b, 2)-(4*a*c);
		
		if (delta < 0) {
			printf("There is no real root.");
		}
		else if (delta == 0) {
			x1 = (-1*b - sqrt(delta))/(2*a);
			printf("x1 = x2 = %lf", x1);
		}
		else {
			x1 = (-1*b - sqrt(delta))/(2*a);
			x2 = (-1*b + sqrt(delta))/(2*a);
			printf("x1 = %lf\nx2 = %lf", x1, x2);
		}
	}
	else {					// If the degree is not 1 or 2, the equation is not linear or quadratic
		printf("The equation is not linear or quadratic.");
	}


	return 0;
}
