#include<stdio.h>

int main(){
    int n;
    printf("enter the no of element");
    scanf("%d",&n);
    int arr[n+1];
    printf("enter the element of array");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int pos;
    int val;
    printf("enter the position idx");
    scanf("%d",&pos);
    printf("enter the value");
    scanf("%d",&val);
    for(int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];

    }
    arr[pos]=val;
    for (int i=0;i<n+1;i++){
        printf("%d",arr[i]);
    }
    return 0;
}