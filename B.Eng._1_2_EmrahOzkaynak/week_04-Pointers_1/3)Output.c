#include <stdio.h>

int main(){
	int *ptr, a=10;
	ptr= &a;
	*ptr += 1;
	printf("%d %d",*ptr,a);
	
	return 0;
}
