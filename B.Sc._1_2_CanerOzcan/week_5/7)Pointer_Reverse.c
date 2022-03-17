#include <stdio.h>

int main(){
	int i,j;
	char A[100], c;
	gets(A);
	
	for(i=0; *(A+i) != '\0'; i++){
	}
	
	for(j=0; j<i/2; j++){
		c= *(A+i-j-1);
		*(A+i-j-1) = *(A+j);
		*(A+j) = c;
	}
	
	printf("%s",A);
	
	return 0;
}
