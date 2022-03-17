#include <stdio.h>


main(){
	
	int sayi, enb, enk, i=1;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	enb= sayi;
	enk= sayi;
	
	while (i <= 2){
		
		printf("Lutfen bir sayi giriniz: ");
		scanf("%d",&sayi);
		
		if(sayi > enb){
			enb= sayi;
		}
		else if(sayi < enk){
			enk= sayi;
		}
		
		i += 1;
	}
	
	printf("\nEn buyuk sayi: %d\nEn kucuk sayi: %d",enb,enk);
}
