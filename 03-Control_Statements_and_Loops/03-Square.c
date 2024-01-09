/**
 * @file 3-Square.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 26-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that calculates the circumference and area of a circle whose radius is taken from the user.
 */

#include <stdio.h>


int main() {
	int choice;
	float radius, ans, pi= 3.1415926535f;	// We write 3.1415926535f because the pi number is a float number.
	
	printf("For the circumference of the circle: 1\nFor the area of the circle: 2\n\nYour choice:");
	scanf("%d", &choice);
	
	if (choice == 1) {
		printf("\nRadius length: ");
		scanf("%f", &radius);
		
		ans = 2*pi*radius;
		
		printf("\nCircumference of the circle: %f", ans);
	}
	else if (choice == 2) {		// We use 'else if' because we want to check the second condition if the first condition is not true.
		printf("\nRadius length: ");
		scanf("%f", &radius);
		
		ans = pi*radius*radius;
		
		printf("\nArea of the circle: %f", ans);
	}
	else {
		printf("\nWrong choice!");
	}
	

	return 0;
}
