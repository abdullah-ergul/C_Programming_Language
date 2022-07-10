#include <stdio.h>


main(){
	//sa//
	int n, islem=0, i, j;
	
	
	printf("M(axb) ve N(axb) matrisleri icin;\n\n");
	
	printf("n: ");
	scanf("%d",&n);
	
	
	int M[n][n];
	int N[n][n];
	int C[n][n];
	int H[n][n];
	
	
	printf("\n----------\n\nM dizisi icin;\n\n");
	
	for(i=0; i<n; i++){
		
		for(j=0; j<n; j++){
			
			printf("M[%d][%d] Eleman: ",i,j);
			scanf("%d",&M[i][j]);
			
		}
		printf("\n");	
	}
	
	

	printf("----------\n\nN dizisi icin;\n\n");
	
	for(i=0; i<n; i++){
		
		for(j=0; j<n; j++){
			
			printf("N[%d][%d] Eleman: ",i,j);
			scanf("%d",&N[i][j]);
			
		}
		printf("\n");
	}
	
	
	printf("----------\n");
	
	while(i != -1){
		
		printf("\n1-) Iki matrisi topla. ");
		printf("\n2-) A matrisinin transpozesini al.");
		printf("\n3-) Iki matrisi carp.");
		printf("\n4-) A matrisi icin simertik kontrolu yap.");
		printf("\n5-) A matrisinin tersini al.");
		printf("\n-1-) Sistemden cik!");
		
		
		printf("\n\nSeciminiz: ");
		scanf("%d",&islem);
		printf("\n");
		
		
		if(islem == 1){
			
			for(i=0; i<n; i++){
		
				for(j=0; j<n; j++){
					
					C[i][j] = M[i][j] + N[i][j];
					printf("%d ",C[i][j]);
					
				}
				printf("\n");
			}
			printf("\n----------\n");
		}
		
		else if(islem == 2){
			
			for(j=0; j<n; j++){
		
				for(i=0; i<n; i++){
					
					C[i][j] = M[i][j];
					printf("%d ",C[i][j]);
					
				}
				printf("\n");
			}
			printf("\n----------\n");
		}
		
		else if(islem == 3){
			
			for(i=0; i<n; i++){
		
				for(j=0; j<n; j++){
					
					H[i][j] = N[i][j];
					
				}
				printf("\n");
			}
			
			for(i=0; i<n; i++){
		
				for(j=0; j<n; j++){
					
					
					
				}
				printf("\n");
			}
			printf("\n----------\n");
		}
		
	}
	
}
