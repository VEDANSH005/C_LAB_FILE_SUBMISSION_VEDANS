
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int max=a[0],sec=-99999;

    for(int i=1;i<n;i++){
        if(a[i]>max){
            sec=max;
            max=a[i];
        } else if(a[i]>sec && a[i]!=max){
            sec=a[i];
        }
    }
    printf("%d\n",sec);
    return 0;
}
// By Vedans rawat
