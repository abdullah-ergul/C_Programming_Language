#include <stdio.h>


main(){
	
	int sayi, i=2, cvp=1;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	while(i <= sayi){
		
		cvp= cvp*i;
		i += 1;
	}
	
	printf("\nCevap: %d",cvp);
}
