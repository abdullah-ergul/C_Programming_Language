/**
 * @file 3-Static_veriable.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 10-01-2024
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 // * Brief: Static variables are variables that are defined in a function and are not destroyed when the function is terminated.
 */

#include <stdio.h>

void func(void);
void funt_static(void);


int main() {
	func();
	funt_static();
	
	printf("\n\n");
	
	func();
	funt_static();

	// Output will be like this:

	// func() id value = 1
	// func() id value = 22
	// funt_static() id value = 1
	// funt_static() id value = 22

	// func() id value = 1
	// func() id value = 22
	// funt_static() id value = 22
	// funt_static() id value = 43

	// Because static variables are not destroyed when the function is terminated.
	// When function run first time, static variable is created and it's value is 1. After that, it's value is 22.
	// When function run second time, static variable is not created again, it's value is 22. After that, it's value is 43.


	return 0;
}

void func(void) {
	int id = 1;
	
	printf("func() id value = %d\n", id);
	id = id+21;
	printf("func() id value = %d\n", id);
}

void funt_static(void) {
	static int id = 1;

	printf("funt_static() id value = %d\n", id);
	id = id+21;
	printf("funt_static() id value = %d\n", id);
}
