#include <stdio.h>


int obeb(int a, int b){
	int c,i;
	if(a<b)
		c=a;a=b;b=c;
	
	for(i=b; i>0; i--){
		if(a%i==0 && b%i == 0)
			return i;
	}
	return i;
}

int main(){
	int a,b,c;
	
	printf("Ilk sayi: ");
	scanf("%d",&a);
	printf("Ikinci sayi: ");
	scanf("%d",&b);
	
	c= obeb(a,b);
	printf("Cevap= %d",c);
	
	return 0;
}
