#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i,j=0,k;
	char *a= (char*)calloc(50, sizeof(char));
	char *b= (char*)calloc(10, sizeof(char));
	
	gets(a);
	
	for(i=strlen(a)-1; i>=0; i--){
		if(*(a+i) == ' '){
			for(k=j-1;k>=0;k--)
				printf("%c",*(b+k));
			printf("\n");
			j=0;
		}
		*(b+j)= *(a+i);
		j++;
	}
	for(k=j-1;k>=0;k--)
		printf("%c",*(b+k));
	
	return 0;
}
