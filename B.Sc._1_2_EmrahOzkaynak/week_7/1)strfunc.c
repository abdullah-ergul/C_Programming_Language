#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	int flen=0,i=0;
	char *tempstr= (char *)calloc(10,sizeof(char)), *str= (char *)calloc(1,sizeof(char));
	while(1){
		printf("Enter a Word: ");
		gets(tempstr);
		if(*tempstr == 0)
			break;
		str= (char *)realloc(str,(flen+i+1+strlen(tempstr))*sizeof(char));
		strcpy(str+flen+i, tempstr);
		*(str+strlen(tempstr)+flen+i) = ' ';
		flen += strlen(tempstr);
		i++;
	}
	
	puts(str);
	
	free(tempstr); free(str);
	
	return 0;
}
