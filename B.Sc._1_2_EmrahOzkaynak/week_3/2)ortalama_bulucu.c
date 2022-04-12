#include <stdio.h>


float ort(float a[], float top, int i){
	if(i>=0){
		top= top + a[i];
		return ort(a,top,i-1);	
	}
	else
		return top/6;
}

int main(){
	float A[]= {1,2,3,4,5,6}, top= 0;
	
	printf("Toplam: %.2f",ort(A,top,5));
	
	return 0;
}
