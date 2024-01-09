/**
 * @file 1-SequentialAccessFiles.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 09-01-2024
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 // ? Question: Write a C program in which you can perform operations on the file named "Grades.txt" where the number, name, midterm and final grades of the students are kept.
 */

#include <stdio.h>
#include <stdlib.h>

void mkfile(void);
void addrec(void);
void lsfile(void);
void lssuccess(void);
void mkfile_suc_and_fail(void);


// Sequential Access File's means that the file is read from the beginning to the end. It is not possible to access a record without reading the previous records.
// We can store the data in the file in any order. However, when we want to access the data, we have to read the previous records.
// This is the biggest disadvantage of sequential access files. The advantage is that it is easy to implement and the file size is small.
// Its also store in .txt format.
int main() {
    int choose;

    // ? Accordingly, the menu of the program will be as follows;
    while (1) {
        // ? 1- Create file & enter data
		printf("1 for Create a File\n");

        // ? 2- Read file & list file
		printf("2 for List File\n");

        // ? 3- List those with a passing grade above 50
		printf("3 for List Success Students (Get Greater Than 50)\n");

        // ? 4- Print those with a passing grade of 50 and above in the file "passing.txt" and those with a lower grade in the file "failing.txt"
		printf("4 for Make Files for Pass or Fail Students\n");
		
        printf("\nYour Choice: ");  scanf("%d", &choose);
		printf("\n");

		switch (choose) {
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
		}
	}


    return 0;
}

void mkfile(void) {
    int num;
    char name[15];
    float mexam, fexam;

    FILE *grades = fopen("1-Grades.txt", "w");      // If we open a file, we must to use fopen() function. "w" means "write". If there is another file with the same name, that file is deleted.
    printf("Number\tName\tMidterm\tFinal\tGrade\n");

    scanf("%d %s %f %f", &num, name, &mexam, &fexam);
    while (!feof(stdin)) {      // feof() function returns 1 if the end of the file is reached, otherwise it returns 0.
        fprintf(grades, "%d\t%s\t%.2f\t%.2f\t%.2f\n", num, name, mexam, fexam, (mexam*0.4+fexam*0.6));    // fprintf() function writes the data in text format. It used to read a sequential access file.
        scanf("%d %s %f %f", &num, name, &mexam, &fexam);
    }
    fclose(grades);
    printf("\n--------------------------------\n\n");
}

void lsfile(void) {
    int num;
    char name[15];
    float mexam, fexam, grade;
    FILE *grades = fopen("1-Grades.txt", "r");      // "r" means "read". Gives an error if there is no file.

    fscanf(grades, "%d %s %f %f %f", &num, name, &mexam, &fexam, &grade);   // fscanf() function reads the data in text format. It used to read a sequential access file.
    while (!feof(grades)) {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\n", num, name, mexam, fexam, grade);
        fscanf(grades,"%d %s %f %f %f", &num, name, &mexam, &fexam, &grade);
    }
    fclose(grades);
    printf("\n--------------------------------\n\n");
}

void lssuccess(void) {
    int num;
    char name[15];
    float mexam, fexam, grade;
    FILE *grades = fopen("1-Grades.txt", "r");
    while (!feof(grades)) {
        fscanf(grades ,"%d %s %f %f %f", &num, name, &mexam, &fexam, &grade);
        if(grade >= 50.0)
            printf("%d\t%s\t%.2f\t%.2f\t%.2f\n", num, name, mexam, fexam, grade);
    }
    fclose(grades);
    printf("\n--------------------------------\n\n");
}

void mkfile_suc_and_fail(void) {
    int num;
    char name[15];
    float mexam, fexam, grade;
    FILE *grades = fopen("1-Grades.txt", "r");
    FILE *ptrp = fopen("1-Pass.txt", "w");
    FILE *ptrf = fopen("1-Fail.txt", "w");

    fscanf(grades, "%d %s %f %f %f", &num, name, &mexam, &fexam, &grade);
    while (!feof(grades)) {
        if (grade >= 50.0)
            fprintf(ptrp, "%d\t%s\t%.2f\t%.2f\t%.2f\n", num, name, mexam, fexam, grade);
        else
            fprintf(ptrf, "%d\t%s\t%.2f\t%.2f\t%.2f\n", num, name, mexam, fexam, grade);

        fscanf(grades, "%d %s %f %f %f", &num, name, &mexam, &fexam, &grade);
    }
    fclose(grades);
    fclose(ptrp);
    fclose(ptrf);
    printf("--------------------------------\n\n");
}
