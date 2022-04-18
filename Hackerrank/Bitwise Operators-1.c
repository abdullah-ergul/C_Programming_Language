#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){
    int n, k, i, a[10]={0}, b[10]={0}, an[10]={0}, o[10]={0}, x[10]={0}, ta=0, to=0, tx=0, aa, bb=1, enba=0, enbo=0, enbx=0, l=1;
    scanf("%d %d", &n, &k);
    
    for(aa=1; aa <= n; aa++){
    	l++;
    	for(bb= l; bb <= k; bb++){
    		for(i=0; bb>0; i++){
        		a[i]=bb%2;
        		bb=bb/2;
    		}
    		for(i=0; aa>0; i++){
        		b[i]=aa%2;
        		aa=aa/2;
    		}
    		for(i=0; i<10; i++){
        		printf("%d ",a[i]);
    		}
    		printf("\n");
    		for(i=0; i<10; i++){
        		printf("%d ",b[i]);
    		}
    		printf("\n\n");
    
    
    		for(i=0;i<10;i++){
        		if(a[i]==1 && b[i]==1)
            		an[i]=1;
		        if(a[i]==1 || b[i]==1)
		            o[i]=1;
		        if(a[i] != b[i])
		            x[i]=1;
		    }
		    
		    for(i=0; i<10; i++){
		        printf("%d ",an[i]);
		    }
		    printf("\n");
		    for(i=0; i<10; i++){
		        printf("%d ",o[i]);
		    }
		    printf("\n");
		    for(i=0; i<10; i++){
		        printf("%d ",x[i]);
		    }
		    printf("\n");
		    
		    
		    
		    for(i=0;i<10;i++){
		        if(an[i]==1)
		            ta += pow(2,i);
		        if(o[i]==1)
		            to += pow(2,i);
		        if(x[i]==1)
		            tx += pow(2,i);
		    }
		    
		    printf("\n%d %d %d\n\n",ta,to,tx);
		    if(ta < k){
		    	if(ta > enba)
		    		enba= ta;
			}
			if(to < k){
		    	if(to > enbo)
		    		enbo= to;
			}
			if(tx < k){
		    	if(tx > enbx)
		    		enbx= tx;
			}
		}
	}
	
	printf("\n\n\n%d\n%d\n%d",enba,enbo,enbx);
 
    return 0;
}

