#include <stdio.h>
#include <stdlib.h>

int func(int num, int *a, char *b, int i, int *j){
	if(num==0)
		return i;
		
	if((num%10)%2 == 1){
		a= realloc(a,(i+1)*sizeof(int));
		*(a+i)= num%10;
		i++;
	}
	else if((num%10)%2 == 0){
		b= realloc(b,(*j+1)*sizeof(char));
		*(b+*j)= num%10;
		*j += 1;
	}
	
	return func(num/10,a,b,i,j);
}

int main(){
	int num,k,j=0;
	
	int *a= (int*)calloc(1, sizeof(int));
	char *b= (char*)calloc(1, sizeof(char));
	
	printf("Your Student Number: ");
	scanf("%d",&num);
	
	int i=  func(num,a,b,0,&j);
	
	for(k=0; k<i; k++)
		printf("%d ",*(a+k));
	
	printf("\n");
	
	for(k=0; k<j; k++)
		printf("%d ",*(b+k));
	
	return 0;
}
