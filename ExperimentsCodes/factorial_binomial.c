
#include <stdio.h>

int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}

int main(){
    int n,r;
    scanf("%d%d",&n,&r);
    int ncr = fact(n)/(fact(r)*fact(n-r));
    printf("%d\n",ncr);
    return 0;
}
// By Vedans rawat
