#include <string.h>
#include <stdlib.h>

int main(){
	int n,s;
	
	printf("Lenght of your name: ");
	scanf("%d",&n);
	printf("Lenght of your surname: ");
	scanf("%d",&s);
	
	char *name= (char *) malloc(n*sizeof(char));
	char *sname= (char *) malloc(s*sizeof(char));
	char *ptr= (char *) malloc((n+s+1)*sizeof(char));
	
	printf("\nYour Name: ");
	scanf("%s",name);
	printf("Your Surname: ");
	scanf("%s",sname);
	
	strcpy(ptr, name);
	*(ptr+n)= ' ';
	strcpy((ptr+n+1), sname);
	
	printf("\nYour Name and Surname: %s",ptr);
	
	return 0;
}
