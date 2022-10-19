// 35 point

#include<stdlib.h>
#include<stdio.h>

struct Student{
	int id;
	float grade;
	char name[41];
};
typedef struct Student Student;

void update(FILE* file){
	int counter = 0;

	while (!feof(file) && counter++ <= 100) {

		Student tempStudent = { 0,0,"" };
		fseek(file,sizeof(Student) * (counter-1),SEEK_SET);

		fread(&tempStudent, sizeof(Student), 1, file);

		tempStudent.grade += 10;

		fwrite(&tempStudent, sizeof(Student), 1, file);
	}
}

void bestStudent(FILE* file){
	int counter = 0;

	Student maxStudent = { 0,0,"" };

	while (!feof(file) && counter++ <= 100) {

		Student tempStudent = { 0,0,"" };
		fseek(file, sizeof(Student) * (counter - 1), SEEK_SET);

		fread(&tempStudent, sizeof(Student), 1, file);

		if (maxStudent.grade > tempStudent.grade)
			maxStudent = tempStudent;
	}

	printf("Best Student Name:%s ||| his grade:%f |||| his id:%d\n", maxStudent.name, maxStudent.grade, maxStudent.id);
}

void calculateTheAVG(FILE* file){
	int counter = 0;

	float avg = 0;

	while (!feof(file) && counter++ <= 100) {

		Student tempStudent = { 0,0,"" };
		fseek(file, sizeof(Student) * (counter - 1), SEEK_SET);

		fread(&tempStudent, sizeof(Student), 1, file);

		avg += tempStudent.grade;
	}

	avg = avg / counter-1;
	printf("The avg is:%f\n",avg);
}


int main(){
	FILE* file = fopen("students.dat","a+");

	if(file == NULL)
		printf("This File isn't founded\n");
	else{
        update(file);
        bestStudent(file);
        calculateTheAVG(file);
    }

	fclose(file);

	return 0;
}