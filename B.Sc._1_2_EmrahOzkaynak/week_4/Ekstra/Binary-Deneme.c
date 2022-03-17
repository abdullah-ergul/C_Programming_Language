#include <stdio.h>

void binary(int a, int sayi){
	if(a == 0)
		return 0;
		
	if(a%2==0){
		
	}
	else{
		
	}
	
	return binary(a/2,sayi);
}

int main(){
	int sayi;
	
	printf("Sayiyi Giriniz: ");
	scanf("%d",&sayi);
	
	binary(sayi,sayi);
	
	return 0;
}
