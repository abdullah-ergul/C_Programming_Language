/**
 * @file 4-Quadrilateral.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 26-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes the lengths of the diagonals of a quadrilateral and the angle between the diagonals as input and calculates the area of the quadrilateral.
 */

#include <stdio.h>
#include <math.h>


int main() {
	double diagonal1, diagonal2, angle, a, area;	// double is used to define double precision floating point variables.
	
	printf("1st diagonal length: ");
    scanf("%lf", &diagonal1);	// %lf is used to read double precision floating point values from the screen.
    printf("2nd diagonal length: ");
    scanf("%lf", &diagonal2);
    printf("Angle between diagonals: ");
    scanf("%lf", &angle);
	
	a = 180-angle;
	
	area = 0.5*diagonal1*diagonal2*sin(a);
	
	printf("\nAngle: %lf", a);
	printf("\nSin(%lf): %lf", angle, sin(angle));	// sin() and cos() functions are in math.h library.
	printf("\nArea of quadrilateral: %lf", area);
	
	
	return 0;
}
