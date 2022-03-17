#include <stdio.h>
#include <math.h>
int main(){
	int m,h,v;
	float g=9.98;
	
	printf("Cismin Kutlesi: ");
    scanf("%d",&m);
    printf("Cismin Yerden Yuksekligi: ");
    scanf("%d",&h);
    printf("Cismin Hizi: ");
    scanf("%d",&v);
    
    printf("\nCismin Potansiyel Enerjisi: %f",(float)m*g*h);
    printf("\nCismin Kinetik Enerjisi: %f",(float)0.5*m*pow(v,2));
    
    return 0;
}
