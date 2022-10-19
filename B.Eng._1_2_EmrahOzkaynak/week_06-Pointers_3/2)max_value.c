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
	int max= *a;
	
	for(i=1; i<n; i++){
		if(max < *(a+i))
			max= *(a+i);
	}
	
	printf("\nMax veriable value in array: %d",max);
	
	return 0;
}
