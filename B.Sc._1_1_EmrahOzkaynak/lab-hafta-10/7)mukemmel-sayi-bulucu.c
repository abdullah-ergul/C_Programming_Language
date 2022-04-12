#include <stdio.h>


int main(){
	int sayi,top,i=1;
	
	printf("Sayiyi Giriniz: ");
	scanf("%d",&sayi);
	
	while(i<sayi){
		if(sayi%i==0){
			top=top+i;
		}
		i++;
	}
	if(top==sayi){
		printf("%d Mukemmel Sayidir.",sayi);
	}else{
		printf("%d Mukemmel Sayi Degildir.",sayi);
	}
	
	return 0;
}
