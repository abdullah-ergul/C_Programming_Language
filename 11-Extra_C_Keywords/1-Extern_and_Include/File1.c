/**
 * @file File1.c
 * @author Abdullah Ergul
 * @version 0.1
 * @date 10-01-2024
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 */

#include <stdio.h>
#include "File2.c"		// Include File2.c file

int gid = 287;	// Global variable


int main() {
	printf("'gid' variable on File_1.c: %d\n", gid);
	func();		// Call func() from File2.c
	

	return 0;
}
