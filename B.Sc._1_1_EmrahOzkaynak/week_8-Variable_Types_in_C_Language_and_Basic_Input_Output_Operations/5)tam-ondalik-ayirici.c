#include <stdio.h>
main(){
	float sayi;
	
	printf("Bir sayi giriniz: ");
	scanf("%f",&sayi);

	int tam= sayi/1;
	float ondalik= sayi-tam;
	
	printf("\nGirdiginiz sayinin tam kismi: %d",tam);
	printf("\nGirdiginiz sayinin ondalik kismi: %f",ondalik);
}
