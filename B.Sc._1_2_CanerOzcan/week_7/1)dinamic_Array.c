#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=0,j;
	int *a= (int*)calloc(1, sizeof(int));
	
	printf("%d. Number: ",i+1);
	scanf("%d",a);
	while(1){
		if(*(a+i) == 0)
			break;
		i++;
		a= realloc(a,(i+1)*sizeof(int));
		printf("%d. Number: ",i+1);
		scanf("%d",a+i);
	}
	
	for(j=0; j<i; j++)
		printf("%d ",*(a+j));
	
	return 0;
}
