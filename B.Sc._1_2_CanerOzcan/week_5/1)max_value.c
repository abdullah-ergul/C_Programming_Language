#include <stdio.h>

int main(){
	int n,i,max;
	
	printf("Value of numbers: ");
	scanf("%d",&n);
	
	int *ptr = (int *)calloc(n, sizeof(int));
	
	for(i=0; i<n; i++){
		printf("%d. number: ",i+1);
		scanf("%d", ptr+i);
	}
	
	max= *ptr;
	for(i=1; i<n; i++){
		if(*(ptr+i)>=max)
			max=*(ptr+i);
	}
	
	printf("\nMax value of numbers: %d",max);
	
	return 0;
}
