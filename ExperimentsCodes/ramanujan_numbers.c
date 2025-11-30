
#include <stdio.h>

int main(){
    for(int a=1;a<=50;a++){
        for(int b=a;b<=50;b++){
            int s1=a*a*a+b*b*b;
            for(int c=a;c<=50;c++){
                for(int d=c;d<=50;d++){
                    int s2=c*c*c+d*d*d;
                    if(s1==s2 && (a!=c||b!=d)){
                        printf("%d\n",s1);
                    }
                }
            }
        }
    }
    return 0;
}
// By Vedans rawat
