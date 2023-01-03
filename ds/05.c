#include<stdio.h>

int main(){
    printf("enter the no of element in array");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("enter the element in array");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min =arr[0];
    int max=arr[0];
    //min...//max
    for (int i=0;i<n;i++){
        if (arr[i]<min){
            min=arr[i];
        }
        if (arr[i]>max){
            max=arr[i];
        }
    }
    int size=max;
    int check[size];
    for (int i=0;i<n;i++){
        check[arr[i]]=1;
    }
    for (int i=min;i<size;i++){
        if (check[i]!=1){
            printf("%d ",i);
        }
    }
    return 0;
}
