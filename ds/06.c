#include<stdio.h>

 int main(){
int n;
scanf("%d",&n);
printf("enter the elements of arr");
int a[n];
for (int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int max=a[0];
for (int i=0;i<n;i++){
    if(a[i]>max){
        max=a[i];
    }
}
int c[max+1];
for (int i=0;i<=max;i++){
    c[i]=0;
}
for (int i=0;i<n;i++){
    c[a[i]]++;
}
printf("the element is repets:\n");
for (int i=0;i<=max;i++){
    if (c[i]>1){
        printf("%d is %d times\n",i,c[i]);
        }
}
printf("the elements is not repeted:\n");
for (int i=0;i<=max;i++){
    if (c[i]==1){
        printf("%d",i);
        }  
    }
 }
