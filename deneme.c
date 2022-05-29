#include <stdio.h>

int main(){
	int n,i,j,k=1;
	scanf("%d",&n);
	int temp=n;
	
	for(i=1; i<=2*n-1; i++){
		if(i==1 || i==2*n-1){
			for(j=0; j<2*n-1; j++)
				printf("%d ",n);
		}
		else if(i<n){
			for(j=0; j<2*n-1; j++){
				if(n-j >= n-i+1){
					printf("%d ",temp--);
					k++;
				}
				else if(j <= 2*n-1-k)
					printf("%d ",temp+1);
				else
					printf("%d ",++temp);
			}
			k=1;
		}
		else if(i==n){
			for(j=0; j<2*n-1; j++){
				if(temp==0){
					temp=1;
					for(j=n; j<2*n-1; j++){
						printf("%d ",++temp);
					}
					break;
				}
				printf("%d ",temp--);
				k++;
			}
			k=1;
		}
		else{
			for(j=0; j<2*n-1; j++){
				if(j < n-k-1)
					printf("%d ",temp--);
				else if(j < n+k)
					printf("%d ",temp);
				else
					printf("%d ",++temp);
			}
			k++;
		}
		
		temp=n;
		printf("\n");
	}
	
	return 0;
}
