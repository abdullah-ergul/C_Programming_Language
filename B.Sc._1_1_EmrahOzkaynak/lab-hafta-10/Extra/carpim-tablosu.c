#include <stdio.h>


int main(){
	int sayi=1;
	while(sayi<=10){
		int i=1;
		
		while(i<=10){
			printf("%dx%d=%d\n",sayi,i,sayi*i);
			i++;
		}
		printf("\n");
		sayi++;
	}
	return 0;
}
