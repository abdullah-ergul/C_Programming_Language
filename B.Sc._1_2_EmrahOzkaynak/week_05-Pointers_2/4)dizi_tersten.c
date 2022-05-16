#include <stdio.h>

int main(){
	int A[10]= {3,5,7,9,11,13,15,17,19,21}, i;
	
	for(i=9; i >= 0; i--){
		printf("%d, ",*(A+i));
	}
	
	return 0;
}
