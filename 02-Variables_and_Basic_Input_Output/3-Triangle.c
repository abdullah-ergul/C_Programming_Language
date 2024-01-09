/**
 * @file 3-Triangle.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 26-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that calculates the area of a triangle whose sides are entered by the user.
 */

#include <stdio.h>
#include <math.h>   // We write this library to use sqrt() function.


int main() {
	int side1, side2, side3;
	float u, area;
	
    printf("Enter triangles;\n1st side: ");
    scanf("%d", &side1);
    printf("2nd side: ");
    scanf("%d", &side2);
    printf("3rd side: ");
    scanf("%d", &side3);
    
    u = (float)(side1+side2+side3)/2;   // We write (float) before the operation to convert the result of a+b+c to float.
    area = sqrt(u*(u-side1)*(u-side2)*(u-side3));   // We write sqrt() to calculate the square root of the result of u*(u-side1)*(u-side2)*(u-side3).
    
    printf("\nArea of the triangle: %f", area);
    

    return 0;
}
