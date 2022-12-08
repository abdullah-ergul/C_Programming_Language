#include <stdio.h>
int main(){
	int sayi,t1,t2,t3,i=1;
	
	printf("Sayiyi giriniz: ");
	scanf("%d",&sayi);
	
	while(i<=sayi){
		t1= t1+i;
		if(i%2==0){
			t3= t3+i;
		}
		else{
			t2= t2+i;
		}
		i++;
	}
	printf("Tum sayilarin toplami= %d\nTek sayilarin toplami= %d\nCift sayilarin toplami= %d",t1,t2,t3);
	return 0;
}