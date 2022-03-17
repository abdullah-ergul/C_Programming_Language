#include <stdio.h>


int enb_bul(int A[], int i, int enb){
	if(i<0)
		return enb;
	if(A[i]>enb)
		enb= A[i];
	return enb_bul(A,--i,enb);
}

int main(){
	int A[]= {1,3,2,7,9};
	int enb= A[0];
	printf("Dizideki en buyuk eleman: %d",enb_bul(A,6,enb));
	
	return 0;
}
