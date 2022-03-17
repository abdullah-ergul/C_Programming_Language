#include <stdio.h>
#include <math.h>
int main(){
	int p,k,a;
	float h,b,c;
	
	printf("p Uzulugunu Giriniz: ");
    scanf("%d",&p);
    printf("k Uzulugunu Giriniz: ");
    scanf("%d",&k);
    
    a= p+k;
    
    printf("\nh= %f",(float)pow(p*k,0.5));
    printf("\nb= %f",(float)pow(a*k,0.5));
    printf("\nc= %f",(float)pow(a*p,0.5));
    
    return 0;
}
