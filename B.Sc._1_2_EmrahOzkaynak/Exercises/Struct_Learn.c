#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	int i,j;
	
	// Question 1: Define the struct structure called ’student‘, which will be used for the students
	// in the programming course, as ‘number ‘,name‘, ‘surname‘, ‘midtermGrade’ and’ finalGrade fields.
	struct Student{
		int num;
		char name[15];
		char sname[15];
		float mexam;
		float fexam;
		float grade;
	};
	typedef struct Student Student;
	
	// Question 2: Create a pointer sequence for 5 students using this structure.
	Student *ptr= (Student*)malloc(sizeof(Student)*5);
	
	// Question 3: For the 5 students, you can loop through the set of pointer arrays and retrieve them from the user.
	for(i=0; i<3; i++){
		printf("%d. Student's Student Number: ",i+1);
		scanf("%d",&(ptr+i)->num);
		printf("%d. Student's Name: ",i+1);
		scanf("%s",(ptr+i)->name);
		printf("%d. Student's Surname: ",i+1);
		scanf("%s",(ptr+i)->sname);
		printf("%d. Student's Midterm Exam Grade: ",i+1);
		scanf("%f",&(ptr+i)->mexam);
		printf("%d. Student's Final Exam Grade: ",i+1);
		scanf("%f",&((ptr+i)->fexam));
		printf("\n");
	}
	printf("-----------------------\n\n");
	/*
	// Question 4: Obtain the average year-end grade of 5 students using the midterm and final grade information.
	for(i=0; i<3; i++){
		((ptr+i)->grade) = ((ptr+i)->mexam)*0.4 + ((ptr+i)->fexam)*0.6;
		printf("%d. Student's Year-End Grade Is: %.2f\n",i+1,(ptr+i)->grade);
	}
	printf("\n-----------------------\n\n");
	printf("%u",ptr[0]);
	printf("%u",ptr[1]);
	printf("%u",ptr[2]);
	*/
	// Question 5: Sort the student series by name.
	
	Student *temp;
	for(i=0; i<3; i++){
		for(j=0; j<2-i; j++){
			if(strcmp((ptr+j)->name , (ptr+j+1)->name) > 0){
				*temp = *(ptr+j);
				*(ptr+j) = *(ptr+j+1);
				*(ptr+j+1) = *temp;
			}
		}
	}
	
	/*
	// Question 6: Search by name in the student list.
	char search[15];
	printf("Witch Student You Search: ");
	scanf("%s",search);
	
	printf("\n");
	for(i=0; i<3; i++){
		if(strcmp((ptr+i)->name , search) == 0){
			printf("Your Search Result:\nStudent's Position In The Noun Order: %d\n",i+1);
			printf("Student's Number: %d\n",(ptr+i)->num);
			printf("Student's Name: %s\n",(ptr+i)->name);
			printf("Student's Surname: %s\n",(ptr+i)->sname);
			printf("Student's Midterm Exam Grade: %.2f\n",(ptr+i)->mexam);
			printf("Student's Final Exam Grade: %.2f\n",(ptr+i)->fexam);
			printf("Student's Year-End Grade: %.2f",(ptr+i)->grade);
		}
	}
	*/
	/*
	// This Section For Trying Code.
	for(i=0; i<3; i++){
		printf("%d. Student's Student Number Is: %d\n",i+1,(ptr+i)->num);
		printf("%d. Student's Name Is: %s\n",i+1,(ptr+i)->name);
		printf("%d. Student's Surname Is: %s\n",i+1,(ptr+i)->sname);
		printf("%d. Student's Midterm Exam Grade Is: %.2f\n",i+1,(ptr+i)->mexam);
		printf("%d. Student's Final Exam Grade: %.2f\n",i+1,(ptr+i)->fexam);
		printf("%d. Student's Year-End Grade Is: %.2f\n",i+1,(ptr+i)->grade);
		printf("\n");
	}
	*/
	
	
	return 0;
}
