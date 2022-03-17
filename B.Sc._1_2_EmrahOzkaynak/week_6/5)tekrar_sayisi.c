#include <stdio.h>

int main(){
	int i, j, c=0;
	char a[100];
	
	printf("Kelime gir: ");
	gets(a);
	
	for(i=65; i<= 90; i++){
		for(j=0; *(a+j) != '\0'; j++){
			if( *(a+j)==i )
				c++;
		}
		if(c != 0)
			printf("%c karakteri %d adet\n",i,c);
		c=0;
	}
	
	return 0;
}
