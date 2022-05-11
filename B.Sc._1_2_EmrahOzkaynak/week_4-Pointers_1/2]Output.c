#include <stdio.h>

int main(){
	int arr[4]= {1,2,3,4};
	int *p= arr + 2;
	
	printf("%d %d",p[-2], arr[*p]);
	
	return 0;
}
