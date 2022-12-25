#include<stdio.h>

 int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     printf("ENter the elements of array: ");
//     for (int i=0;i<n;i++){
//         scanf("%d",&a[i]);

//     }
//     int max=a[0];
//     int min=a[0];
//     for(int i=0;i<n;i++){
//         if (a[i]>max){
//             max=a[i];
//         }
//     }
//     int c[max+1];
//     for (int i=0;i<max+1;i++){
//         c[i]=0;
//     }
// //    int  count=0;
//     for (int i=0;i<n;i++){
//         c[a[i]]++;
//     }
//     printf("the element is repeted:\n");
//     for (int i=0;i<=max;i++){
//         if (c[i]>1){
//             printf("%d reapeat %d times \n",i,c[i]);
//         }
//     }
//     printf("the element is not repeted:");
//     for (int i=min;i<=max;i++){
//         if (c[i]==1){
//             printf("%d ",i);
//         }
//     }
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
}printf("the elements is not repeted:\n");
for (int i=0;i<=max;i++){
    if (c[i]==1){
        printf("%d",i);
        }
   
}
 }
