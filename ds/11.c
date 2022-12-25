#include<stdio.h>

int main(){
    int a[]={1,2,3,4,5,6,22};
    int b[]={2,3,6,9,5,8,1};
    int n1=sizeof(a)/4;
    int n2=sizeof(b)/4;
    
    for (int i=0;i<n1;i++){
        for (int j=0;j<n2;j++){
            if (a[i]==b[j]){
                a[i]-=b[j];
            }
        }
    }
    for (int i=0;i<n1;i++){
        if (a[i]!=0){
            printf("%d ",a[i]);
        }
    }
    return 0;
}