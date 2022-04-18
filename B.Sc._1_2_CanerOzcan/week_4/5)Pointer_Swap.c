#include <stdio.h>

void fun(int *pa, int *pb){
	int c= *pa;
	*pa = *pb;
	*pb = c;
}

int main(){
	int a, b;
	
	printf("1. Number: ");
	scanf("%d",&a);
	printf("2. Number: ");
	scanf("%d",&b);
	
	fun(&a, &b);
	
	printf("\n1.Number is: %d", a);
	printf("\n2.Number is: %d", b);
	
	return 0;
}
