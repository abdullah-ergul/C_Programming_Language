#include <stdio.h>

int main(){
	int sum, i, A[10]= {1,3,5,7,9,11,13,15,17,19};
	
	for(i=0; i<10; i++){
		sum += *(A+i);
	}
	
	printf("Sum of The Array: %d",sum);
	
	return 0;
}
