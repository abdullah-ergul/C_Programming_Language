#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	float u,alan;
	
    printf("1. Kenari Giriniz: ");
    scanf("%d",&a);
    printf("2. Kenar, Giriniz: ");
    scanf("%d",&b);
    printf("3. Kenari Giriniz: ");
    scanf("%d",&c);
    
    u= (float)(a+b+c)/2;
    alan= pow(u*(u-a)*(u-b)*(u-c),0.5);
    
    printf("\nUcgenin Alani: %f",alan);
    
    return 0;
}
