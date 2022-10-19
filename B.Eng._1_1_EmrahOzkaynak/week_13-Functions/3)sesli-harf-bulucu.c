#include <stdio.h>

void sesli(char fstr[]);


main(){
	char str[100];
	
	printf("Bir ifade giriniz: ");
	gets(str);
	
	printf("\n");
	sesli(str);
}

void sesli(char fstr[]){
	int i=0, j=0, sayi=0;
	char sesliler[11]= "AEIOUaeiou";
	
	while(fstr[i] != '\0'){
		while(sesliler[j] != '\0'){
			if(fstr[i] == sesliler[j]){
				sayi++;
			}
			j++;
		}
		j=0;
		i++;
	}
	printf("Ifadenin icindeki sesli harf sayisi: %d",sayi);
}
