#include <stdio.h>
#include <math.h>
int main(){
	int f,e,aci,a;
	double alan;
	
	printf("1. Kosegen Uzunlugu: ");
    scanf("%d",&f);
    printf("2. Kosegen Uzunlugu: ");
    scanf("%d",&e);
    printf("Kosegenler Arasindaki Aci: ");
    scanf("%d",&aci);
	
	a= 180-aci;
	
	alan= (double)0.5*f*e*sin(a);
	
	printf("\naci: %d",a);
	printf("\nsin: %f",cos(a));
	printf("\nDortgenin Alani: %f",alan);
	
	return 0;
}
