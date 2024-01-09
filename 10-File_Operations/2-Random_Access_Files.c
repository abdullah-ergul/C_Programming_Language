/**
 * @file 1-Random_Access_Files.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 09-01-2024
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 // ? Question: Information for 20 customers of a bank is stored in a random Access file named "Customer.dat"
 // ? Accordingn to given information solve the questions below;
 */

#include <stdio.h>
#include <stdlib.h>

struct customer {
    int accnum;
    char name[20];
    char sname[25];
    double deposit;
};
typedef struct customer customer;

int chooseFunc(void);
void mkFile(void);
void listFile(void);
void listIndebtedAccounts(void);
void findMaxDeposit(void);
void transferRecords(void);
void updateRecords(void);


// Random Access Files allow direct access to any record in the file, regardless of its position.
// Each record in the file is assigned a unique identifier, such as a record number or key.
// This allows for efficient retrieval and modification of specific records without the need to read through all the previous records.
// Random Access Files can store data in any order and are not limited by the sequence of records.
// However, they require more complex implementation compared to sequential access files and may result in larger file sizes.
// Random Access Files typically use binary format for storage. In this file, we will use .dat format.
int main() {
    int choice = chooseFunc();

    while (1) {
        if (choice == 1)
            mkFile();
        else if (choice == 2)
            listFile();
        else if (choice == 3)
            listIndebtedAccounts();
        else if (choice == 4)
            findMaxDeposit();
        else if (choice == 5)
            transferRecords();
        else if (choice == 6)
            updateRecords();
        else if (choice == 0)
            break;
        else
            printf("Your Choice is Not Found! Please Enter a Diffrent Number.");

        choice = chooseFunc();
    }


    return 0;
}

int chooseFunc(void) {
    int choice;
    printf("1 for Create a File as 'customer.dat' (If There Is a File With This Name, That File Is Deleted)\n");
    printf("2 for List Customers\n");
    printf("3 for List Customers With a Balance Greater Than '0'\n");
    printf("4 for Show Maximum Balance Account\n");
    printf("5 for Create a File as 'list.txt' to Account's for List Balance Account's Greater Than '300'\n");
    printf("6 for Update Balances whose Customer's Have Balance Greater Than '300'\n");
    printf("0 for Exit Program\n");
    printf("\nYour Choice: ");  scanf("%d", &choice);
    printf("\n");

    return choice;
}

void mkFile(void) {
    int i, fsize;
    FILE *fptr;
    customer empty = {0, "", "", 0.0};

    if ((fptr = fopen("customer.dat", "w")) == NULL)
        printf("Can't Create File!\n");
    else {
        printf("Enter Customer Count: ");  scanf("%d", &fsize);

        for (i=1 ; i<fsize ; i++)
            fwrite(&empty, sizeof(customer), 1, fptr);      // fwrite() function writes the data in binary format. It used to write a random access file.

        printf("%d Size File Created!\n\n", fsize);

        rewind(fptr);    // rewind() function sets the pointer to the beginning of the file.
        printf("(Enter 0 For Exit)Account Number: ");  scanf("%d", &empty.accnum);
        for (i=1 ; i<fsize && empty.accnum != 0 ; i++) {
            printf("Enter Account Informations: ");  scanf("%s %s %lf", empty.name, empty.sname, &empty.deposit);
            fwrite(&empty, sizeof(customer), 1, fptr);
            printf("\n");
            printf("(Enter 0 For Exit)Account Number: ");  scanf("%d", &empty.accnum);
        }
        printf("File Updated!\n\n");
        fclose(fptr);
    }
    printf("\n--------------------------------\n\n");
}

void listFile(void) {
    FILE *fptr;
    customer info = {0, "", "", 0.0};

    if ((fptr = fopen("customer.dat", "r")) == NULL)
        printf("Can't Find File!\n");
    else {
        while (!feof(fptr)) {
            fread(&info, sizeof(customer), 1, fptr);    // fread() function reads the data in binary format. It used to read a random access file.
            printf("%d %s %s %lf\n", info.accnum, info.name, info.sname, info.deposit);
        }
        fclose(fptr);
    }
    printf("\n--------------------------------\n\n");
}

// ? 1- Write a function having prototype given below that returns how many customers stored in the file whose deposit is less than zero.
void listIndebtedAccounts(void) {
    int count = 0;
    FILE *fptr;
    customer info = {0, "", "", 0.0};

    if ((fptr = fopen("customer.dat", "r")) == NULL)
        printf("Can't Find File!\n");
    else {
        while (!feof(fptr)) {
            fread(&info, sizeof(customer), 1, fptr);
            if (info.deposit > 0) {
                printf("%d %s %s %lf\n", info.accnum, info.name, info.sname, info.deposit);
                count++;
            }
        }
        printf("Count of Customers whose Balance Greater Than '0': %d\n", count);
        fclose(fptr);
    }
    printf("\n--------------------------------\n\n");
}

// ? 2- Write a function having prototype given below that returns the customer information as a struct that has maximum amount of money in his account.
// ? How many customers stored in the file whose deposit is less than zero?
void findMaxDeposit(void) {
    FILE *fptr;
    customer info = {0, "", "", 0.0}, max= {0, "", "", 0.0};

    if ((fptr = fopen("customer.dat", "r")) == NULL)
        printf("Can't Find File!\n");
    else {
        while (!feof(fptr)) {
            fread(&info, sizeof(customer), 1, fptr);
            if (info.deposit > max.deposit)
                max= info;
        }
        printf("Maximum Balanced Account:\n");
        printf("%d %s %s %lf\n", max.accnum, max.name, max.sname, max.deposit);
        fclose(fptr);
    }
    printf("\n--------------------------------\n\n");
}

// ? 3- Write a function having prototype given below that transfers all information of customers into a
// ? sequential access file named “2-Customer_300.txt"” whose deposit is greater than or equal to 300 .
void transferRecords(void) {
    FILE *fptr, *fptr2;
    customer info = {0, "", "", 0.0};

    if ((fptr= fopen("customer.dat", "r")) == NULL)
        printf("Can't Find File!\n");
    else if ((fptr2= fopen("2-Customer_300.txt", "w")) == NULL)
        printf("Can't Create File!\n");
    else {
        while (!feof(fptr)) {
            fread(&info, sizeof(customer), 1, fptr);
            if (info.deposit > 300)
                fprintf(fptr2,"%d %s %s %lf\n",info.accnum, info.name, info.sname, info.deposit);
        }
        printf("File Has Been Created!\n");
        fclose(fptr);
        fclose(fptr2);
    }
    printf("\n--------------------------------\n\n");
}

// ? 4- Write a function having prototype given below that increases deposit by 50 and update record of all 
// ? customers whose deposit is greater than or equal to 300.
void updateRecords(void) {
    int i = 0;
    FILE *fptr;
    customer info = {0, "", "", 0.0};

    if ((fptr = fopen("customer.dat", "r+")) == NULL)
        printf("Can't Find File!\n");
    else {
            fread(&info, sizeof(customer), 1, fptr);
        while (!feof(fptr)) {
            if (info.deposit > 300.0) {
                info.deposit += 50.0;
                fseek(fptr, i*sizeof(customer), SEEK_SET);
                fwrite(&info, sizeof(customer), 1, fptr);       // The reason for our error is that the pointer is not in the right place after using fwrite().
                fseek(fptr, (i+1)*sizeof(customer), SEEK_SET);  // To hide our mistake, we assign the pointer to a position from the beginning.
            }
            i++;
            fread(&info, sizeof(customer), 1, fptr);
        }
        printf("Process is Successful!\n");
        fclose(fptr);
    }
    printf("\n--------------------------------\n\n");
}
