#include <stdio.h>

int main(){
	int i, A[10]= {1,3,5,7,9,11,13,15,17,19};
	
	for(i=0; i<10; i++){
		printf("%d ",*(A+i));
	}
	
	return 0;
}
