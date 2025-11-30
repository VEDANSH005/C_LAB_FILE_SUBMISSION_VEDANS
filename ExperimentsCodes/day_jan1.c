
#include <stdio.h>

int main() {
    int y;
    scanf("%d",&y);
    int d=(y-1 + (y-1)/4 - (y-1)/100 + (y-1)/400)%7;
    char *days[]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    printf("%s\n", days[d]);
    return 0;
}
// By Vedans rawat
