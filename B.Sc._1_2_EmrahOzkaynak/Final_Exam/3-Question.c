// 15 point

#include <stdio.h>

int main(){

    FILE *file= fopen("3-Question.txt","w");
    fprintf(file,"!!!BUNU YAZAN MALDIR!!!");
    fclose(file);

    file= fopen("3-Question.txt","w+");
    fprintf(file,"---END OF FILE---");
    fclose(file);
}
