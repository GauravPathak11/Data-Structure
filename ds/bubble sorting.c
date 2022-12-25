#include<stdio.h>
int main(){

int arr[50],i,j,n,temp;
printf("enter the size of array\n");
scanf("%d",&n);
printf("Enter the element of the arrya\n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){


for(j=0;j<n-i-1;j++){
    if(arr[i]>arr[i+1]){
   temp=arr[i];
   arr[i]=arr[i+1];
   arr[i+1]=temp;

    }

}
}
 printf("The  sorted array is");
 for(i=0;i<n;i++){
    scanf("%d",&arr[i]);

 }



 return 0;
}












