#include<stdio.h>

int main(){
    int n1;
    scanf("%d",&n1);
    int a[n1];
    for (int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    int n2;
    scanf("%d",&n2);
    int b[n2];
    for (int j=0;j<n2;j++){
        scanf("%d",&b[j]);
    }
    int c[n1+n2];
    int k=0;
    for (int j=0;j<n1;j++){
        c[k++]=a[j];

    }
    for (int j=0;j<n2;j++){
        c[k++]=b[j];
    }
    int temp;
     for(int i=0;i<n1+n2;i++)
    {
        for( int j=i+1;j<n1+n2;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    for (int j=0;j<n2+n1;j++){
        printf("%d",c[j]);
    }
    return 0;
}
