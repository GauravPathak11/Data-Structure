#include<stdio.h>
void main(){

int arr[]={1,2,3,4,5,6,8,8,3};
int length=sizeof(arr)/sizeof(arr[0]);

int i,j;
printf("repeated element in given array\n");
for(i=0;i<length;i++){

    for(j=i+1;j<length;j++){
        if(arr[i] == arr[j])
            printf("%d",arr[j]);
    }
}


return 0;

}
