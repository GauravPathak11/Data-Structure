#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int ele;
    int pos;
    scanf("%d",&ele);
    for (int i=0;i<n;i++){
        if (arr[i]==ele){
            pos=i;
            break;
        }
    }
    for (int i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }
    for (int i=0;i<n-1;i++){
        printf("%d",arr[i]);
    }
        

    
    return 0;
}