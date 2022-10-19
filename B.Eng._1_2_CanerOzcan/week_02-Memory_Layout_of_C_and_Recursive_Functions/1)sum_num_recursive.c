#include <stdio.h>

int sum_num(int n, int i, int sum){
	if(i<=n){
		sum += i;
		return sum_num(n,++i,sum);
	}
	else
		return sum;
}

int main(){
	int n;
	
	printf("Number: ");
	scanf("%d",&n);
	
	printf("Answer of question: %d",sum_num(n,1,0));
	
	return 0;
}
