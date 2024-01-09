/**
 * @file 1-Calculate_Score.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 26-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes the midterm and final exam grades from the user and calculates the average.
 */

#include <stdio.h>


int main() {
	int midterm, final;
	float avg;	// We write float because the average can be a decimal number.
	
	printf("Enter midterm grade: ");
	scanf("%d", &midterm);
	
	printf("Enter final grade: ");
	scanf("%d", &final);
	
	avg = midterm*0.4 + final*0.6;
	
	if (avg < 50) {		// If the average is less than 50, the student fails the course.
		printf("You failed the course with a grade of %.2f", avg);	// %f is used to print decimal values between of double quotes. ( " %f " )
	}
	else {				// If the average is greater than or equal to 50, the student passes the course.
		printf("You passed the course with a grade of %.2f", avg);	// %.2f is used to prints the first 2 decimals.
																	// If you want to print 'n' decimals, you should use %.nf
	}


	return 0;
}