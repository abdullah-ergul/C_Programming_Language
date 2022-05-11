#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	int *ptr=(int*)malloc(5*sizeof(int));
	
	for(i=0; i<5; i++)
		*(ptr+i)=i;
	
	printf("%d ", *ptr++);
	printf("%d ", *(ptr)++);
	printf("%d ", *ptr);
	printf("%d ", *++ptr);
	printf("%d ", ++*ptr);
	
	return 0;
}
