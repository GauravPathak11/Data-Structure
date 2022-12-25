#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];

    printf("enter a elements");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }

    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d",a[i][j]);
        }
printf("\n");
    }
    printf("\n");
    int c[m][n];

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            c[j][i]=a[i][j];
            
        }
    }
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}