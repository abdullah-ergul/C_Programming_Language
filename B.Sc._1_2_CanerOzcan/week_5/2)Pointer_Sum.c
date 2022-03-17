#include <stdio.h>

int main(){
	int a, b, *pa, *pb;
	
	printf("1. Number: ");
	scanf("%d",&a);
	printf("2. Number: ");
	scanf("%d",&b);
	
	pa= &a; pb= &b;
	
	printf("Sum Of Numbers: %d",*pa+*pb);
	
	return 0;
}
