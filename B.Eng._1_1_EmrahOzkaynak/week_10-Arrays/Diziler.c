#include <stdio.h>
#include <stdlib.h>


main(){
	
	int n,islem=0,i=0,top=0,ort=0;
	int A[10];
	
	while(i<10){
		printf("Dizinin %d. elemanini giriniz: ",i+1);
		scanf("%d",&A[i]);
		i += 1;
	}
	
	while(islem != -1){
		
		printf("\n1 - Dizi elemanlarini topla.");
		printf("\n2 - Dizinin ortalamasini bul.");
		printf("\n3 - Dizinin ortalamasindan buyuk olan elemanlari bul.");
		printf("\n4 - Dizinin elemanlarini tersten yazdir.");
		printf("\n5 - Dizinin en kucuk ve en buyuk elemanlarini bul.");
		printf("\n6 - Dizinin elemanlarini kucukten buyuge dogru sirala.");
		printf("\n-1 - Programdan cik.");
		
		printf("\n\nHangi islemi yapmak istersiniz?: ");
		scanf("%d",&islem);
		
		i=0;
		
		if(islem == 1){
			top=0;
			while(i<10){
				top += A[i];
				i += 1;
			}
			printf("\nIsleminizin sonucu %d olur.\n",top);
		}
		
		else if(islem == 2){
			top=0;
			while(i<10){
				top += A[i];
				i += 1;
			}
			ort= top/10;
			printf("\nIsleminizin sonucu %d olur.\n",ort);
		}
		
		else if(islem == 3){
			top=0;
			while(i<10){
				top += A[i];
				i += 1;
			}
			ort= top/10;
			
			i= 0;
			printf("\nDizinin ortalamasindan buyuk olan elemanlar:\n");
			while(i<10){
				if(A[i] > ort){
					printf("%d",A[i]);
				}
				i += 1;
			}
			printf("\n");
		}
		
		else if(islem == 4){
			int m = 10-1;
			printf("\nDizinin tersten hali:\n");
			while(m >= 0){
				printf("%d, ",A[m]);
				m -= 1;
			}
			printf("\n");
		}
		
		else if(islem == 5){
			int enb=A[0], enk=A[0];
			while(i<10){
				if(A[i] > enb){
					enb= A[i];
				}
				else if(A[i] < enk){
					enk= A[i];
				}
				i += 1;
			}
			printf("\nEn kucuk sayi: %d\nEn buyuk sayi: %d\n",enk,enb);
		}
		
		else if(islem == 6){
			
		}
		
		else if(islem == -1){
			printf("Programdan cikiliyor...");
			break;
		}
		
		else{
			printf("\nHatali sayi girdiniz. Lutfen 1 ile 6 arasi bir sayi giriniz\n");
		}
		
	}
}
