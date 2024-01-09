/**
 * @file File2.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 10-01-2024
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 */


extern int gid;		// gid variable is defined in File1.c

void func(void){
	printf("'gid' variable on File_2.c: %d", gid);		// We dont include File1.c, but we can use gid variable. Also we dont include stdio.h, but we can use printf() function.
}
