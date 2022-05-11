#include <stdio.h>

int find_max_num(int A[], int i, int max, int max_num){
	if(i<10){
		if(max_num < A[i]){
			max_num= A[i];
			max = i;
		}
		return find_max_num(A,++i,max,max_num);
	}
	else
		return max;
}

int main(){
	int A[10]={10,123,99,86,203,74,1,46,7,23},i;
	
	i= find_max_num(A,1,0,A[0]);
	printf("Max 1: %d",A[i]);
	
	A[i] = 0;
	
	i= find_max_num(A,1,0,A[0]);
	printf("\nMax 2: %d",A[i]);
	
	
	return 0;
}
