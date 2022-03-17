#include <stdio.h>

void fonk(void);
void fonk_sta(void);

int main(void){
	fonk();
	fonk_sta();
	
	printf("\n");
	
	fonk();
	fonk_sta();
	
	return 0;
}

void fonk(void){
	int id= 1;
	
	printf("fonk() id degisken degeri= %d\n",id);
	id= id+21;
	
	printf("fonk() id degisken degeri= %d\n",id);
}

void fonk_sta(void){
	static int id= 1;
	printf("fonk_sta() id degisken degeri= %d\n",id);
	id= id+21;
	printf("fonk_sta() id degisken degeri= %d\n", id);
}
