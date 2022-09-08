#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    strcmp(a,b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    strcmp(b,a);
}

int characters_count(const char *s)
{
    int n = 0;
    int count[128] = {0};
    if (NULL == s)
    {
        return -1;
    }
    while(*s != '\0')
    {
        if (!count[*s])
        {
            count[*s]++;
            n++;
        }
        s++;
    }
    return n;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b)
{
    int con = characters_count(a) - characters_count(b);
    return (con ? con : lexicographic_sort(a, b));
}

int sort_by_length(const char* a, const char* b) {
    if(strlen(a) > strlen(b))
        return 1;
    else if(strlen(a) == strlen(b))
        lexicographic_sort(a,b);
    else
        return 0;
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    int i,x=0;

    while(x != 1){
    x=1;
        for(i=0; i<len; i++){
            if(cmp_func(arr[i], arr[i+1]) > 0){
                char *temp= arr[i];
                arr[i]= arr[i+1];
                arr[i+1]= temp;
                x= 0;
            }
        }
    }
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}