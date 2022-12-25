#include<stdio.h>

int main(){
    int n;
    int key;
    int pos;
    printf("enter the length of array");
    scanf("%d",&n);
    int arr[n+1];
    printf("enter the elements of array");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the key");
    scanf("%d",&key);
    for (int i=n-1;i>0;i--){
        if (arr[i]<key){
            pos=i+1;
            break;
        }
    }
    for (int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];

    }
    
    arr[pos]=key;
    for (int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}