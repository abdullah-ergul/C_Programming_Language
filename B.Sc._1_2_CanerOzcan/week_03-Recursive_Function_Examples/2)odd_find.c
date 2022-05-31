#include <stdio.h>


int odd(int a[], int n, int v){
	if(n==0)
		return v;
	if(a[n-1]%2 == 1)
		v++;
	return odd(a,n-1,v);
}

int main(){
	int a[]= {7, 9, 5, 4, 2, 11};
	
	printf("Value of odd: %d",odd(a,6,0));
	
	return 0;
}
