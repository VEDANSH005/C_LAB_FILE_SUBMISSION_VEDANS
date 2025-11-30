
#include <stdio.h>

int main(){
    FILE *f=fopen("test.txt","w");
    fprintf(f,"Hello file");
    fclose(f);
    return 0;
}
// By Vedans rawat
