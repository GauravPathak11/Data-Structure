#include<stdio.h>

int main(){
    int m;
    int n;
    printf("enter the order of a");
    scanf ("%d %d",&n,&m);
printf("enter the elements");
    int a[n][m];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int p,q;
    printf("enter the order of b");

    scanf("%d %d",&p,&q);
    int b[p][q];
    printf("enter the elements of b");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int c[m][q];
    int k=0;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
        c[i][j]=0;
        for (int k=0;k<n;k++){
            c[i][j]+=a[i][k]*b[k][j];
        }
        }
    }
    for (int i=0;i<m;i++){
        for (int j=0;j<q;j++){
            printf("%d ",c[i][j]);            
        }
        printf("\n");
    }
    return 0;
}