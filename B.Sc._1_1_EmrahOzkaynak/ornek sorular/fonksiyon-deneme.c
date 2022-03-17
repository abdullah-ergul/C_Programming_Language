#include <stdio.h>

int toplayici(sayi1, sayi2);


main(){
	printf("Sayilarin toplam: %d",toplayici(1, 2));
}

toplayici(sayi1, sayi2){
	int cevap= sayi1 + sayi2;
	return cevap;
}
