/**
 * @file 10-Concanate_Two_Strings.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 16-12-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that concanate two strings.
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
	int n, s;
	
	printf("Lenght of your name: ");  scanf("%d", &n);
	printf("Lenght of your surname: ");  scanf("%d", &s);
	
	char *name = (char *)malloc(n*sizeof(char));
	char *sname = (char *)malloc(s*sizeof(char));
	char *combined = (char *)malloc((n+s+1)*sizeof(char));	// +1 for space
	
	printf("\nYour Name: ");  scanf("%s", name);
	printf("Your Surname: ");  scanf("%s", sname);
	
	// Copy 'name' string to 'combined' string
	for(int i=0; i<n; i++)
		*(combined+i)= *(name+i);

	*(combined+n)= ' ';	// space

	// Copy 'sname' string to 'combined' string
	for(int i=0; i<s; i++)
		*(combined+n+1+i)= *(sname+i);
	
	printf("\nYour Name and Surname: %s", combined);
	

	return 0;
}
