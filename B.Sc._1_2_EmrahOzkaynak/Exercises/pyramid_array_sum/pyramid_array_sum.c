#include <stdio.h>

int func(int *arr, int k, int n){
	if(k==4)
		return 0;
	if(k>=2)
		n += k-1;
		
	int i, enb= *(arr+k+n);
	
	for(i=0;i<=k;i++){
		if(enb < *(arr+i+k+n))
			enb= *(arr+i+k+n);
	}
	k++;
	return enb + func(arr, k, n);
}

int main(){
	long long int num;
	int i;
	printf("Enter Your Student Number: ");
	scanf("%lld",&num);
	
	int *arr;
	arr = (int*)calloc(10,sizeof(int));
	
	for(i=0; i<10; i++){
		*(arr+9-i)= num%10;
		num = num/10;
	}
	
	printf("Result: %d",func(arr,0,0));
	
	return 0;
}
