// 25 Point

#include <stdio.h>

void func(int a, int b, int c){
    static int i= 0;

    if(a <= 0){
        return;
    }
    func(a-3, b-2, c+a);
    printf("%d. Output: %d %d %d\n", ++i, a ,b ,c);
}

 int main(){
    func(15, 12, 8);

    return 0;
 }