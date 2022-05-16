#include <stdio.h>

int main(){
	double *m, **k, arr[5]={1.0, 2.0, 3.0, 4.0, 5.0};
	
	m= arr;
	printf("%.1f\n", *(m+1));
	*(m+3) += 3.86;
	m+=2;
	printf("%.1f\n", *(m+1));
	
	m= &arr[3];
	k= &m;
	printf("%.1f\n", *(*(k)-1));
	printf("%p\n", *k);
	
	m= m-1;
	printf("%p",m);
	
	return 0;
}
