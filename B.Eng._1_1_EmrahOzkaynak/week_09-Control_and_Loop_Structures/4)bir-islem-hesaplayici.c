#include <stdio.h>
int main(){
	int a,b,islem;
	float c;
	
	printf("1. Sayiyi Giriniz: ");
	scanf("%d",&a);
	
	printf("2. Sayiyi Giriniz: ");
	scanf("%d",&b);
	
	printf("1: Toplama\n2: Cikartma\n3: Carpma\n4: Bolme\nSeciminiz:  ");
	scanf("%d",&islem);
	
	if(islem==1){
		c=a+b;
	}else if(islem==2){
		c=a-b;
	}else if(islem==3){
		c=a*b;
	}else if(islem==4){
		c=a/b;
	}else{
		printf("!!!Gecersiz Islem!!!");
	}
	printf("Cevap= %f",c);
	return 0;
}