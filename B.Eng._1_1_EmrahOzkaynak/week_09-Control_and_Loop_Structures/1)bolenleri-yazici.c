#include <stdio.h>
int main(){
	int sayi,i=1;
	
	printf("Sayiyi giriniz: ");
	scanf("%d",&sayi);
	
	while (i<=sayi){
		
		if (sayi%i == 0){
			printf("%d\n",i);
			i++;
		}
		else{
			i++;
		}
	}
	return 0;
}