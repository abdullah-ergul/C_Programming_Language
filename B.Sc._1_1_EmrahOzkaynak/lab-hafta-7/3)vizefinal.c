#include <stdio.h>
int main(){
	int no,vize,final;
	float ort;
	
	printf("Vize Notunuzu Giriniz: ");
	scanf("%d",&vize);
	
	printf("Final Notunuzu Giriniz: ");
	scanf("%d",&final);
	
	ort= vize*0.4 + final*0.6;
	
	if (ort<50){
		printf("%f ile Kaldiniz.",ort);
		}else{
			printf("%f ile Gectiniz",ort);
			}
	return 0;
}