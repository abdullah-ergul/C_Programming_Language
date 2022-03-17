#include <stdio.h>
#define SIZE 10

void buyuksayi(int fdizi[]);


main(){
	int sayi, i=0, dizi[10];
	
	while(i<10){
		printf("%d. elemani giriniz: ",i+1);
		scanf("%d",&sayi);
		
		dizi[i] = sayi;
		i++;
	}
	
	printf("\n");
	buyuksayi(dizi);
}

void buyuksayi(int fdizi[]){
	int i=1, enb1=fdizi[0], enb2=fdizi[0];
	
	while(i < 10){
		if(fdizi[i] > enb1){
			enb2= enb1;
			enb1= fdizi[i];
		}
		i++;
	}
	printf("En buyuk sayilar: %d ve %d",enb1,enb2);
}
