#include <stdio.h>


main(){
	int i=1000;
	
	while(i <= 2000){
		
		int j=2,k=0;
		
		while(j < i){
			
			if(i%j == 0){
				k += 1;
				break;
			}
			
			j += 1;
		}
		
		if (k == 0){
			printf("\n%d",i);
		}
		
		i += 1;
	}
}
