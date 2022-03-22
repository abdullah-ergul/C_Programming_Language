#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i;
	
	printf("Enter size of array: ");
	scanf("%d",&n);
	
	printf("\n");
	int *a= (int *) calloc(n, sizeof(int));
	
	for(i=0; i<n; i++){
		printf("%d. Number: ",i+1);
		scanf("%d",a+i);
	}
	
	while(1){
		a= (int *)realloc(a,(n+1)*sizeof(int));
		printf("%d. Number: ",++n);
		scanf("%d",a+n-1);
		if(*(a+n-1) == -1)
			break;
	}
	
	for(i=0; i<n-1; i++)
		printf("%d, ",*(a+i));
	printf("%d.",*(a+i));
	
	return 0;
}
