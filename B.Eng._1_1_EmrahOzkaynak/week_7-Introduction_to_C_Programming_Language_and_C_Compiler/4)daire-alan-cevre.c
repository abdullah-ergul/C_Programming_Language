#include <stdio.h>
main(){
	int islem;
	float r,cvp,pi= 3.1415926535;
	
	printf("Dairenin Cevresi Icin: 1\nDairenin Alani Icin: 2\n\nSeciminiz: ");
	scanf("%d",&islem);
	
	if (islem==1){
		printf("\nYaricap Uzunlugu: ");
		scanf("%f",&r);
		
		cvp= 2*pi*r;
		
		printf("\nDairenin Cevresi: %f",cvp);
	}
	else if (islem==2){
		printf("\nYaricap Uzunlugu: ");
		scanf("%f",&r);
		
		cvp= pi*r*r;
		
		printf("\nDairenin Alani: %f",cvp);
	}
	else{
		printf("\nLutfen 1 yada 2 Giriniz");
	}
}
