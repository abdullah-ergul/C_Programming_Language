#include <stdio.h>


int dizi_topla(int A[], int i, int top){
	if(i<0)
		return top;
	top += A[i];
	return dizi_topla(A,--i,top);
}

int main(){
	int A[]= {1,3,2,7,9}, top=0;
	printf("Dizinin toplami: %d",dizi_topla(A,4,top));
	
	return 0;
}
