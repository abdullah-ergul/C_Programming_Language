#include <stdio.h>


int hcf(int a, int b, int i){
	if(a%i==0 && b%i==0)
		return i;
	return hcf(a,b,--i);
}

int main(){
	int a,b,c;
	
	printf("1st Number: ");
	scanf("%d",&a);
	printf("2nd Number: ");
	scanf("%d",&b);
	
	if(a<b){
		c=a;
		a=b;
		b=c;
	}
	
	printf("Answer= %d",hcf(a,b,b));
	
	return 0;
}
