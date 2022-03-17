#include <stdio.h>

int * ekleyici(int fdizi[], int fsayi);


main(){
	int i=0, sayi, dizi[6], *pp;
	
	while(i<5){
		printf("%d. elemani giriniz: ",i+1);
		scanf("%d",&sayi);
		
		dizi[i] = sayi;
		i++;
	}
	
	printf("Araya eklenecek sayiyi giriniz: ");
	scanf("%d",&sayi);
	
	printf("\n");
	pp= ekleyici(dizi,sayi);
	
	i=0;
	while(i < 5){
		printf("%d, ",pp[i]);
		i++;
	}
	printf("%d",pp[i]);
}

int * ekleyici(int fdizi[], int fsayi){
	int i=4;
	
	while(fdizi[i] > fsayi){
		fdizi[i+1] = fdizi[i];
		i--;
	}
	
	fdizi[i+1] = fsayi;
	
	return fdizi;
}
