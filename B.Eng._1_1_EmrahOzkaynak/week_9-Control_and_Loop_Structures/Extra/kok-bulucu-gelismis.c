#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,derece;
	float x1,x2,delta,g;
	
	printf("Denklemin Derecesini Giriniz: ");
	scanf("%d",&derece);
	if (derece==1){
		
		printf("x'in Katsayisini Giriniz: ");
		scanf("%d",&b);
		
		printf("Denklemin Sabit Sayisini Giriniz: ");
		scanf("%d",&c);
		
		x1= (-c)/b;
		printf("Denklemin Koku %f'dir.",&x1);
	}
	else if (derece==2){
		
		printf("X^2 nin Katsayisini Giriniz: ");
		scanf("%d",&a);
		
		printf("x'in Katsayisini Giriniz: ");
		scanf("%d",&b);
		
		printf("Denklemin Sabit Sayisini Giriniz: ");
		scanf("%d",&c);
		
		//g=pow(b,2);
		delta= pow(b, 2)-(4*a*c);
		
		if (delta<0){
			printf("Denklemin Reel Koku Yoktur.");
		}
		else if(delta=0){
			g= pow(delta,0.5);
			x1= (-b - g)/(2*a);
			printf("Denklemin Koku Cift Koktur ve %f'dir.",&x1);
		}
		else{
			g= pow(delta,0.5);
			x1= (-b - g)/(2*a);
			x2= (-b + g)/(2*a);
			printf("Denklemin 1. Koku %f, 2. Koku Ise %f'dir.",&x1,&x2);
		}
	}
	else{
		printf("Lutfen 1 yada 2 Degerlerinden Birini Giriniz!");
	}
	return 0;
}
