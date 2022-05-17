#include <stdio.h>
#include <stdlib.h>

struct customer{
int accnum; char name[20]; char sname[25]; double deposit;
}; typedef struct customer customer;

int chooseFunc(void);
void mkFile(void);
void listIndebtedAccounts(void);
void findMaxDeposit(void);
void transferRecords(void);
void updateRecords(void);


int main(){
    int chooice = chooseFunc();

    while(1){
        if(chooice == 1)
            mkFile();
        else if(chooice == 2)
            listIndebtedAccounts();
        else if(chooice == 3)
            findMaxDeposit();
        else if(chooice == 4)
            transferRecords();
        else if(chooice == 5)
            updateRecords();
        else if(chooice == 0)
            break;
        else
            printf("Your Choice is Not Found! Please Enter a Diffrent Number.");

        chooice = chooseFunc();
    }

    return 0;
}

int chooseFunc(void){
    int chooice;
    printf("1 for Create a File as 'customer.dat' (If There Is a File With This Name, That File Is Deleted)\n");
    printf("2 for List Customers With a Balance Greater Than '0'\n");
    printf("3 for Show Maximum Balance Account\n");
    printf("4 for Create a File as 'list.txt' to Account's for List Balance Account's Greater Than '300'\n");
    printf("5 for Update Balances whose Customer's Have Balance Greater Than '300'\n");
    printf("0 for Exit Program\n");
    printf("\nYour Choice: "); scanf("%d",&chooice);

    return chooice;
}

void mkFile(void){
    int i;
    FILE *fptr;
    customer empty= {0, "", "", 0.0};

    if((fptr= fopen("customer.dat","w")) == NULL)
        printf("File Can't Create!\n");
    else{
        for(i=0; i<20; i++){
            fwrite(&empty, sizeof(customer), 1, fptr);
        }
        fclose(fptr);
        printf("File Created!\n");
    }
    printf("\n--------------------------------\n\n");
}

void listIndebtedAccounts(void){
    int count=0;
    FILE *fptr;
    customer info= {0, "", "", 0.0};

    if((fptr= fopen("customer.dat","r")) == NULL)
        printf("File Can't Find!\n");
    else{
        while(!feof(fptr)){
            fread(&info, sizeof(customer), 1, fptr);
            if(info.deposit > 0)
                count++;
        }
        printf("Count of Customers whose Balance Greater Than '0': %d\n",count);
    }
    printf("\n--------------------------------\n\n");
}

void findMaxDeposit(void){
    FILE *fptr;
    customer info= {0, "", "", 0.0}, max= {0, "", "", 0.0};

    if((fptr= fopen("customer.dat","r")) == NULL)
        printf("File Can't Find!\n");
    else{
        while(!feof(fptr)){
            fread(&info, sizeof(customer), 1, fptr);
            if(info.deposit > max.deposit)
                max= info;
        }
        printf("Maximum Balanced Account:\n");
        printf("%d %c %c %lf\n",max.accnum, max.name, max.sname, max.deposit);
    }
    printf("\n--------------------------------\n\n");
}

void transferRecords(void){

}

void updateRecords(void){

}
