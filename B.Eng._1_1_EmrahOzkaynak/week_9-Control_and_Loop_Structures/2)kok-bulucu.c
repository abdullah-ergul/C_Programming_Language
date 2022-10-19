#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	float delta,x1,x2;
	
	printf("x^2 nin katsayisi: ");
	scanf("%d",&a);
	
	printf("x in katsayisi: ");
	scanf("%d",&b);
	
	printf("Denklemin sabiti: ");
	scanf("%d",&c);
	
	delta= b*b - (4*a*c);
	
	if(delta<0){
		printf("Denklemin reel koku yoktur");
	}
	else if(delta==0){
		x1= -b / (2*a);
		printf("x1 = x2 = %f",x1);
	}
	else{
		x1= (-b -(pow(delta,0.5))) / 2*a;
		x2= (-b +(pow(delta,0.5))) / 2*a;
		printf("x1 = %f\nx2 = %f",x1,x2);
	}
	return 0;
}