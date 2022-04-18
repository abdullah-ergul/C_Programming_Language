#include <stdio.h>

int main(){
	int n,m,i;
	
	printf("Value of array lenght: ");
	scanf("%d",&n);
	
	int *ptr = (int *)calloc(n, sizeof(int));
	
	for(i=0; i<n; i++){
		printf("%d. number: ",i+1);
		scanf("%d", ptr+i);
	}
	
	printf("Value of extra array lenght: ");
	scanf("%d",&m);
	
	for(i=0; i<m; i++){
		printf("%d. extra number: ",i+1);
		scanf("%d", ptr+n+i);
	}
	
	ptr = realloc(ptr, m*sizeof(int));
	
	printf("\n");
	
	for(i=0; i<n+m; i++){
		printf("%d ",*(ptr+i));
	}
	
	return 0;
}
