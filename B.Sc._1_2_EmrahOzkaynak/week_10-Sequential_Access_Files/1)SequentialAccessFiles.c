#include <stdio.h>
#include <stdlib.h>

void mkfile(void);
void addrec(void);
void lsfile(void);
void lssuccess(void);
void mkfile_suc_and_fail(void);
void filesize(void);


int main(){
    int choose;

    while(1){
		printf("1 for Create a File\n");
		printf("2 for List File\n");
		printf("3 for List Success Students (Get Greater Than 50)\n");
		printf("4 for Make Files for Pass or Fail Students\n");
		printf("5 for Print File's Size\n");
		printf("\nYour Choice: "); scanf("%d",&choose);
		printf("\n");

		switch(choose){
			case 1:
                mkfile();
				break;
			case 2:
				lsfile();
				break;
			case 3:
				lssuccess();
				break;
			case 4:
				mkfile_suc_and_fail();
				break;
			case 5:
				filesize();
				break;
		}
	}

    return 0;
}

void mkfile(void){
    int num;
    char name[15];
    float mexam, fexam;

    FILE *grades= fopen("Grades.txt","w");
    printf("Number\tName\tMidterm\tFinal\tGrade\n");

    scanf("%d %s %f %f",&num,name,&mexam,&fexam);
    while(!feof(stdin)){
        fprintf(grades,"%d\t%s\t%.2f\t%.2f\t%.2f\n",num,name,mexam,fexam,(mexam*0.4+fexam*0.6));
        scanf("%d %s %f %f",&num,name,&mexam,&fexam);
    }
    fclose(grades);
    printf("\n--------------------------------\n\n");
}

void lsfile(void){
    int num;
    char name[15];
    float mexam, fexam, grade;
    FILE *grades= fopen("Grades.txt","r");

    fscanf(grades,"%d %s %f %f %f",&num,name,&mexam,&fexam,&grade);
    while(!feof(grades)){
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\n",num,name,mexam,fexam,grade);
        fscanf(grades,"%d %s %f %f %f",&num,name,&mexam,&fexam,&grade);
    }
    fclose(grades);
    printf("\n--------------------------------\n\n");
}

void lssuccess(void){
    int num;
    char name[15];
    float mexam, fexam, grade;
    FILE *grades= fopen("Grades.txt","r");
    while(!feof(grades)){
        fscanf(grades,"%d %s %f %f %f",&num,name,&mexam,&fexam,&grade);
        if(grade >= 60.0)
            printf("%d\t%s\t%.2f\t%.2f\t%.2f\n",num,name,mexam,fexam,grade);
    }
    fclose(grades);
    printf("\n--------------------------------\n\n");
}

void mkfile_suc_and_fail(void){
    int num;
    char name[15];
    float mexam, fexam, grade;
    FILE *grades= fopen("Grades.txt","r");
    FILE *ptrp= fopen("Pass.txt","w");
    FILE *ptrf= fopen("Fail.txt","w");

    fscanf(grades,"%d %s %f %f %f",&num,name,&mexam,&fexam,&grade);
    while(!feof(grades)){
        if(grade >= 50.0)
            fprintf(ptrp,"%d\t%s\t%.2f\t%.2f\t%.2f\n",num,name,mexam,fexam,grade);
        else
            fprintf(ptrf,"%d\t%s\t%.2f\t%.2f\t%.2f\n",num,name,mexam,fexam,grade);

        fscanf(grades,"%d %s %f %f %f",&num,name,&mexam,&fexam,&grade);
    }
    fclose(grades); fclose(ptrp); fclose(ptrf);
    printf("--------------------------------\n\n");
}

void filesize(void){

}
