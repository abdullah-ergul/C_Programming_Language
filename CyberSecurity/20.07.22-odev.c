#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct user{
	int num; char name[15]; float mexam; float fexam; float grade; struct user *next;
};
typedef struct user node;

node * createList(void);
void addRec(node *head);
void listRec(node *head);


int main(){
	int n;
	node *head;
	head= createList();

	while(1){
		printf("1 for Add New Record\n");
		printf("2 for List Records\n");
		printf("\nYour Choice: "); scanf("%d",&n);

		switch(n){
			case 1:
				addRec(head);
				break;
			case 2:
				listRec(head);
				break;
		}
	}
	return 0;
}

node * createList(){
	int n, i;
	node *head, *p;
	printf("How many students in your list: "); scanf("%d",&n);
	printf("\n");

	for(i=0; i<n; i++){
		if(i==0){
			head= (node *)calloc(1,sizeof(node));
			p= head;
		}
		else{
			p->next = (node *)calloc(1,sizeof(node));
			p= p->next;
		}
		printf("%d. Student's Num: ",i+1); scanf("%d",&p->num);
		printf("%d. Student's Name: ",i+1); scanf("%s",p->name);
		printf("%d. Student's Midterm Exam: ",i+1); scanf("%f",&p->mexam);
		printf("%d. Student's Final Exam: ",i+1); scanf("%f",&p->fexam);
		p->grade = (p->mexam * 0.4) + (p->fexam * 0.6);
		printf("\n");
	}
	p->next = NULL;
	printf("--------------------------------\n\n");

	return head;
}

void addRec(node *head){
	int n, i, k=1;
	node *p= head;
	printf("How many students you want to add: "); scanf("%d",&n);
	printf("\n");

	while(1){
		if(p->next == NULL)
			break;
		p= p->next;
	}

	for(i=0; i<n; i++){
		p->next = (node *)calloc(1,sizeof(node));
		p= p->next;
		printf("Student's Num: "); scanf("%d",&p->num);
		printf("Student's Name: "); scanf("%s",p->name);
		printf("Student's Midterm Exam: "); scanf("%f",&p->mexam);
		printf("Student's Final Exam: "); scanf("%f",&p->fexam);
		p->grade = (p->mexam * 0.4) + (p->fexam * 0.6);
		printf("\n");
		k++;
	}
	p->next = NULL;
	printf("--------------------------------\n\n");
}

void listRec(node *head){
    char name[15];
	int n, number;
	node *p= head;

	printf("1 for Search according to number\n");
	printf("2 for Search according to name\n");
	printf("\nYour Choice: "); scanf("%d",&n);

    if(n == 1){
        printf("Enter Number: "); scanf("%d",&number);
        while(p != NULL){
            if(number == p->num){
                printf("\n");
	            printf("Num: %d\n",p->num);
	            printf("Name: %s\n",p->name);
	            printf("Midterm Exam: %.2f\n",p->mexam);
	            printf("Final Exam: %.2f\n",p->fexam);
	            printf("Final Grade: %.2f\n",p->grade);
                break;
            }
            p= p->next;
        }
        printf("There is no student for %d number!\n",number);
    }
    else if(n == 2){
        printf("Enter Name: "); scanf("%s",name);
        while(p != NULL){
            if(strcmp(name, p->name) == 0){
                printf("\n");
	            printf("Num: %d\n",p->num);
	            printf("Name: %s\n",p->name);
	            printf("Midterm Exam: %.2f\n",p->mexam);
	            printf("Final Exam: %.2f\n",p->fexam);
	            printf("Final Grade: %.2f\n",p->grade);
                break;
            }
            p= p->next;
        }
        printf("There is no student for %s name!\n",name);
    }
    else{
        printf("Wrong choice!\n");
    }

    printf("--------------------------------\n\n");
}
