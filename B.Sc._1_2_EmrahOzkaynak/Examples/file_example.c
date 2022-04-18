#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	struct person_data{
		char name[15];
		char sname[15];
		char job[15];
	};
	typedef struct person_data Person;
	Person person1;
	
	printf("Name: ");
	scanf("%s", person1.name);
	printf("Surname: ");
	scanf("%s", person1.sname);
	printf("Job: ");
	scanf("%s", person1.job);
	
	FILE *dg;
	dg= fopen("file_name.txt","w");
	
	if(!ferror(dg)){
		fputs(person1.name, dg);
		fputs("\n",dg);
		fputs(person1.sname, dg);
		fputs("\n", dg);
		fputs(person1.job,dg);
	}
	fclose(dg);
	
	return 0;	
}
