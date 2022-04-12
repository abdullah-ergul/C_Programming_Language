#include <stdio.h>

int fun(int **p){
	int b= 8;
	*p= &b;
	printf("%d ", **p);
}

int main(){
	int a=10, *p=&a;
	fun(&p);
	printf("%d", *p);
	
	return 0;
}
