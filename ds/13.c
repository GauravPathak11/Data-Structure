#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array");
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int i;
    printf("enter the element idx");
    scanf("%d",&i);
    int *b=&a[0];
    printf("%d",*b);
    long add=*b+sizeof(a[0])*(i);
    printf("%d",add);
    return 0;
}