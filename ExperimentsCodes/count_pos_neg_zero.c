
#include <stdio.h>

int main(){
    int n,p=0,ne=0,z=0;
    char c='y';
    while(c=='y'){
        scanf("%d",&n);
        if(n>0) p++;
        else if(n<0) ne++;
        else z++;
        printf("continue? ");
        scanf(" %c",&c);
    }
    printf("%d %d %d\n",p,ne,z);
    return 0;
}
// By Vedans rawat
