#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i;
	char a[50];
	
	printf("Enter your string: ");
	gets(a);
	
	for(i=strlen(a)-1; i>= 0; i--){
		printf("%c",*(a+i));
	}
	
	
	return 0;
}
