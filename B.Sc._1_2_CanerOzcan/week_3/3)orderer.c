#include <stdio.h>

int orderer(int num, int sum){
	if(num > 0){
		int digit= num%10;
		printf("\n%d",digit);
		sum += digit;
		return orderer(num/10,sum);
	}
	else
		return sum;
}

int main(){
	int num;
	
	printf("Number: ");
	scanf("%d",&num);
	
	printf("\n\nSum of numbers: %d",orderer(num,0));
}
