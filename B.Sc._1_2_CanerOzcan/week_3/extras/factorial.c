#include <stdio.h>

int factorial(int n, int ans){
	if(n==1)
		return ans;
	ans *= n;
	return factorial(--n,ans);
}

int main(){
	int n;
	
	printf("Nubmer: ");
	scanf("%d",&n);
	
	printf("Factorial of %d is: %d",n,factorial(n,1));
	
	return 0;
}
