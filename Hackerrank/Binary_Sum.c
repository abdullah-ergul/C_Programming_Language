#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){
    int n, k, i, a[10]={0}, b[10]={0}, an[10]={0}, o[10]={0}, x[10]={0}, ta=0, to=0, tx=0;
    scanf("%d %d", &n, &k);

    for(i=0;n>0;i++){
        a[i]=n%2;
        n=n/2;
    }

    for(i=0;k>0;i++){
        b[i]=k%2;
        k=k/2;
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

    printf("%d\n%d\n%d",ta,to,tx);

    return 0;
}
