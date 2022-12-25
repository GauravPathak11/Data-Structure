#include<stdio.h>
int main(){
    int n1,n2;
    printf("enter the no of elements in array a and b");
    scanf("%d %d",&n1,&n2);
    int arr1[n1],arr2[n2];
    printf("enter the elements");

    for (int i=0;i<n1;i++ ){
        scanf("%d",&arr1[i]);

    }
    printf("enter the element of b array");
    for (int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    int i=0,j=0;
   
    int c[n1+n2];
    int k=0;
    printf("the intersection is ");
    while(i<n1 &&j<n2){
        if (arr1[i]>arr2[j]){
            j++;
        }
        if (arr1[i]<arr2[j]){
            i++;

        }
        if (arr1[i]==arr2[j]){
            printf(" %d",arr1[i]);
            j++;
            i++;
        }

    }
    while(i<n1){
        i++;
    }
    while (j<n2){
        j++;
    }

    return 0;
}
