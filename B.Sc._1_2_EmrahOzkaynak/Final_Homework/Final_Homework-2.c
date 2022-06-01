#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci{
    int no; char ad[20]; float not;
};
typedef struct ogrenci ogrenci;


int main(){
    int i=0;
    FILE *notptr, *basariptr;
    ogrenci bilgiOgrenci= {0,"",0.0};

    if((notptr= fopen("notlar.txt","r")) == NULL)
        printf("Dosya Acilamadi!");
    else if((basariptr= fopen("basari.dat","w")) == NULL)
        printf("Dosya Olusturulamadi!");
    else{
        while(!feof(notptr)){
            fscanf(notptr, "%d %s %f", &bilgiOgrenci.no, bilgiOgrenci.ad, &bilgiOgrenci.not);

            if((strcmp(bilgiOgrenci.ad, "Ahmet") == 0) && (bilgiOgrenci.not >= 60.0)){
                fwrite(&bilgiOgrenci, sizeof(ogrenci), 1, basariptr);
                fseek(basariptr, (i+1)*sizeof(ogrenci), SEEK_SET);
                i++;
            }
        }
    }

    fclose(notptr);
    fclose(basariptr);

    return 0;
}
