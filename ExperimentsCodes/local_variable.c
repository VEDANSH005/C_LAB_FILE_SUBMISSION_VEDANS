
#include <stdio.h>

int main(){
    int x=5;
    {
        int x=10;
        printf("%d\n",x);
    }
    printf("%d\n",x);
    return 0;
}
// By Vedans rawat
