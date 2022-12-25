#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int temp=0;
    int c=n-1;
    for (int i=0;i<n;i++){
        if (i!=c){
        a[i]=temp;
        a[i]=a[c];
        a[c]=temp;
        c--;
        }
    }
    for (int i=0;i<n;i++){
        printf("%d",a[i]);  
        }
    
    return 0;

}