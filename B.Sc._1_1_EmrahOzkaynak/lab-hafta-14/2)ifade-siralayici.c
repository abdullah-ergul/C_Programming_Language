#include <stdio.h>

void siralayici(char fstr[]);


main(){
	char str[100];
	int i=0;
	
	printf("Bir ifade giriniz: ");
	gets(str);
	
	printf("\n");
	siralayici(str);
}

void siralayici(char fstr[]){
	int i=1;
	char a=fstr[0], c;
	
	while(fstr[i] != '\0'){
		if(fstr[i] > fstr[i-1]){
			c= fstr[i];
			fstr[i] = fstr[i-1];
			fstr[i-1] = c;
		}
		i++;
	}
	
	printf("Ifadenin sirali hali: %s",fstr);
}
