/**
 * @file 1-Linked_Lists.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 09-01-2024
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 // ? Question: Write a C program that is capable of performing several operations with student 
 // ? information of a class that is stored as a linear linked list in the memory.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct user {
	int num;
	char name[15];
	float mexam;
	float fexam;
	float grade;
	struct user *next;	// This is a pointer to the next node in the list. We can imagine it as a pointer to the next student.
};
typedef struct user node;

node *createList(void);
void addRec(node *head);
void listRec(node *head);
void updateRec(node *head);
void delRec(node *head);
void calcAvg(node *head);
void bestRec(node *head);


int main() {

	int choice;
	node *head;
	head = createList();

	// ? a) Program will have a main menu with options below:
	while (1) {
		// ? 1- Add New Record
		printf("1 for Add New Record\n");

		// ? 2- List Records
		printf("2 for List Records\n");

		// ? 3- Update Record 
		printf("3 for Update Record\n");

		// ? 4- Delete Record
		printf("4 for Delete Record\n");

		// ? 5- Calculate Class Average
		printf("5 for Calculate Class Average\n");

		// ? 6- List Best Student According to Average
		printf("6 for List Best Student According to Average\n");
		
		printf("\nYour Choice: ");  scanf("%d",&choice);

		switch (choice) {
			case 1:
				addRec(head);
				break;
			case 2:
				listRec(head);
				break;
			case 3:
				updateRec(head);
				break;
			case 4:
				delRec(head);
				break;
			case 5:
				calcAvg(head);
				break;
			case 6:
				bestRec(head);
				break;
		}
	}


	return 0;
}

node *createList() {
	int n, i;
	node *head, *p;
	printf("How many students in your list: ");  scanf("%d", &n);
	printf("\n");

	for (i=0 ; i<n ; i++) {
		if (i==0) {		// If it is the first node, we need to allocate memory for it.
			head = (node *)malloc(1*sizeof(node));
			p = head;
		}
		else {			// If it is not the first node, we need to allocate memory for it.
			p->next = (node *)malloc(1*sizeof(node));
			p = p->next;	// We need to move the pointer to the next node.
		}
		printf("%d. Student's Num: ", i+1);  scanf("%d",&p->num);
		printf("%d. Student's Name: ", i+1);  scanf("%s",p->name);
		printf("%d. Student's Midterm Exam: ", i+1);  scanf("%f",&p->mexam);
		printf("%d. Student's Final Exam: ", i+1);  scanf("%f",&p->fexam);
		p->grade = (p->mexam * 0.4) + (p->fexam * 0.6);
		printf("\n");
	}
	p->next = NULL;		// Last node's next pointer must be NULL.
	printf("--------------------------------\n\n");

	return head;
}

void addRec(node *head) {
	int n, i, k=1;
	node *p = head;
	printf("How many students you want to add: ");  scanf("%d", &n);
	printf("\n");

	while (1) {
		if (p->next == NULL)
			break;
		p = p->next;
	}

	for (i=0 ; i<n ; i++) {
		p->next = (node *)malloc(1*sizeof(node));
		p = p->next;
		printf("Student's Num: ");  scanf("%d", &p->num);
		printf("Student's Name: ");  scanf("%s", p->name);
		printf("Student's Midterm Exam: ");  scanf("%f", &p->mexam);
		printf("Student's Final Exam: ");  scanf("%f", &p->fexam);
		p->grade = (p->mexam * 0.4) + (p->fexam * 0.6);
		printf("\n");
		k++;
	}
	p->next = NULL;
	printf("--------------------------------\n\n");
}

// ? b) When Listing records option has been selected. Show sub menu as given below:
// ? 1- Search according to number
// ? 2- Search according to name
// ? 3- List students having passing grade that is greater than or equal to 60.
void listRec(node *head) {
	int choice;
	node *p = head;

	printf("1 for Search according to number\n");
	printf("2 for Search according to name\n");
	printf("3 for List students having passing grade that is greater than or equal to 60\n");
	printf("\nYour Choice: ");  scanf("%d", &choice);

	if (choice == 1) {
		int num;
		printf("Enter the number of the student whose information you want to receive: ");  scanf("%d", &num);
		printf("\n");
		while (p->num != num) {
			p = p->next;
		}
		printf("Student's Num: %d\n", p->num);
		printf("Student's Name: %s\n", p->name);
		printf("Student's Midterm Exam: %.2f\n", p->mexam);
		printf("Student's Final Exam: %.2f\n", p->fexam);
		printf("Student's Final Grade: %.2f\n", p->grade);
	}
	else if (choice == 2) {
		char name[15];
		printf("Enter the name of the student whose information you want to receive: ");  scanf("%s", name);
		printf("\n");
		while (strcmp(p->name, name) != 0) {
			p = p->next;
		}
		printf("Student's Num: %d\n", p->num);
		printf("Student's Name: %s\n", p->name);
		printf("Student's Midterm Exam: %.2f\n", p->mexam);
		printf("Student's Final Exam: %.2f\n", p->fexam);
		printf("Student's Final Grade: %.2f\n", p->grade);
	}
	else if (choice == 3) {
		while (p != NULL) {
			if (p->grade >= 60) {
				printf("Student's Num: %d\n", p->num);
				printf("Student's Name: %s\n", p->name);
				printf("Student's Midterm Exam: %.2f\n", p->mexam);
				printf("Student's Final Exam: %.2f\n", p->fexam);
				printf("Student's Final Grade: %.2f\n", p->grade);
			}
			p = p->next;
		}
	}
	else {
		printf("Wrong Choice!\n");
	}
	printf("\n--------------------------------\n\n");
}

// ? c) Updating a record will be carried out according to student number.
// ? User can e able to update Midterm grade, Final grade and name.
void updateRec(node *head) {
	int num;
	node *p = head;

	printf("Which Student Do You Want To Change Record? Give a Number: ");  scanf("%d", &num);

	while (p->num != num)
		p= p->next;

	printf("\nStudent's Num: ");  scanf("%d", &p->num);
	printf("Student's Name: ");  scanf("%s", p->name);
	printf("Student's Midterm Exam: ");  scanf("%f", &p->mexam);
	printf("Student's Final Exam: ");  scanf("%f", &p->fexam);
	p->grade = (p->mexam * 0.4) + (p->fexam * 0.6);
	printf("\n--------------------------------\n\n");
}

// ? d) Deleting a record will be carried out according to student number.
// ? User can e able to update Midterm grade, Final grade and name.
void delRec(node *head) {
	int num;
	node *p = head, *q = head->next;

	printf("\nWhich Student Do You Want To Delete Record? Give a Number: ");  scanf("%d", &num);

	while (q->num != num) {
		q = q->next;
		p = p->next;
	}

	p->next = q->next;
	free(q);
	printf("Record was Succesfully Deleted!\n");
	printf("\n--------------------------------\n\n");
}

void calcAvg(node *head) {
	int i=0, avg=0;
	node *p = head;

	for (p ; p != NULL ; p= p->next) {
		avg += p->grade;
		i++;
	}

	avg /= i;
	printf("Class Avarage is: %d\n", avg);
	printf("\n--------------------------------\n\n");
}

void bestRec(node *head) {
	node *p = head;
	int n=0, i, max = p->grade;


	for (i=0 ; p != NULL ; i++) {
		if (p->grade > max) {
			n = i;
			max = p->grade;
		}
		p = p->next;
	}

	p = head;
	i = 0;
	while (i < n) {
		if (p != NULL) {
			p = p->next;
		}
		i++;
	}
	printf("\nBest Student's;\n");
	printf("Num: %d\n", p->num);
	printf("Name: %s\n", p->name);
	printf("Midterm Exam: %.2f\n", p->mexam);
	printf("Final Exam: %.2f\n", p->fexam);
	printf("Final Grade: %.2f\n", p->grade);
	printf("\n--------------------------------\n\n");
}
