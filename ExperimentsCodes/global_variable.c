
#include <stdio.h>

int g=10;

void fun(){
    printf("%d\n", g);
}

int main(){
    fun();
    g=20;
    fun();
    return 0;
}
// By  Vedans rawat
