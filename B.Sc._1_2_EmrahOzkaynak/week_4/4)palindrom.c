#include <stdio.h>


void pal(char a[], int i, int n){
	if(a[i] == '\0'){
		printf("Kelime Palindromdur.");
		return 0;
	}
	
	if(a[i] != a[n-i-1]){
		printf("Kelime Palindrom Degildir.");
		return 0;
	}
	return pal(a,++i,n);
}

int main(){
	char A[100];
	int n=0;
	
	printf("Kelime: ");
	gets(A);
	
	while(A[n] != '\0')
		n++;
		
	pal(A,0,n);
	
	return 0;
}
