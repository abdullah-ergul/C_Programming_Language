#include <stdio.h>

void printval(int *p){
	printf("%d\n", *p);
}

int main(){
	int i=10, *p = &i;
	printval(++p);
	
	return 0;
}
