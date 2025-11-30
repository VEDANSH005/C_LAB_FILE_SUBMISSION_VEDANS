
#include <stdio.h>

struct cmp{
    int r,i;
};

int main(){
    struct cmp a,b;
    scanf("%d%d%d%d",&a.r,&a.i,&b.r,&b.i);
    printf("Add = %d + i%d\n",a.r+b.r,a.i+b.i);
    printf("Sub = %d + i%d\n",a.r-b.r,a.i-b.i);
    return 0;
}
// By Vedans rawat
