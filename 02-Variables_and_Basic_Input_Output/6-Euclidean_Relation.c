/**
 * @file 6-Euclidean_Relation.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 26-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that takes the lengths of the two veriables of a right triangle from the user and calculates the lengths of h, b and c sides. (Named according to the description images of the Euclidean relation)
 */

#include <stdio.h>
#include <math.h>


int main() {
	int p,k,a;
	float h,b,c;
	
	printf("Enter p lenght: ");
    scanf("%d", &p);
    printf("Enter k lenght: ");
    scanf("%d", &k);
    
    a = p+k;
    
    printf("\nh = %f", sqrt(p*k));
    printf("\nb = %f", sqrt(a*k));
    printf("\nc = %f", sqrt(a*p));
    

    return 0;
}
