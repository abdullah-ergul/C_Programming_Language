/**
 * @file 2-Register.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 10-01-2024
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 // * Brief: Register keyword is used to define local variables that should be stored in a register instead of RAM.
 */

#include <stdio.h>
#include <time.h>


int main() {
	clock_t start_t, end_t;

	// With register keyword, we can store variables in CPU registers instead of RAM.
	register int id1, id2;
	
	start_t = clock();
	
	for (id1=0 ; id1<20000000 ; id1++) {
		for (id2=0 ; id2<100 ; id2++) {
		}
	}
	
	end_t = clock();
	
	printf("With register keyword, start_t value = %lu\n", start_t);
	printf("With register keyword, end_t value = %lu\n", end_t);
	printf("With register keyword, loop run time (sec) = %.3f", (double)(end_t - start_t) / CLOCKS_PER_SEC);

	printf("\n\n");

	// Without register keyword, we can store variables in RAM instead of CPU registers.
	int id3, id4;
	
	start_t = clock();
	
	for (id3=0 ; id3<20000000 ; id3++) {
		for (id4=0 ; id4<100 ; id4++) {
		}
	}
	
	end_t = clock();
	
	printf("Without register keyword, start_t value = %lu\n", start_t);
	printf("Without register keyword, end_t value = %lu\n", end_t);
	printf("Without register keyword, loop run time (sec) = %.3f", (double)(end_t - start_t) / CLOCKS_PER_SEC);

	
	return 0;
}
