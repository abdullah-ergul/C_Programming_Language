#include <stdio.h>
int main(){
    int a,b,c;

    printf("1. Sayiyi Giriniz: ");
	scanf("%d",&a);

    printf("2. Sayiyi Giriniz: ");
	scanf("%d",&b);

    c=b;
    b=a;
    a=c;

    printf("1. Sayi: %d\n",a);
    printf("2. Sayi: %d",b);
}