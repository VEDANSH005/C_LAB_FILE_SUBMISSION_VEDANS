
#include <stdio.h>

int main(){
    int l1,b1,l2,b2,l3,b3;
    scanf("%d%d%d%d%d%d",&l1,&b1,&l2,&b2,&l3,&b3);
    int p1=2*(l1+b1), p2=2*(l2+b2), p3=2*(l3+b3);
    int max = p1;
    if(p2>max) max=p2;
    if(p3>max) max=p3;
    printf("Max Perimeter = %d\n",max);
    return 0;
}
// By Vedans rawat
