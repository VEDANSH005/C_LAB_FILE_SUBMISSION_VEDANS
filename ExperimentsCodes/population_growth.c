
#include <stdio.h>

int main(){
    float p=100000;
    for(int i=1;i<=10;i++){
        p*=1.1;
        printf("Year %d = %.2f\n",i,p);
    }
    return 0;
}
// By Vedans rawat
