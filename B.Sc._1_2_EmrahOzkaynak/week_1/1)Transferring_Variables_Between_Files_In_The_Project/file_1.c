#include <stdio.h>

void func(void);

int gid= 287;

int main(){
	printf("gid variable on file_1.c: %d\n",gid);
	func();
	
	return 0;
}
