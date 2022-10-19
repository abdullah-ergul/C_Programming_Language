#include <stdio.h>
#include <stdlib.h>

struct data{
    int sayi;
    struct data *next;
};
typedef struct data node;

node *tersListe(node *);


int main(){
    int i;
    node *head, *p;

    for(i=0; i<10; i++){
		if(i==0){
			head= (node *)calloc(1,sizeof(node));
			p= head;
		}
		else{
			p->next = (node *)calloc(1,sizeof(node));
			p= p->next;
		}
        printf("%d. Sayi: ",i); scanf("%d", &p->sayi);
	}
    p->next = NULL;

    head= tersListe(head);
    p=head;
    while(p != NULL){
        printf("\n---> %d",p->sayi);
        p= p->next;
    }

    return 0;
}

node *tersListe(node *head){
    node *q= head, *temp, *p= NULL;

    while(q != NULL){
        temp= q->next;
        q->next = p;
        p= q;
        q= temp;
    }
    head= p;

    return head;
}
