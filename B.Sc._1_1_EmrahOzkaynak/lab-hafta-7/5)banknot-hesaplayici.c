#include <stdio.h>
int main(){
	int para,yuz,yuzk,elli,ellik,yirmi,yirmik,on;
	
	printf("Para miktarini giriniz: ");
	scanf("%d",&para);
	
	yuz= para/100;
	yuzk= para%100;
	elli= yuzk/50;
	ellik= yuzk%50;
	yirmi= ellik/20;
	yirmik= ellik%20;
	on= yirmik/10;
	
	printf("\n%d tane 100'luk\n%d tane 50'lik\n%d tane 20'lik\n%d tane 10'luk banknotunuz vardir!\nToplam kullanilan banknot sayisi: %d",yuz,elli,yirmi,on,yuz+elli+yirmi+on);
	return 0;
}