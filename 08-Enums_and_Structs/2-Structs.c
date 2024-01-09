/**
 * @file 2-Structs.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 09-01-2024
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 */

#include <stdio.h>
#include <string.h>


// ? Question 1: Define the struct structure called ’student‘, which will be used for the students in the programming course,
// ? as ‘number ‘,name‘, ‘surname‘, ‘midtermGrade’ and’ finalGrade fields
struct Student {	// Struct means structure. It is used to store different types of data in a single variable. For example, student information can be stored in a struct.
	int num;
	char name[15];
	char sname[15];
	double mexam;
	double fexam;
	double grade;
};
typedef struct Student Student;		// We can use "typedef" to define a new name for a data type. For example, we can use "typedef int integer;" to define a new name for the "int" data type as "integer".


int main() {
	
	// ? Question 2: Create a pointer sequence for 5 students using this structure.
	Student *students = (Student*)malloc(5*sizeof(Student));
	

	// ? Question 3: For the 5 students, you can loop through the set of pointer arrays and retrieve them from the user.
	for (int i=0 ; i<5 ; i++) {
		printf("%d. Student's Student Number: ", i+1);  scanf("%d", &(students+i)->num);	// We must use "->" instead of "." because we are using pointers. If we were not using pointers, we would use "."
		printf("%d. Student's Name: ", i+1);  scanf("%s", (students+i)->name);				// For example: scanf("%d", &students[i].num);
		printf("%d. Student's Surname: ", i+1);  scanf("%s", (students+i)->sname);
		printf("%d. Student's Midterm Exam Grade: ", i+1);  scanf("%lf", &(students+i)->mexam);
		printf("%d. Student's Final Exam Grade: ", i+1);  scanf("%lf", &((students+i)->fexam));
		printf("\n");
	}
	printf("-----------------------\n\n");
	

	// ? Question 4: Obtain the average year-end grade of 5 students using the midterm and final grade information.
	for (int i=0; i<5; i++) {
		((students+i)->grade) = ((students+i)->mexam)*0.4 + ((students+i)->fexam)*0.6;
		printf("%d. Student's Year-End Grade Is: %.2lf\n", i+1, (students+i)->grade);
	}
	printf("\n-----------------------\n\n");
	

	// ? Question 5: Sort the student series by name.
	Student *temp;
	// Bubble Sort
	for (int i=0 ; i<5 ; i++) {
		for (int j=0; j<4-i; j++) {
			if (strcmp((students+i)->name , (students+i+j)->name) > 0) {	// strcmp() function is used to compare two strings.
				// Swap														// str1 > str2 returns positive value, str1 < str2 returns negative value, str1 == str2 returns 0.
				*temp = *(students+i);
				*(students+i) = *(students+i+j);
				*(students+i+j) = *temp;
			}
		}
	}
	
	// ? Question 6: Search by name in the student list.
	char search[15];
	printf("Enter the name of the student whose information you want to receive: ");  scanf("%s", search);
	printf("\n");
	for (int i=0 ; i<5 ; i++) {
		if (strcmp((students+i)->name, search) == 0) {
			printf("Your Search Result:\nStudent's Position In The Noun Order: %d\n", i+1);
			printf("Student's Number: %d\n", (students+i)->num);
			printf("Student's Name: %s\n", (students+i)->name);
			printf("Student's Surname: %s\n", (students+i)->sname);
			printf("Student's Midterm Exam Grade: %.2f\n", (students+i)->mexam);
			printf("Student's Final Exam Grade: %.2f\n", (students+i)->fexam);
			printf("Student's Year-End Grade: %.2f", (students+i)->grade);
		}
	}
	
	
	return 0;
}
