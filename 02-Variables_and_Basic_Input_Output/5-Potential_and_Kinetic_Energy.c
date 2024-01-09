/**
 * @file 5-Potential_and_Kinetic_Energy.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 26-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that calculates the potential and kinetic energy of a body whose mass, height and speed are entered by the user.
 */

#include <stdio.h>


int main() {
	float mass, height, speed, g=9.98f;
	
	printf("Mass of object(kg): ");
    scanf("%f", &mass);
    printf("Height of object(m): ");
    scanf("%f", &height);
    printf("Speed of object(m/s): ");
    scanf("%f", &speed);
    
    printf("\nPotantial energy of object: %f", mass*g*height);
    printf("\nKinetic energy of object: %f", (mass*speed*speed)/2);
    
    
    return 0;
}
