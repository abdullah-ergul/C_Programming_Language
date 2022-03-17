#include <stdio.h>


int fibonacci(int n, int a, int b){
	if (n==2 || n==1)
		return b;
	int c=b;
	b += a;
	a= c;
	printf("%d ",b);
	return fibonacci(--n,a,b);
}

int main(){
	int n;
	
	printf("Witch do you want fibonacci number? : ");
	scanf("%d",&n);
	
	if(n<=0)
		printf("Please input a possitive number!");
	else if(n==1){
		printf("1 ");
		printf("\n%d. finbonacci number is: %d",n,fibonacci(n,1,1));
	}
	else{
		printf("1 1 ");
		printf("\n%d. finbonacci number is: %d",n,fibonacci(n,1,1));
	}
	
	return 0;
}
