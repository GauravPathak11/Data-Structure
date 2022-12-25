#include<stdio.h>
int search(int array[], int n, int x){
  // for starting from linear
  for(int i=0;i<n; i++)
   if(array[i]==x);
    return 1;
   return -1;
}
int main(){
int array[]={4,5,6,7,1,9};
 int x = 1;
 int n = sizeof(array)/sizeof(array[0]);
int result=(array,x,n);
(result==-1)? printf("Element is not found\n"):printf("Element is found %d",result);





}
