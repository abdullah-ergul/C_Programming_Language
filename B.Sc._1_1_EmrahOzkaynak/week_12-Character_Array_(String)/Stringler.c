#include <stdio.h>
#include <stdlib.h>


main(){
	int i, j=0, islem;
	char str1[100], str2[100], str3[200], enb, enk;
	
	printf("1. str dizisini giriniz: ");
	gets(str1);
	
	printf("2. str dizisini giriniz: ");
	gets(str2);
	
	
	printf("\n1) str1 dizisinin uzunlugu.");
	printf("\n2) str2 dizisinin uzunlugu.");
	printf("\n3) str1 ve str2 dizilerini birlestir.");
	printf("\n4) str1 dizisindeki en büyük karakteri bul.");
	printf("\n5) str2 dizisindeki en küçük karakteri bul.");
	printf("\n-1) Programdan Cik.");
	
	printf("\n\nYapmak istediginiz islemi giriniz: ");
	scanf("%d",&islem);
	
	
	while(islem != -1){
		
		switch(islem){
		
			case 1:
				while(str1[i] != '\0'){
					i++;
				}
				printf("\n1. str dizisinin uzunlugu: %d",i);
				break;
			
			case 2:
				i= 0;
				while(str2[i] != '\0'){
					i++;
				}
				printf("\n2. str dizisinin uzunlugu: %d",i);
				break;
			
			case 3:
				i=0;
				while(str1[i] != '\0'){
					str3[i]= str1[i];
					i++;
				}
			
				j=0;
				while(str2[j] != '\0'){
					str3[i+j]= str2[j];
					j++;
				}
			
				puts(str3);
				break;
				
			case 4:
				enb= str1[0];
				i=0;
				while(str1[i] != '\0'){
					if(str1[i] > enb){
						enb= str1[i];
					}
					i++;
				}
				printf("\n1. str dizisinin en buyuk elemani: %c",enb);
				break;
				
			case 5:
				enk= str2[0];
				i=0;
				while(str2[i] != '\0'){
					if(str2[i] < enk){
						enk= str2[i];
					}
					i++;
				}
				printf("\n1. str dizisinin en kucuk elemani: %c",enk);
				break;
				
			case -1:
				system(exit);
				
		}
	
		printf("\n\n\nYapmak istediginiz islemi giriniz: ");
		scanf("%d",&islem);
	
	}
	
	
}
