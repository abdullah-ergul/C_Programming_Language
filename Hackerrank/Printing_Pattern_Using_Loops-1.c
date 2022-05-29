#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n,i,j,temp,c;
    scanf("%d", &n);
  	
    for(i=0; i<2*n-1; i++){
        if(i==0 || i==2*n-2){
            for(j=0; j<2*n-1; j++){
                printf("%d ",n);
            }
        }
        else{
            for(j=0,c=1; j<2*n-1; j++, c += 2){
            	if(j>=2*n-1-i){
            		printf("%d ",n-(-1*(j-(2*n-1)+1)));
				}
                else if(j<i){
                    temp= n-j;
                    printf("%d ",temp);
                }
                else{
                    printf("%d ",temp-1);
                }
            }
        }
        printf("\n");
    }
    
    return 0;
}
