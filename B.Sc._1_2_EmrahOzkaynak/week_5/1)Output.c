#include <stdio.h>

int main(){
	int a,b,c;
	char *p=0;
	int *q=0;
	double *s=0;
	a= (p+3);
	b= (q+2);
	c= (s+1);
	printf("%d %d %d",a,b,c);
	
	return 0;
}
