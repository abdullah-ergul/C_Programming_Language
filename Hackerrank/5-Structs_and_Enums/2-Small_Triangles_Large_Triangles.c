#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	
    triangle Ttemp;
    int j, i, arrN= (int *)malloc(n * sizeof(int));
    double p, S, Dtemp, *arrS= (double *)malloc(n * sizeof(double));
    for(i=0; i<n; i++){
        p= ((double)tr[i].a + (double)tr[i].b + (double)tr[i].c)/2;
        // printf("**%lf**\n",p);
        S= sqrt(p*(p- (double)tr[i].a)*(p- (double)tr[i].b)*(p- (double)tr[i].c));
        arrS[i]= S;
        // printf("**%lf**\n",arrS[i]);
    }
    for(i=0; i<n; i++){
        for(j=1; j<n; j++){
            if(arrS[j-1] > arrS[j]){
                Dtemp= arrS[j-1];  Ttemp= tr[j-1];
                arrS[j-1]= arrS[j];  tr[j-1]= tr[j];
                arrS[j]= Dtemp;  tr[j]= Ttemp;
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}