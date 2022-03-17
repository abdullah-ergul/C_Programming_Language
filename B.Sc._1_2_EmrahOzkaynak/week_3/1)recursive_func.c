#include <stdio.h>


int obeb(int a, int b, int i){
	int c;
	if(a<b){
		c=a;
		a=b;
		b=c;
	}

	if(a%i==0 && b%i==0)
		return i;
	printf("\n%d",i);
	return obeb(a,b,--i);
}

int main(){
	int a,b,c;
	
	printf("Ilk sayi: ");
	scanf("%d",&a);
	printf("Ikinci sayi: ");
	scanf("%d",&b);
	
	c= obeb(a,b,b);
	printf("Cevap= %d",c);
	
	return 0;
}
