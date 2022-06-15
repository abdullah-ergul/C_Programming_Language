// 25 point

#include <stdio.h>
#include <stdlib.h>

struct numbers{
    int number; struct numbers *next;
};
typedef struct numbers numbers;


numbers *delRec(numbers *head){
    numbers *p= head;
    numbers *q= p->next;
    int i, j;

    for(i=0; p->next != NULL; i++){
        p= p->next;
    }

    p= head;
    for(j=1; j < i/2; j++){
        p= p->next;
        q= q->next;
    }

    p->next = q->next;
    free(q);

    return head;
}

int main(){
    numbers *head= (numbers *)calloc(1,sizeof(numbers)), *p;
    int number, n=1, i;

    printf("Enter %d'th Number: ",n); scanf("%d",&number);
    while(number != -1){
        if(n == 1){
            head->number = number;
            head->next = (numbers *)calloc(1,sizeof(numbers));
            p= head;
            p= p->next;
        }
        else{
            p->number= number;
            p->next = (numbers *)calloc(1,sizeof(numbers));
            p= p->next;
        }
        n++;
        printf("Enter %d'th Number: ",n); scanf("%d",&number);
    }
    p= NULL;

    p= head;
    for(i=0; i<n; i++){
        printf("%d ", p->number);
        p= p->next;
    }

    printf("\n");
    head= delRec(head);

    p= head;
    for(i=0; i<n-1; i++){
        printf("%d ", p->number);
        p= p->next;
    }

    return 0;
}
