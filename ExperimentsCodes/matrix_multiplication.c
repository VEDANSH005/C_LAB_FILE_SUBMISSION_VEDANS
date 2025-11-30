
#include <stdio.h>

int main(){
    int m,n,p,q;
    scanf("%d%d%d%d",&m,&n,&p,&q);
    if(n!=p){
        printf("Not possible");
        return 0;
    }
    int A[m][n],B[p][q],C[m][q];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&A[i][j]);
    for(int i=0;i<p;i++)
        for(int j=0;j<q;j++)
            scanf("%d",&B[i][j]);

    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            C[i][j]=0;
            for(int k=0;k<n;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// By Vedans rawat
