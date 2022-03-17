#include <stdio.h>
int main(){
	int sayi,i=1;
	
	printf("Sayiyi Giriniz: ");
	scanf("%d",&sayi);
	
	while(i<=10){
		printf("%dx%d=%d\n",sayi,i,sayi*i);
		i++;
	}
	return 0;
}